#include <iostream>
#include "Pilha.h"
#include <cstddef> //para utilizar o valor NULL

using namespace std;

    Pilha::Pilha(){  //construtor
      topo = NULL;  //o No topo ja recebe o valor nulo, pois este é o primeiro e está no topo.
    }  

    Pilha::~Pilha(){  //destruidor
    //Para destruir essa pilha, eu preciso percorrer todo o caminho e ir deletando
      No* temp; //Crio um no temporario
      while(topo != NULL){ //Crio um while que vai ir até chegar nu ultimo valor.
        temp = topo; //Faco meu No temporario armazenar os dados do valor a ser deletado
        topo = topo->proximo; //faco o meu topo apontar para o proximo valor a ser deletado, pois ja salvei o atual num ponteiro temporario
        delete temp; //Deleto da memoria o meu no temporario, que armazena tudo do ponteiro, consequentemente, eu deleto ele tambem, pois deleto o endereco.
      }
    }  

    bool Pilha::estaVazio(){ //verifica se a pilha esta vazia
      return (topo == NULL);
    }

    bool Pilha::estaCheio(){  //verifica se a pilha esta cheia, e a disponibilidade de memoria no computador.
    //A ideia é primeiramente tentar alocar um No novo, se eu conseguir, é porque tem memoria disponivel, se não, é por esta cheio.
      No* novo;
      try{
        novo = new No;  //crio um novo No
        delete novo;    //Deleto ele, pois foi criado com sucesso
        return false;   //Retorno falso pois não está cheia a memoria.
      }catch(bad_alloc exception){   //excessao de mal alocamento na memoria.
        return true;    //Retorno true pois a memoria está cheia.
      }
    } 

    void Pilha::inserir(tipoItem item){  //inserir elemento (push)
      if(estaCheio()){
        cout << "Falha ao inserir o elemento!\n";
        cout << "A Pilha esta cheia!\n";
      }else{
        No* novo = new No;  //No que vou inserir
        novo->valor = item; //Atribuo o valor 
        novo->proximo = topo;  //aponto para o endereco antigo, o No antigo que armazenava o topo, aqui é onde ocorre a ligacao entre o novo No com o anterior da pilha.
        topo = novo; //Digo que este novo No, agora tem o valor do novo
      }
    }

    tipoItem Pilha::remover(){  //remover elemento (pop)
      if(estaVazio()){
        cout << "Falha ao remover elemento.\n";
        cout << "A pilha esta vazia!\n";
        return 0;
      }else{
        No* temp;  //Crio um ponteiro temporario
        temp = topo; //Vou fazer o ponteiro temporario receber endereco do topo, para conseguir liberar memoria.
        tipoItem item = topo -> valor;  //Variavel local para  armazenar o valor do topo
        topo = topo -> proximo; //Faco o topo apontar para o No criado antes (como estamos falando de uma pilha, o proximo valor)
        delete temp;  //Libero a memoria do topo, pois ja peguei os valores deste no antes de deletar.
        cout << "Valor " << item << " deletado da pilha.\n";
        return item;
      }
    } 

    void Pilha::imprimir(){ //printar
        No* temp = topo; //Crio um No temporario para armazenar o topo da pilha.
        cout << "Pilha Dinamica: [";
        while(temp != NULL){  //Enquanto o No temporario for diferente de nulo, a pilha tem valores para imprimir
          cout << temp->valor << " ";  //imprimo o valor armazenado
          temp = temp->proximo;  //Apontar para o proximo endereco que vai imprimir.
        }
        cout << "]\n";
    }  