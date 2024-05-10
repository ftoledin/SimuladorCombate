#ifndef FOICE
#define FOICE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Foice : public ArmaAtaque
{
    public:
        Foice(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif