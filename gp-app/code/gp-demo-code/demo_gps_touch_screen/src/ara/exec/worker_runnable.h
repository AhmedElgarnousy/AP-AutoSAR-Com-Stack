#ifndef ARA_EXEC_WORKER_RUNNABLE_H
#define ARA_EXEC_WORKER_RUNNABLE_H

#include "worker_thread.h"

namespace ara
{
    namespace exec
    {
        /**
         * Kind: class
         * Symbol: WorkerRunnable
         * Scope: namespace ara::exec
         * Syntax: template <typename ValueType>
         * class ara::exec::WorkerRunnable {...};
         * Template param: typename ValueType Value type of Container passed to Deterministic
         * Client::RunWorkerPool
         * Header file: #include "ara/exec/worker_runnable.h"
         * Description: Base-class for implementation of worker runnable for Deterministic Client.
         * 
         */
        template <typename ValueType>
        class WorkerRunnable
        {
            
        public:
        /**
         * Kind: function
         * Symbol: Run(ValueType &element, ara::exec::WorkerThread &t)
         * Scope: class ara::exec::WorkerRunnable
         * Syntax: virtual void ara::exec::WorkerRunnable< ValueType >::Run (ValueType
                    &element, ara::exec::WorkerThread &t)=0;
         * Parameters (in): element Reference to container element t Reference to worker thread (for random numbers)
         * Return value: None
         * Description: Deterministic client worker runnable.
        */
            virtual void Run(ValueType &element, WorkerThread &t) = 0;
        };
    }
}

#endif /*ARA_EXEC_WORKER_RUNNABLE_H*/