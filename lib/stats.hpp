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
        
        // Empty default constructor
        stats() {}

        // Constructor from values
        stats(std::array<int, 6> Nvalues) {
            values = Nvalues;
        }
};

#endif 
