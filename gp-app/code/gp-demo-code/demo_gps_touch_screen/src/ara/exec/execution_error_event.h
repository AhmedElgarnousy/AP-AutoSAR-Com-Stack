#ifndef ARA_EXEC_EXECUTION_ERROR_EVENT_H
#define ARA_EXEC_EXECUTION_ERROR_EVENT_H

#include "function_group.h"

namespace ara
{
    namespace exec
    {
        using ExecutionError = uint32_t;

        /**
         * Kind: struct
         * Symbol: ExecutionErrorEvent
         * Scope: namespace ara::exec
         * Syntax: struct ara::exec::ExecutionErrorEvent final {...};
         * Header file: #include "ara/exec/execution_error_event.h"
         * Description: Represents an execution error event which happens in a Function Group.
         */
        struct ExecutionErrorEvent final
        {
            /**
             * Kind: variable
             * Symbol: executionError
             * Scope: struct ara::exec::ExecutionErrorEvent
             * Type: ExecutionError
             * Syntax: ExecutionError ara::exec::ExecutionErrorEvent::executionError;
             * Header file: #include "ara/exec/execution_error_event.h"
             * Description: The execution error of the Process which unexpectedly terminated .

             */
            ExecutionError executionError;

            /**
            * Kind: variable
            * Symbol: executionError
            * Scope: struct ara::exec::ExecutionErrorEvent
            * Type: ExecutionError
            * Syntax: ExecutionError ara::exec::ExecutionErrorEvent::executionError;
            * Header file: #include "ara/exec/execution_error_event.h"
            * Description: The execution error of the Process which unexpectedly terminated .
             */
            const FunctionGroup *functionGroup;
        };
    }
}

#endif