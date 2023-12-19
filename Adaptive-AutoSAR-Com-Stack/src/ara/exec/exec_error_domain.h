#ifndef ARA_EXEC_ERROR_DOMAIN_H
#define ARA_EXEC_ERROR_DOMAIN_H

#include "../core/error_domain.h"

namespace ara
{
    namespace exec
    {

        /**
         * Kind: enumeration
         * Underlying type: ara::core::ErrorDomain::CodeType
         * Syntax: enum class ExecErrc : ara::core::ErrorDomain::CodeType {...};
         * Description: Defines an enumeration class for the Execution Management error codes
         */
        enum class ExecErrc : ara::core::ErrorDomain::CodeType
        {
            // Values
            kGeneralError = 1,                          ///< Unspecified error occurrence
            kInvalidArguments = 2,                      ///< Invalid argument while setting the state
            kCommunicationError = 3,                    ///< SOME/IP or FIFO communication error occurrence
            kMetaModelError = 4,                        ///< Invalid ARXML meta-model
            kCancelled = 5,                             ///< Cancelling of the on-going state transition due to a new state trainsition request
            kFailed = 6,                                ///< Impossible operation to be performed
            kFailedUnexpectedTerminationOnExit = 7,     ///< Previous function group termination while state transition
            kFailedUnexpectedTerminationOnEnter = 8,    ///< Target function group termination while state transition
            kInvalidTransition = 9,                     ///< Invalid state transition request
            kAlreadyInState = 10,                       ///< Invalid state transition due to request the current state
            kInTransitionToSameState = 11,              ///< Transition failing due to equality to the on-going state transition
            kNoTimeStamp = 12,                          ///< Unavailable deterministic timestamp information
            kCycleOverrun = 13                          ///< Exceeding theoritical cycle time
        };                  


        /**
         * Kind: class
         * Base class: ara::core::ErrorDomain
         * Unique ID: 0x8000’0000’0000’0202
         * Syntax: enum class ExecErrc : ara::core::ErrorDomain::CodeType {...};
         * Description: Defines a class representing the Execution Management error domain.
         */
        class ExecErrorDomain final : public core::ErrorDomain
        {
        private:

        public:
        /**
         * Kind: function
         * Syntax: ara::exec::ExecErrorDomain::ExecErrorDomain () noexcept;
         * Description: Constructs a new ExecErrorDomain object.
         */
            ExecErrorDomain() noexcept;

        /**
         * Kind: function
         * Symbol: Name()
         * Syntax: const char* ara::exec::ExecErrorDomain::Name () const noexcept
         * Return value: const char * "Exec".
         * Description: Returns a string constant associated with ExecErrorDomain.
         */
            const char *Name() const noexcept override;

        /**
         * Kind: function
         * Symbol: Message(CodeType errorCode)
         * Syntax: const char* ara::exec::ExecErrorDomain::Message (CodeType errorCode)
                    const noexcept override;

         * Return value: const char * The message associated with the error code.
         * Description: Returns the message associated with errorCode.
         */
            const char *Message(
                core::ErrorDomain::CodeType errorCode) const noexcept override;
        };
    }
}

#endif