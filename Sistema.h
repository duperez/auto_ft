

#ifndef SISTEMA_H

#define SISTEMA_H

#include <string>
#include <vector>

#include "ItemVenda.h"
#include "Concessionaria.h"

using namespace std;

class Sistema
   {
   private:
      vector<ItemVenda *> carros;
      vector<ItemVenda *> motores;
      vector<ItemVenda *> cambios;
      vector<ItemVenda *> cores;

      vector<ItemVenda *> orcamento;
      
      Concessionaria * cliente;
      
      void boasVindas();
      void carregarEstoque();
      void iniciarVenda();
      void imprimirOrcto();
      void listarConfiguracao();

      ItemVenda * escolheAutomovel();
      ItemVenda * escolheMotor();
      ItemVenda * escolheCambio();
      ItemVenda * escolheCor();
      
   public:
      Sistema(Concessionaria *);
      ~Sistema();
      void processa();
   };
   
#endif
   
   
/* fim de arquivo */