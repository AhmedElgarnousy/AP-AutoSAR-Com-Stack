#ifndef ARA_EXEC_STATE_CLIENT_H
#define ARA_EXEC_STATE_CLIENT_H

#include <future>
#include "execution_error_event.h"
#include "function_group_state.h"
#include "exec_exception.h"

namespace ara
{
    namespace exec
    {
        /**
         * Kind: class
         * Symbol: StateClient
         * Scope: namespace ara::exec
         * Syntax: class ara::exec::StateClient final {...};
         * Header file: #include "ara/exec/state_client.h"
         * Description: Class representing connection to Execution Management that is used to request Function
         * Group state transitions (or other operations).
         * Notes: StateClient opens communication channel to Execution Management (e.g. POSIX FIFO). Each
         * Process that intends to perform state management, shall create an instance of this class and it
         * shall have rights to use it.
        */
        class StateClient final
        {
        private:

        public:

        /**
         * 
        */
            StateClient(
                std::function<void(const ExecutionErrorEvent &)> undefinedStateCallback);

            StateClient() = delete;
            ~StateClient() noexcept = default;

            std::shared_future<void> SetState(const FunctionGroupState &state);

            std::shared_future<void> GetInitialMachineStateTransitionResult();

            core::Result<ExecutionErrorEvent> GetExecutionError(
                const FunctionGroup &functionGroup) noexcept;
        };
    }
}

#endif