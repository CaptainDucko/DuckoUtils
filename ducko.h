#ifndef DUCKOUTILITIES_DUCKO_H
#define DUCKOUTILITIES_DUCKO_H

#include <iostream>

class ducko {
public:
    template <typename First, typename ... Strings>
    static void d_print(First arg, const Strings&... rest);
    static void d_print();
};




#endif //DUCKOUTILITIES_DUCKO_H
