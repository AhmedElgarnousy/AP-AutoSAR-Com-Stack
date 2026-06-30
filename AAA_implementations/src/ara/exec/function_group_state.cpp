#include <algorithm>
#include "function_group_state.h"

namespace ara
{
    namespace exec
    {
        FunctionGroupState::FunctionGroupState(
            const FunctionGroup *functionGroup,
            std::string metaModelIdentifier) : mFunctionGroup{functionGroup},
                                               mStateMetaModel{metaModelIdentifier}
        {
        }

        core::Result<FunctionGroupState> FunctionGroupState::Create(
            const FunctionGroup &functionGroup,
            std::string metaModelIdentifier)
        {

        }

        FunctionGroupState::FunctionGroupState(
            FunctionGroupState &&other) : mFunctionGroup{other.mFunctionGroup},
                                          mStateMetaModel{std::move(other.mStateMetaModel)}
        {
        }

        FunctionGroupState &FunctionGroupState::operator=(
            FunctionGroupState &&other)
        {

        }

        const FunctionGroup &FunctionGroupState::GetFunctionGroup() const noexcept
        {
        }

        const std::string &FunctionGroupState::GetState() const noexcept
        {
        }

        void FunctionGroupState::Serialize(
            std::vector<uint8_t> &serializedObject) const
        {
        }
    }
}