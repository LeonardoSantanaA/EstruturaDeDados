#include <iostream>
#include "Pilha.h"

using namespace std;

int main(){
   Pilha pilha1;
   tipoItem item;
   int opcao;
   cout << "Programa gerador de pilhas: \n";
   do{
    cout << "Digite 0 para parar o programa.\n";
    cout << "Digite 1 para inserir um elemento.\n";
    cout << "Digite 2 para remover um elemento.\n";
    cout << "Digite 3 para imprimir a pilha.\n";
    cout << "Digite 4 para verificar o tamanho da pilha.\n";
    cout << "Digite 5 para verificar se a pilha esta vazia.\n";
    cout << "Digite 6 para verificar se a pilha esta cheia.\n";
    cin >> opcao;
    
    switch(opcao){
      case 1:
       cout << "Digite o elemento a ser inserido:\n";
       cin >> item;
       pilha1.inserir(item);
      break;
      case 2:
       item = pilha1.remover();
       cout << "Elemento removido!\n";
       cout << "Elemento: " << item << "\n";
      break;
      case 3:
       pilha1.imprimir();  
      break;
      case 4:
       cout << "Tamanho: " << pilha1.getTamanho() << "\n";
      break;
      case 5:
        if(pilha1.estaVazio()){
        cout << "A pilha esta vazia!\n";
       }else{
        cout << "A pilha nao esta vazia!\n";
       }
      break;
      case 6:
      if(pilha1.estaCheio()){
        cout << "A pilha esta cheia!\n";
       }else{
        cout << "A pilha nao esta cheia!\n";
       }
      break; 
      default:
        cout << "Nao existe essa opcao!\n";
      break;
    }
    
   cout << endl;
   } while(opcao != 0);

  return 0;
}