#ifndef _STATS_HDR_
#define _STATS_HDR_

#include <map>
#include <array>
#include <string>

// TODO: Stats working fine, have to program arithmetic for adding up things
// There are finniky things with the constructors and definitions, revisit the rule of three. Build working, maybe subpar.

class stats {
    private:
        std::array<int, 6> values;
        //std::array<std::string, 6> names;

    public:
        // Access functions
        inline int getHp() { return values[0]; };
        inline int getAtt() { return values[1]; };
        inline int getDef() { return values[2]; };
        inline int getSpAtt() { return values[3]; };
        inline int getSpDef() { return values[4]; };
        inline int getSpe() { return values[5]; };
        
        // Empty default constructor
        stats() {}

        // Constructor from values
        stats(std::array<int, 6> Nvalues) { values = Nvalues; }

        inline int assignHp(int newHp) { values[0] = newHP; };
        // Add operator for basic arithmetic operations
};

#endif 
