#include "../personagens-hpp/Tanque.hpp"

Tanque::Tanque(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Tanque::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Tanque::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Tanque::pegarDescricao() 
{
    return "Golpe Pesado Esmagador";
}