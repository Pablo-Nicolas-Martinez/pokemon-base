#include <iostream>
#include "pokemon.hpp"
#include "pokemon_list.cpp"

inline int dmgCalc(const movement& move) { return move.getPower(); };

class battle {
    private:
        // Pokemon class
        pokemon member1;
        pokemon member2;

    public:
        void attack(int move, const pokemon& i1, const pokemon& i2) {
            int dmg = dmgCalc

        void turn(int move) {

        // Probably startBattle and endBattle 
        
