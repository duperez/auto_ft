
#include <string>
#include "Motor.h"
#include "ItemVenda.h"

using namespace std;

Motor::Motor(float volume, int valvulas, string combustivel, double valor) : ItemVenda(valor)
   {
   this->volume = volume;
   this->valvulas = valvulas;
   this->combustivel = combustivel;
   };
   
string Motor::getDescricao()
   { 
   return ("Motor " + to_string(volume) + " cc3, " + to_string(valvulas) + " valvulas, " + combustivel); 
   };
   
/* fim de arquivo */