
#include <string>
#include "Cambio.h"
#include "ItemVenda.h"

using namespace std;

Cambio::Cambio(string tipo, int marchas, double valor) : ItemVenda(valor)
   {
   this->tipo = tipo;
   this->marchas = marchas;
   };
   
string Cambio::getDescricao()
   { 
   return ("Cambio " + tipo + " " + to_string(marchas) + " marchas"); 
   };
   
/* fim de arquivo */