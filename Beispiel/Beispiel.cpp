// Beispiel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<> dist_x(1.0, 0.5); // Schwerpunkt um x=1
    for (int j = 0; j < 10; ++j) {
        double spieler1 = double{ dist_x(gen) };
        double spieler2 = double{ dist_x(gen) };
        std::cout << std::endl;
        if (spieler1 > spieler2) {
            std::cout << "Spieler 1 hat gewonnen";
        }
        else {
            std::cout << "Spieler 2 hat gewonnen";
        }
    }
    
    std::cout << "Ende!\n";
}

