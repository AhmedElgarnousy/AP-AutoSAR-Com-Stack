#include "function_group.h"

namespace ara
{
    namespace exec
    {
        FunctionGroup::FunctionGroup(std::string metaModelIdentifier) : mInstnaceSpecifier{metaModelIdentifier}
        {
        }

        core::Result<FunctionGroup> FunctionGroup::Create(
            std::string metaModelIdentifier)
        {

        }

        FunctionGroup::FunctionGroup(FunctionGroup &&other) : mInstnaceSpecifier{std::move(other.mInstnaceSpecifier)}
        {
        }

        FunctionGroup &FunctionGroup::operator=(FunctionGroup &&other)
        {

        }

        const core::InstanceSpecifier &FunctionGroup::GetInstance() const noexcept
        {
            
        }
    }
}