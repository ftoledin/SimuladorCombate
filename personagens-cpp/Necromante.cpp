#include "../personagens-hpp/Necromante.hpp"

Necromante::Necromante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Necromante::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Necromante::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Necromante::pegarDescricao() 
{
    return "Invoco meus carrascos mortos";
}