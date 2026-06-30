#ifndef ARA_EXEC_WORKER_THREAD_H
#define ARA_EXEC_WORKER_THREAD_H

#include <atomic>
#include <stdint.h>
#include <random>

namespace ara
{
    namespace exec
    {
        /**
         * Kind: class
         * Symbol: WorkerThread
         * Scope: namespace ara::exec
         * Syntax: class ara::exec::WorkerThread {...};
         * Header file: #include "ara/exec/worker_thread.h"
         * Description: Class to implement worker thread for Deterministic Client .
         */
        class WorkerThread
        {
        private:
            static std::atomic_uint64_t mOffset;
            static thread_local std::default_random_engine mGenerator;

        public:
            static const uint64_t cOffsetStep = 6;

            /**
             * Kind: function
             * Symbol: WorkerThread()
             * Scope: class ara::exec::WorkerThread
             * Syntax: ara::exec::WorkerThread::WorkerThread ();
             * Header file: #include "ara/exec/worker_thread.h"
             * Description: Constructor .
             */
            WorkerThread() noexcept = default;

            /**
             * Kind: function
             * Symbol: GetRandom()
             * Scope: class ara::exec::WorkerThread
             * Syntax: std::uint64_t ara::exec::WorkerThread::GetRandom () noexcept;
             * Return value: std::uint64_t Deterministic random number
             * Exception Safety: noexcept
             * Header file: #include "ara/exec/worker_thread.h"
             * Description: Returns a deterministic pseudo-random number which is unique for each container element.
             */
            virtual ~WorkerThread() noexcept = default;
            
            /**
             * Kind: function
             * Symbol: GetRandom()
             * Scope: class ara::exec::WorkerThread
             * Syntax: std::uint64_t ara::exec::WorkerThread::GetRandom () noexcept;
             * Return value: std::uint64_t Deterministic random number
             * Exception Safety: noexcept
             * Header file: #include "ara/exec/worker_thread.h"
             * Description: Returns a deterministic pseudo-random number which is unique for each container element.
             */
            uint64_t GetRandom() noexcept;
        };
    }
}

#endif  /* ARA_EXEC_WORKER_THREAD_H */