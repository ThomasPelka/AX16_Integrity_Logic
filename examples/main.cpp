#include "ax16_logic.hpp"
#include <iostream>

int main() {
    ax16::VectorState mySystem = {0}; // Initialisierung
    float sensorInput[16] = {0.1f, 0.2f, 0.01f /* ... usw ... */};

    // Der simultane Rechenschritt
    ax16::process_integrity(mySystem, sensorInput);

    std::cout << "Resonanz-Vektor V9: " << mySystem.v[8] << std::endl;
    return 0;
}