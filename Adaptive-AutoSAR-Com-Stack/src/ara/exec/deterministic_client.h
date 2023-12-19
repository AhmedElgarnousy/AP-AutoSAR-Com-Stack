#ifndef ARA_EXEC_DETERMINISTIC_CLIENT_H
#define ARA_EXEC_DETERMINISTIC_CLIENT_H
#include <stdint.h>
#include <future>
#include <chrono>
#include <mutex>
#include <condition_variable>
// #include "../core/result.h"

namespace ara
{
    namespace exec
    {
        /**
         * Kind: enumeration
         * Symbol: ActivationReturnType
         * Scope: namespace ara::exec
         * Underlying type: std::uint32_t
         * Syntax: enum class ActivationReturnType : std::uint32_t {...};
         */
        enum class ActivationReturnType : uint32_t
        {
            // Values
            kRegisterService = 0,  ///application shall register communication services(this must be the only occasion for performing service registering)
            kServiceDiscovery = 1, ///< Application shall discover its service server
            kInit = 2,             ///< Application shall intialize itself
            kRun = 3,              ///< Application shall perform its normal operation
            kTerminate = 4         ///< Application shall terminate itself
        };

        
        /**
         * Kind: class
         * Symbol: DeterministicClient
         * Scope: namespace ara::exec
         * Syntax: class ara::exec::DeterministicClient final {...};
         * Description: Class to implement operations on Deterministic Client .
         */
        class DeterministicClient final
        {
        public:
            /**
              * Kind: type alias
              * Symbol: TimeStamp
              * Scope: namespace ara::exec
              * Derived from: std::chrono::time_point<ara::core::SteadyClock>
              * Underlying type: std::uint32_t
              * Description: Time stamp of deterministic cycles
             */
            using TimeStamp = std::chrono::time_point<std::chrono::steady_clock>;

            static const uint64_t cCycleDelayMs{10};

        private:

        public:
        
            /**
             * Kind: function
             * Symbol: DeterministicClient()
             * Scope: class ara::exec::DeterministicClient
             * Syntax: ara::exec::DeterministicClient::DeterministicClient () noexcept;
             * Description: Constructor for DeterministicClient which opens the Execution Management communication
                                channel (e.g. POSIX FIFO) to access a wait point for cyclic execution, a worker pool,
                                deterministic random numbers and time stamps
             */
            DeterministicClient();
            
            
            /**
             * Kind: function
             * Symbol: ~DeterministicClient()
             * Scope: class ara::exec::DeterministicClient
             * Syntax: ara::exec::DeterministicClient::~DeterministicClient () noexcept;
             * Description: Destructor of the Deterministic Client instance .
             */
            ~DeterministicClient();

            /**
             * Kind: function
             * Symbol: WaitForActivation()
             * Errors: ara::exec::ExecErrc::kCycleOverrun   ->The deterministic activation cycle time exceeded.
                        ara::exec::ExecErrc::kFailed         -> Requested operation could not be performed.
             * Description: Blocks and returns with a process control value when the next activation is triggered by the
                            Runtime .
             */
            core::Result<ActivationReturnType> WaitForActivation() noexcept;


            /**
             * Kind: function
             * Symbol: WaitForActivation()
             * Errors: ara::exec::ExecErrc::kCycleOverrun   ->The deterministic activation cycle time exceeded.
                        ara::exec::ExecErrc::kFailed         -> Requested operation could not be performed.
             * Description: Blocks and returns with a process control value when the next activation is triggered by the
                            Runtime .
             */
            template <typename ValueType, typename Container>
            ara::core::Result<void> RunWorkerPool(
                WorkerRunnable<ValueType> &runnableObj,
                Container &container) noexcept;

            uint64_t GetRandom() noexcept;

            void SetRandomSeed(uint64_t seed) noexcept;

            core::Result<TimeStamp> GetActivationTime() noexcept;

            core::Result<TimeStamp> GetNextActivationTime();
        };
    }
}

#endif