#include <iostream>
#include <string>
#include "../core-simulador-hpp/Simulador.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Arqueiro.hpp"
#include "../personagens-hpp/Guerreiro.hpp"
#include "../personagens-hpp/Mago.hpp"
#include "../personagens-hpp/Necromante.hpp"
#include "../personagens-hpp/Tanque.hpp"
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Arco.hpp"
#include "../acessorios-hpp/Cajado.hpp"
#include "../acessorios-hpp/Martelo.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Foice.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Manto.hpp"
#include "../acessorios-hpp/Parede.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Magia.hpp"
#include "../acessorios-hpp/Tunica.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* Rosa1  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* Colher1 = new Colher("Colher de Pata",0,50);
    ArmaAtaque* Espada1  = new Espada("Excalibur",10,75);
    ArmaAtaque* Espada2  = new Espada("Lamina do Tita",5,65);
    ArmaAtaque* Cajado1  = new Cajado("Cajado Ancestral",20,60);
    ArmaAtaque* Cajado2  = new Cajado("Cajado Angelical",20,75);
    ArmaAtaque* Arco1  = new Arco("Arco de Guerra",0,60);
    ArmaAtaque* Arco2  = new Arco("Arco dos Deuses",5,80);
    ArmaAtaque* Martelo1  = new Martelo("Martelo Destruidor",10,70);
    ArmaAtaque* Martelo2  = new Martelo("Martelo de Guerra",15,65);
    ArmaAtaque* Foice1  = new Foice("Foice da Morte",0,50);

    ArmaDefesa* Escudo1 = new Escudo("Escudo Paladino", 20);
    ArmaDefesa* Escudo2 = new Escudo("Escudo de Ferro", 11.5);
    ArmaDefesa* Parede1 = new Parede("Parede de Ossos", 10);
    ArmaDefesa* Parede2 = new Parede("Parede de Mortos", 13);
    ArmaDefesa* Manto1 = new Manto("Manto do Arqueiro de Elite", 8);
    ArmaDefesa* Armadura1 = new Armadura("Armadura do Cavaleiro Real", 15);
    ArmaDefesa* Magia1 = new Magia("Feitico do Escudo Arcano", 12);
    ArmaDefesa* Tunica1 = new Tunica("Tunica Arcano", 9);
    ArmaDefesa* Tunica2 = new Tunica("Tunica de Ossos", 7.5);
    
    Personagem* p1 = new Tanque(1, "Bastion (Tanque)", 400, Martelo1, Escudo2);
    Personagem* p3 = new Necromante(1, "Lorde Harkon (Necromante)", 230, Foice1, Parede1);
    Personagem* p2 = new Mago(1, "Celestia (Maga)", 190, Cajado2, Magia1);
    Personagem* p4 = new Guerreiro(1, "Ragnar Lothbrok (Guerreiro)", 300, Espada1, Armadura1);
    Personagem* p5 = new Arqueiro(1, "Apollo (Arqueiro)", 180, Arco1, Tunica2);

    Personagem* p6 = new Tanque(2, "Hanzo (Tanque)", 400, Martelo2, Armadura1);
    Personagem* p7 = new Guerreiro(2, "Floki (Guerreiro)", 300, Espada2, Escudo1);
    Personagem* p8 = new Mago(2, "Merlin (Maga)", 190, Cajado1, Tunica1);
    Personagem* p9 = new Necromante(2, "Orochimaru (Necromante)", 230, Foice1, Parede2);
    Personagem* p10 = new Arqueiro(2, "Legolas (Arqueiro)", 180, Arco2, Manto1);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 1);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    simulador->adicionarPersonagem(p7, 2);
    simulador->adicionarPersonagem(p8, 2);
    simulador->adicionarPersonagem(p9, 2);
    simulador->adicionarPersonagem(p10, 2);

    
    simulador->iniciarSimulacao();

    return 0;
}