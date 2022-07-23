#include <iostream>
#include "Fila.h"

using namespace std;

int main(){
  Fila fila1;
  int opcao;
  tipoItem item;
  cout << "Gerador de filas: \n";
  do{
   cout << "Digite 0 para parar o programa!\n";
   cout << "Digite 1 para inserir um elemento.\n";
   cout << "Digite 2 para remover um elemento.\n";
   cout << "Digite 3 para imprimir a fila.\n";
   cin >> opcao;

   switch (opcao)
   {
  case 1:
    cout << "Digite o valor que deseja armazenar: \n";
    cin >> item;
    fila1.inserir(item);
  break;

  case 2:
    fila1.remover();
  break; 

  case 3:
    fila1.print();
  break;

  default:
    cout << "Nao existe essa opcao!\n";
  break;
  }
  }while(opcao != 0);
  return 0;
}