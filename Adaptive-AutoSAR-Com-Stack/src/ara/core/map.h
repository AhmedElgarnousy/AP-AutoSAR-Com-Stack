#ifndef ARA_CORE_MAP_H
#define ARA_CORE_MAP_H
#include <memory>     
using namespace std;
namespace ara {
namespace core {
template <class K, class V, class C = std::less<K>, class Allocator = std::allocator<std::pair<const K, V>>>
class Map final {
private:
    K key;
    V value;
    C comparator;   
    Allocator locator;

public:
 Map(const K& Key, const V& Value, const C& com, const Allocator & Alloca )
        : key(Key), value(Value), comparator(com), locator(Alloca) {
        std::cout << "Map constructor called with key: " << key << ", value: " << value << std::endl;
    }
~Map(){delete;};  
void swap(Map< K, V, C, Allocator > &lhs, Map< K, V, C, Allocator > &rhs)
{

        swap(lhs.key, rhs.key);
        swap(lhs.value, rhs.value);
        swap(lhs.comparator, rhs.comparator);
        swap(lhs.locator, rhs.locator);
    
}}; // namespace core
}}// namespace ara
#endif // ARA_CORE_MAP_H
