#include <iostream>
#include "Pilha.h"

using namespace std;
  Pilha::Pilha(){
    tamanho = 0;
    estrutura = new tipoItem[maxItens];
  }

  Pilha::~Pilha(){
   delete [] estrutura;
  }

  bool Pilha::estaCheio(){
     return (tamanho == maxItens);
  }

  bool Pilha::estaVazio(){
     return (tamanho == 0);
  }

  void Pilha::inserir(tipoItem item){
    if(estaCheio()){
      cout << "Erro! A pilha esta cheia!\n";
    }else{
      estrutura[tamanho] = item; //Adiciona o valor na posicao do tamanho atual
      tamanho++; //Acrescenta 1 no tamanho atual
    }
  }

  tipoItem Pilha::remover(){
    if(estaVazio()){
      cout << "Erro! A pilha esta vazia!\n";
      return 0;
    }else{
      tamanho--;
      return estrutura[tamanho];
    }  
  }

  void Pilha::imprimir(){
     cout << "Pilha: [";
      for(int i = 0; i < tamanho; i++){
       cout << estrutura[i] << " ";
      } 
     cout << "]\n";
  }

  int Pilha::getTamanho(){
    return tamanho;
  } 
