#include <string>
#include <functional>
#include <type_traits>

template<typename C>
std::string toString(C container, std::functional<string (const T&)> adapter, 
                     std::string sep = ", ", std::string pre = "[", std::string suf = "]") {
  
}
