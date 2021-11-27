#ifndef _MOVEMENT_HDR_
#define _MOVEMENT_HDR_

class movement {
    private:
        std::string name;
        std::string type;
        int basePP;
        int power;
        int accuracy;

    public:
        // Data accessing functions
        inline std::string getName() { return name; };
        inline std::string getType() { return type; };
        inline int getBasePP() { return basePP; };
        inline int getPower() { return power; };
        inline int getAccuracy() { return accuracy; };

        // Not default constructor
        movement(std::string Nname, std::string Ntype, int NbasePP, int Npower, int Naccuracy) {
            name = Nname;
            type = Ntype;
            basePP = NbasePP;
            power = Npower;
            accuracy = Naccuracy;
        };
};

#endif
