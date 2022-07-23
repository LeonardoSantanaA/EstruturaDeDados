#include <iostream>
#include "Pilha.h"

using namespace std;

int main(){
  Pilha p;
  tipoItem item;
  int opcao;
  cout << "Estrutura de dados de pilha dinamica: \n";
  do{
  cout << "Digite 0 para finalizar o teste\n";
  cout << "Digite 1 para inserir um elemento\n";
  cout << "Digite 2 para remover um elemento\n";
  cout << "Digite 3 para verificar se a pilha esta vazia\n";
  cout << "Digite 4 para verificar se a pilha esta cheia\n";
  cout << "Digite 5 para imprimir a pilha\n";
  cin >> opcao;

  switch (opcao){
    case 1: //inserir
    cout << "Digite o elemento que deseja inserir: ";
    cin >> item;
    p.inserir(item);
    cout << endl;
    break;

    case 2: //remover
    p.remover();
    break;

    case 3: //verificar se esta vazia
    cout << "Esta vazia: " << p.estaVazio() << endl;
    break;

    case 4: //verificar se esta cheia
    cout << "Esta cheia: " << p.estaCheio() << endl;
    break;
    
    case 5: //imprimir
    p.imprimir();
    break;
  }
  }while (opcao != 0);
}