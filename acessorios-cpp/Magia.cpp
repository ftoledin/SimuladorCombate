#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Magia.hpp"

Magia::Magia(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Magia::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Magia::getResistencia() 
{
    return this->resistencia;
}