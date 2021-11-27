#ifndef _POKEMON_HDR_
#define _POKEMON_HDR_

#include "stats.hpp"
#include "movement.hpp"

#include <vector>
#include <array>

class pokemon {
    
    private:
        //int lvl;
        stats currentStats;
        //stats IVs;
        //stats EVs;
        //species pkmn;
        std::vector<movement> attack;
        //string hability;
        std::string status;

    public:
        // Access information data
        inline stats getCurrentStats() { return currentStats; };
        inline std::vector<movement> getAttack() { return attack; };
        inline std::string getStatus() { return status; };

        // Standard constructor
        pokemon(std::array<int, 6> NcurrentStats, std::vector<movement> Nattack, std::string Nstatus) {
            currentStats = NcurrentStats;
            attack = Nattack;
            status = Nstatus;
        }

};

#endif
