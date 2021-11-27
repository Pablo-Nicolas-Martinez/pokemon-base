#include <iostream>
#include <vector>
#include <array>
#include "pokemon.hpp"
#include "movement_list.cpp"

int main() {
    pokemon ch({1,1,1,1,1,1}, {ember}, "Up");
    std::cout << ch.getCurrentStats().getHp() << std::endl;
    std::cout << ch.getAttack()[0].getName() << std::endl;
    std::cout << ch.getAttack()[0].getPower() << std::endl;
    std::cout << ch.getAttack()[0].getAccuracy() << std::endl;
}
