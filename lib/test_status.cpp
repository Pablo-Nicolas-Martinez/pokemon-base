#include <iostream>
#include "stats.hpp"
#include <string>
#include <string_view>
 
int main() {
    //std::array<int, 6> temp {1, 1, 1, 1, 1, 1};
    stats example({10, 2, 3, 4, 5, 6});
    std::cout << example.getHp() << std::endl;
}
