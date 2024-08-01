#include <string>
#include <cstdint>

class Resource {
    public:
        // Identification
        std::string name; // The name of the element.
        std::string description; // The description of the element

        // Chemical properties
        std::string elementType; // The category from wich the element is part of.
        std::string chemicalSymbol; // The chemical symbol of the element.
        std::string state; // The state in wich the element is present. Could be either "solid", "liquid" or "gas".
        double chemicalDensity; // The density of the element in g/mol.
        
        // Thermal properties
        double freezingPoint; // The temperature at wich the element freezes.
        double evaporationPoint; // The temperature at wich the element evaporates.
        double specificHeatCapacity; // Specific heat capacity, measured in (DTU/g)/°C.
        double thermalConductivity; // Thermal conductivity, measured in (DTU/(m*s))/°C.

        // Mechanical properties
        uint8_t hardness; // A number between 0 and 255.
        double density; // The density of the element in g/tile.
        double lightAbsorbtion; // A number between 0 and 1, representing how much light the element absorbs.
        double radiationAbsorbtion; // A number between 0 and 1, representing how much radiation the element absorbs.
        
        // Additional properties 
        double decor; // Decor boost of the element, in percentages.
        std::string properties[]; // Additional properties of the element.
};