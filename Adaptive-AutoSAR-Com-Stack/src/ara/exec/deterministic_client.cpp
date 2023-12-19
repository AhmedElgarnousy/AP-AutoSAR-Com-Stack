// #include <thread>
#include "deterministic_client.h"

namespace ara
{
    namespace exec
    {
        DeterministicClient::DeterministicClient() 
        {

        }

        void DeterministicClient::activateCycle()
        {
        }

        core::Result<ActivationReturnType> DeterministicClient::WaitForActivation()
        {
        }

        uint64_t DeterministicClient::GetRandom() noexcept
        {

        }

        void DeterministicClient::SetRandomSeed(uint64_t seed) noexcept
        {
        }

        core::Result<DeterministicClient::TimeStamp> DeterministicClient::GetActivationTime() noexcept
        {
    
        }

        core::Result<DeterministicClient::TimeStamp> DeterministicClient::GetNextActivationTime()
        {
        
        }

        DeterministicClient::~DeterministicClient()
        {
            
        }
    }
}