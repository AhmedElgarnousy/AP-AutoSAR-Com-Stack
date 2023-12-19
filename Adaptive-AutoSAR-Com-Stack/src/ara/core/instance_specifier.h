#ifndef ARA_CORE_INSTANCE_SPECIFIER_H
#define ARA_CORE_INSTANCE_SPECIFIER_H
#include <string>
namespace ara
{
namespace core
{
template<typename T>
class Result
{};
class InstanceSpecifier 
{
public:
InstanceSpecifier(std::string pInstance , uint16_t pInstance_id);
InstanceSpecifier(const InstanceSpecifier &other); //copy constructor
InstanceSpecifier(InstanceSpecifier &&other); // move constructor
InstanceSpecifier& operator = (const InstanceSpecifier &other); //copy assignment operator
InstanceSpecifier& operator = (InstanceSpecifier &sother); // move assignment operator
static Result<InstanceSpecifier> create(InstanceSpecifier metaModelIdentifier);//Create a new instance
bool operator==(const InstanceSpecifier &other); // eq operator to compare with other InstanceSpecifier
bool operator!=(const InstanceSpecifier &other); // uneq operator to compare with other InstanceSpecifi

~InstanceSpecifier();
private:
std::string instance;
uint16_t instance_id;
};

}//core
}//ara

#endif