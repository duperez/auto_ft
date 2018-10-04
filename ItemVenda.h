

#ifndef ITEMVENDA_H

#define ITEMVENDA_H

#include <string>

using namespace std;

class ItemVenda
   {
   protected:
      double valor;
      
   public:
      ItemVenda(double);
      virtual double getValor();

      virtual string getDescricao() = 0;
   };
   
#endif
   
/* fim de arquivo */