#include "ducko.h"
template<typename First, typename... Strings>
void ducko::d_print(First arg, const Strings &... rest) {
    std::cout << arg;
    doSomething(rest...);
}

void ducko::d_print() {
    std::cout<<std::endl;
}
