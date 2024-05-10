#ifndef TANQUE
#define TANQUE
#include "../core-simulador-hpp/Personagem.hpp"
class Tanque : public Personagem
{
    public:
        Tanque(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif