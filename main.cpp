#include <iostream>
#include "ducko.h"
template<typename First, typename... Strings>
void classless_print(First arg, const Strings &... rest) {
    std::cout << arg;
    classless_print(rest...);
}

void classless_print() {
    std::cout<<std::endl;
}

int main() {
    classless_print("Hello, World!","now for more stuff","huzzah!"); //--prints to console--> Hello, World!now for more stuff
    ducko::d_print("trying to encapsulate");
    return 0;
}