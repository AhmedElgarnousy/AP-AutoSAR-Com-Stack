#ifndef ARA_EXEC_FUNCTION_GROUP_STATE_H
#define ARA_EXEC_FUNCTION_GROUP_STATE_H

#include <vector>
#include "function_group.h"

namespace ara
{
    namespace exec
    {
        /**
         * Kind: class
         * Symbol: FunctionGroupState
         * Scope: namespace ara::exec
         * Syntax: class ara::exec::FunctionGroupState final {...};
         * Header file: #include "ara/exec/function_group_state.h"
         * Description: Class representing Function Group State defined in meta-model (ARXML).
         * Notes: Once created based on ARXML path, it’s internal value stay bounded to it for entire lifetime of
         * an object.
         */
        class FunctionGroupState final
        {
        private:
            const FunctionGroup *mFunctionGroup;
            std::string mStateMetaModel;

            FunctionGroupState(
                const FunctionGroup* functionGroup,
                std::string metaModelIdentifier);

        public:

        /**
         * Kind: function
         * Symbol: Create(const FunctionGroup &functionGroup, ara::core::StringView metaModelIdentifier)
         * Scope: class ara::exec::FunctionGroupState
         * Syntax: static ara::core::Result<FunctionGroupState> ara::exec::FunctionGroup
                    State::Create (const FunctionGroup &functionGroup, ara::core::String
                    View metaModelIdentifier) noexcept;
        * Parameters (in): functionGroup, metaModelIdentifier
        * Return value: ara::core::Result< FunctionGroupState>
        * Thread Safety: Thread-safe
        * Exception Safety: noexcept
        * Description: Named constructor for FunctionGroupState.
                        This method shall validate/verify meta-model path passed and perform FunctionGroupState
                        object creation.
         */
            static core::Result<FunctionGroupState> Create(
                const FunctionGroup &functionGroup,
                std::string metaModelIdentifier);


            FunctionGroupState() = delete;

            FunctionGroupState(const FunctionGroupState &other) = delete;
            FunctionGroupState(FunctionGroupState &&other);
            FunctionGroupState &operator=(const FunctionGroupState &other) = delete;
            FunctionGroupState &operator=(FunctionGroupState &&other);
            ~FunctionGroupState() noexcept = default;

            const FunctionGroup &GetFunctionGroup() const noexcept;

            const std::string &GetState() const noexcept;

            void Serialize(std::vector<uint8_t> &serializedObject) const;

            inline bool operator==(const FunctionGroupState &other) const noexcept
            {
                return (mFunctionGroup == other.mFunctionGroup) &&
                       (mStateMetaModel == other.mStateMetaModel);
            }

            inline bool operator!=(const FunctionGroupState &other) const noexcept
            {
                return (mFunctionGroup != other.mFunctionGroup) ||
                       (mStateMetaModel != other.mStateMetaModel);
            }
        };
    }
}

#endif