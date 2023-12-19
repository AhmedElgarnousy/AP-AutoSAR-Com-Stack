#include "exec_error_domain.h"

namespace ara
{
    namespace exec
    {
        const core::ErrorDomain::IdType ExecErrorDomain::cDomainId;

        ExecErrorDomain::ExecErrorDomain() noexcept : ErrorDomain{cDomainId}
        {
        }

        const char *ExecErrorDomain::Name() const noexcept
        {
            
        }

        const char *ExecErrorDomain::Message(
            core::ErrorDomain::CodeType errorCode) const noexcept
        {
            
        }
        
    }
}