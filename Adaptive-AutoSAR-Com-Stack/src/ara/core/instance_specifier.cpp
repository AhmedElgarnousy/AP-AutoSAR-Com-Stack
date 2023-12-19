#include "instance_specifier.h"
namespace ara
{
namespace core
{
// Constructor
InstanceSpecifier::InstanceSpecifier(std::string pInstance, uint16_t pInstance_id)
    : instance(std::move(pInstance)), instance_id(pInstance_id)
{
}

// Copy Constructor
InstanceSpecifier::InstanceSpecifier(const InstanceSpecifier &other)
    : instance(other.instance), instance_id(other.instance_id)
{
}

// Move Constructor
InstanceSpecifier::InstanceSpecifier(InstanceSpecifier &&other)
    : instance(std::move(other.instance)), instance_id(other.instance_id)
{
}

// Copy Assignment Operator
InstanceSpecifier &InstanceSpecifier::operator=(const InstanceSpecifier &other)
{
    if (this != &other)
    {
        instance = other.instance;
        instance_id = other.instance_id;
    }
    return *this;
}

// Move Assignment Operator
InstanceSpecifier &InstanceSpecifier::operator=(InstanceSpecifier &&other)
{
    if (this != &other)
    {
        instance = std::move(other.instance);
        instance_id = other.instance_id;
    }
    return *this;
}

// Static create method
Result<InstanceSpecifier> InstanceSpecifier::create(InstanceSpecifier metaModelIdentifier)
{
    Result<InstanceSpecifier> result;

    return result;
}

// Equality operator
bool InstanceSpecifier::operator==(const InstanceSpecifier &other)
{
    return (instance == other.instance && instance_id == other.instance_id);
}

// Inequality operator
bool InstanceSpecifier::operator!=(const InstanceSpecifier &other)
{
    return !(*this == other);
}

InstanceSpecifier::~InstanceSpecifier()
{
    
}

} //core
} //ara