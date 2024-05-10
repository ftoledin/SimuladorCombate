#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Arco.hpp"

Arco::Arco(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Arco::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Arco::gerarRuidoAtaque()
{
    return "zing! zim!";
}
