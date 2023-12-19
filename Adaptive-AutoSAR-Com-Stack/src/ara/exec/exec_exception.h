#ifndef ARA_EXEC_ERROR_CODE_DOMAIN_H
#define ARA_EXEC_ERROR_CODE_DOMAIN_H

#include "../core/error_code.h"
#include "exec_error_domain.h"

namespace ara
{
    namespace exec
    {
        /**
         * Kind: clas
         * Symbol: ExecException
         * Scope: namespace ara::exec
         * Base class: ara::core::Exception
         * Syntax: class ara::exec::ExecException : public ara::core::Exception {...};
         * Header file: #include "ara/exec/exec_error_domain.h"
         * Description: Defines a class for exceptions to be thrown by the Execution Management.
         */
        class ExecException : public std::exception
        {
        private:
            core::ErrorCode mErrorCode;

        public:
        
        /**
         * Kind: function
         * Symbol: ExecException(ara::core::ErrorCode errorCode)
         * Scope: class ara::exec::ExecException
         * Syntax: explicit ara::exec::ExecException::ExecException (ara::core::ErrorCode
                    errorCode) noexcept;
         * Parameters (in): errorCode The error code
         * Exception Safety: noexcept
         * Description: Constructs a new ExecException object containing an error code
         */
            ExecException() = delete;
            

        /**
         * Kind: function
         * Symbol: GetExecErrorDomain()
         * Scope: class ara::exec
         * Syntax: const ara::core::ErrorDomain& ara::exec::GetExecErrorDomain ()
                        noexcept;

         * Return Value : const ara::core::ErrorDomain & Return a reference to the global ExecErrorDomain object
         * Exception Safety: noexcept
         * Description: Returns a reference to the global ExecErrorDomain object.
         */
            ~ExecException() noexcept = default;

        /**
         * Kind: function
         * Symbol: ExecException(ara::core::ErrorCode errorCode)
         * Scope: class ara::exec::ExecException
         * Syntax: explicit ara::exec::ExecException::ExecException (ara::core::ErrorCode
                    errorCode) noexcept;
         * Parameters (in): errorCode The error code
         * Exception Safety: noexcept
         * Description: Constructs a new ExecException object containing an error code
         */
            explicit ExecException(core::ErrorCode errorCode) noexcept;

        /**
         * Kind: function
         * Symbol: GetExecErrorDomain()
         * Scope: class ara::exec::ExecException
         * Syntax: const ara::core::ErrorDomain& ara::exec::GetExecErrorDomain ()
                    noexcept;
         * Return value: const ara::core::ErrorDomain & Return a reference to the global ExecErrorDomain
                        object.
         * Exception Safety: noexcept
         * Description: Returns a reference to the global ExecErrorDomain object.
         */
            const core::ErrorDomain &GetExecErrorDomain() noexcept;

        /**
         * Kind: function
         * Symbol: MakeErrorCode(ara::exec::ExecErrc code, ara::core::ErrorDomain::SupportDataType data)
         * Scope: class ara::exec
         * Syntax: ara::core::ErrorCode ara::exec::MakeErrorCode (ara::exec::ExecErrc
                    code, ara::core::ErrorDomain::SupportDataType data) noexcept;

         * Parameters (in): code Error code number
                            data Vendor defined data associated with the error.

         * Return value: ara::core::ErrorCode An ErrorCode object.
         * Exception Safety: noexcept
         * Description: Creates an instance of ErrorCode.
         */
            core::ErrorCode MakeErrorCode(ExecErrc code) noexcept;

        /**
         * 
         */
            const core::ErrorCode &GetErrorCode() const noexcept;
        };
    }
}

#endif