

#include <string>
#include "ItemVenda.h"

using namespace std;

ItemVenda::ItemVenda(double valor)
   {
   this->valor = valor;
   };
   
double ItemVenda::getValor()
   { 
   return (valor); 
   };
   
/* fim de arquivo */