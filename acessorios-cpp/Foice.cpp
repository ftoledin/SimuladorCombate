#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Foice.hpp"

Foice::Foice(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Foice::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Foice::gerarRuidoAtaque()
{
    return "Zoom!";
}
