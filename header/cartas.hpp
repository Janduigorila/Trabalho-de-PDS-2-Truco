#ifndef CARTAS_H
#define CARTAS_H
#include <iostream>
#include <vector>
#include <string>

enum class Naipes {
    DIAMANTE,
    OURO,
    ESPADA,
    FOLHAS
};

enum class Tipos_Cartas {
    AS, DOIS, TRES, QUATRO, CINCO, SEIS, SETE, REI, RAINHA, VALETE

};

struct Carta {
    Naipes naipes;
    Tipos_Cartas tipos_cartas;
};

struct Baralho {
    std::vector<Carta> cartas_baralho = {
        {Naipes::DIAMANTE, Tipos_Cartas::AS},{Naipes::DIAMANTE, Tipos_Cartas::DOIS},
        {Naipes::DIAMANTE, Tipos_Cartas::TRES},{Naipes::DIAMANTE, Tipos_Cartas::QUATRO},
        {Naipes::DIAMANTE, Tipos_Cartas::CINCO},{Naipes::DIAMANTE, Tipos_Cartas::SEIS},
        {Naipes::DIAMANTE, Tipos_Cartas::SETE},{Naipes::DIAMANTE, Tipos_Cartas::REI},
        {Naipes::DIAMANTE, Tipos_Cartas::RAINHA},{Naipes::DIAMANTE, Tipos_Cartas::VALETE},
        {Naipes::OURO, Tipos_Cartas::AS},{Naipes::OURO, Tipos_Cartas::DOIS},
        {Naipes::OURO, Tipos_Cartas::TRES},{Naipes::OURO, Tipos_Cartas::QUATRO},
        {Naipes::OURO, Tipos_Cartas::CINCO},{Naipes::OURO, Tipos_Cartas::SEIS},
        {Naipes::OURO, Tipos_Cartas::SETE},{Naipes::OURO, Tipos_Cartas::REI},
        {Naipes::OURO, Tipos_Cartas::RAINHA},{Naipes::OURO, Tipos_Cartas::VALETE},
        {Naipes::ESPADA, Tipos_Cartas::AS},{Naipes::ESPADA, Tipos_Cartas::DOIS},
        {Naipes::ESPADA, Tipos_Cartas::TRES},{Naipes::ESPADA, Tipos_Cartas::QUATRO},
        {Naipes::ESPADA, Tipos_Cartas::CINCO},{Naipes::ESPADA, Tipos_Cartas::SEIS},
        {Naipes::ESPADA, Tipos_Cartas::SETE},{Naipes::ESPADA, Tipos_Cartas::REI},
        {Naipes::ESPADA, Tipos_Cartas::RAINHA},{Naipes::ESPADA, Tipos_Cartas::VALETE},
        {Naipes::FOLHAS, Tipos_Cartas::AS},{Naipes::FOLHAS, Tipos_Cartas::DOIS},
        {Naipes::FOLHAS, Tipos_Cartas::TRES},{Naipes::FOLHAS, Tipos_Cartas::QUATRO},
        {Naipes::FOLHAS, Tipos_Cartas::CINCO},{Naipes::FOLHAS, Tipos_Cartas::SEIS},
        {Naipes::FOLHAS, Tipos_Cartas::SETE},{Naipes::FOLHAS, Tipos_Cartas::REI},
        {Naipes::FOLHAS, Tipos_Cartas::RAINHA},{Naipes::FOLHAS, Tipos_Cartas::VALETE},
    };
};
#endif