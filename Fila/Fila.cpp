#include <iostream>
#include "Fila.h"

using namespace std;

Fila::Fila(){   //Construtor
   primeiro = 0;
   ultimo = 0;
   estrutura = new tipoItem[maxItens];
} 
Fila::~Fila(){  //Destrutor
   delete [] estrutura;
} 
bool Fila::estaVazio(){
   return (primeiro == ultimo);
}
bool Fila::estaCheio(){
  return (ultimo - primeiro == maxItens);
}
void Fila::inserir(tipoItem item){ //enqueue, push
  if(estaCheio()){
    cout << "A fila esta cheia!\n";
  }else{
    estrutura[ultimo % maxItens] = item; //O item é adicionado na posicao do resto do ultimo pelo maxItens.
    ultimo++; //Incremento
    cout << "Valor inserido!\n";
  }
} 
tipoItem Fila::remover(){
  if(estaVazio()){
    cout << "A fila ja esta vazia!\n";
    return 0;
  }else{
    primeiro++; //Incremento
    cout << "Primeiro elemento (" << estrutura[primeiro-1] << ") removido!\n";  
    return estrutura[(primeiro-1) % maxItens]; //O item retornado esta na posicao do resto do primeiro pelo maxItens. 
  }

} //dequeue, pop
void Fila::print(){
   cout << "Fila: [ ";
   for(int i = primeiro; i < ultimo; i++){
    cout << estrutura[i % maxItens] << " ";
   }
   cout << "]\n";
}