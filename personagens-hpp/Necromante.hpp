#ifndef NECROMANTE
#define NECROMANTE
#include "../core-simulador-hpp/Personagem.hpp"
class Necromante : public Personagem
{
    public:
        Necromante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif