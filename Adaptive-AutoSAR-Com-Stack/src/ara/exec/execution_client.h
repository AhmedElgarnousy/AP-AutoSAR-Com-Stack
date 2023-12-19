#ifndef ARA_EXEC_EXECUTION_CLIENT_H
#define ARA_EXEC_EXECUTION_CLIENT_H

#include <future>
#include "../core/instance_specifier.h"
// #include "../core/result.h"


namespace ara
{
    namespace exec
    {
        /**
         *  Kind: enumeration
         * Symbol: ExecutionState
         * Scope: namespace ara::exec
         * Uderlying: std::uint8_t
         * Syntax: enum class ExecutionState : std::uint8_t {...};
         * Values: kRunning= 0          // After a Process has been started by Execution
                                            Management, it reports ExecutionState kRunning.
         * Header file: #include "ara/exec/execution_client.h"
         * Description: Defines the internal states of a Process 
         * 
         */
        enum class ExecutionState : uint8_t
        {
            kRunning = 0 
        };


         /**
         * Kind: class
         * Symbol: ExecutionClient
         * Scope: namespace ara::exec
         * Syntax: class ara::exec::ExecutionClient final {...};
         * Description: Class to implement operations on Execution Client.
         */
        class ExecutionClient final
        {
        private:
        
        public:
         /**
         * Kind: function 
         * Exception Safety::noexcept
         * Description: Constructor that creates the Execution Client.
         * Notes: Constructor for ExecutionClient which opens the Execution Management communication
                    channel (e.g. POSIX FIFO) for reporting the Execution State. Each Process shall create an
                    instance of this class to report its state
         */
            ExecutionClient();
        
        /**
         * Kind: function 
         * Exception Safety::noexcept
         * Description: Destructor of the Execution Client instance.
         */
            ~ExecutionClient();

        /**
         * Kind: function
         * Symbol: ReportExecutionState(ExecutionState state)
         * Scope: class ara::exec::ExecutionClient
         * Syntax: ara::core::Result<void> ara::exec::ExecutionClient::ReportExecution
                    State (ExecutionState state) const noexcept;
         * Parameters (in): state                          Value of the Execution State
         * Return value: ara::core::Result< void >         An instance of ara::core::Result. The instance holds
                                                            an ErrorCode containing either one of the specified
                                                            rrors or a void-value.
         * Exception Safety: noexcept
         * Errors:       ara::exec::ExecErrc::kGeneralError               if some unspecified error occurred
                         ara::exec::ExecErrc::kCommunication              Communication error between Application and
                         Error                                                 Execution Management, e.g. unable to report state
                                                                                for Non-reporting Process.
                        ara::exec::ExecErrc::kInvalidTransition           Invalid transition request (e.g. to Running when
                                                                           already in Running state)
         * Description: Interface for a Process to report its internal state to Execution Management
         */
        ara::core::Result<void> ReportExecutionState (ExecutionState state) const noexcept;

        };
    }
}

#endif  /*ARA_EXEC_EXECUTION_CLIENT_H*/