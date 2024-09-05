#ifndef ARA_EXEC_FUNCTION_GROUP_H
#define ARA_EXEC_FUNCTION_GROUP_H

#include "../core/instance_specifier.h"
#include "../core/result.h"

namespace ara
{
    namespace exec
    {
        class FunctionGroup final
        {
        private:
            core::InstanceSpecifier mInstnaceSpecifier;

            FunctionGroup(std::string metaModelIdentifier);

        public:
            static core::Result<FunctionGroup> Create(
                std::string metaModelIdentifier);

            FunctionGroup() = delete;
            FunctionGroup(const FunctionGroup &other) = delete;
            FunctionGroup(FunctionGroup &&other);
            FunctionGroup &operator=(const FunctionGroup &other) = delete;
            FunctionGroup &operator=(FunctionGroup &&other);
            ~FunctionGroup() noexcept = default;

            const core::InstanceSpecifier& GetInstance() const noexcept;

            inline bool operator==(const FunctionGroup &other) const noexcept
            {
            }

            inline bool operator!=(const FunctionGroup &other) const noexcept
            {
            }
        };
    }
}

#endif