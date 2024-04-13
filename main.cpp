#include <iostream>
#include <vector>
#include <list>
#include "OPERATOR_IN.h"

int main ()
{
    std::vector<int> L;
    for (int i = 0; i < 10; i++) {
        L.push_back(i);
    }
    for (auto& item : L) {
        std::cout << item << ' ';
    }

    std::cout << '\n' << (90 in L) << std::endl;
}
