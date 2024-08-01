#include <string>
#include <cstdint>
#include <vector>
#include "raylib.h"

class Germs {
    public:
        std::string germType; // The tipe of germs.
        double count; // The ammount of germs.
        double desinfectResistance; // A number between 0 and 1 representing the resistance to desinfect operations.
        double multiplicationFactor; // The speed at wich the germs multiply.
        double spreadChance; // The chance to spread to a nearby place, rather than multiply.
};

class Resource {
    public:
        // Constructor
        Resource();

        // Destructor
        ~Resource();

        // Identification
        std::string name; // The name of the element.
        std::string description; // The description of the element

        // Chemical properties
        std::string elementType; // The category from wich the element is part of.
        std::string chemicalSymbol; // The chemical symbol of the element.
        std::string state; // The state in wich the element is present. Could be either "solid", "liquid" or "gas".
        double chemicalDensity; // The density of the element in g/mol.
        
        // Thermal properties
        double lowStateChangeTemperature; // The temperature at wich the element condesates or freezes.
        double highStateChangeTemperature; // The temperature at wich the element melts or evaporates.
        Resource* lowStateElement; // The element resulted from a low state change.
        Resource* highStateElement; // The element resulted from a high state change.
        double specificHeatCapacity; // Specific heat capacity, measured in (DTU/g)/°C.
        double thermalConductivity; // Thermal conductivity, measured in (DTU/(m*s))/°C.

        // Mechanical properties
        uint8_t hardness; // A number between 0 and 255.
        double density; // The density of the element in g/tile.
        double lightAbsorbtion; // A number between 0 and 1, representing how much light the element absorbs.
        double radiationAbsorbtion; // A number between 0 and 1, representing how much radiation the element absorbs.
        
        // Additional properties 
        double decor; // Decor boost of the element, where -1 is -100%, 0 is 0% and 1 is 100%.
        std::vector<std::string> properties; // Additional properties of the element.
};

class Item {
    public:
        Resource* resource; // The resource the item is made of.
        Germs surfaceGerms; // The germs present on the surface of the item.
        double temperature; // The temperature of the item.
        double mass; // The mass in g.
        Texture2D sprite; // The sprite of the item.
};

class Liquid : public Item {
    public:
        bool falling; // Is the liquid suspended in air?
        double leftHeight; // The height on the left side.
        double rightHeight; // The height on the right side.
};

class Gas : public Item {}; // A class to describe gasses.