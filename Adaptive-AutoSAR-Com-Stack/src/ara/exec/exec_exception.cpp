
#include "exec_exception.h"

namespace ara
{
    namespace exec
    {
        ExecException::ExecException(core::ErrorCode errorCode) noexcept : mErrorCode{errorCode}
        {

        }

        const core::ErrorDomain &ExecException::GetExecErrorDomain() noexcept
        {

        }

        core::ErrorCode ExecException::MakeErrorCode(ExecErrc code) noexcept
        {

        }

        const core::ErrorCode &ExecException::GetErrorCode() const noexcept
        {

        }
    }
}