typedef int tipoItem;  //Typedef para facilitar manipulacao de tipo de variavel no codigo.
const int maxItens = 100; //Variavel constante com o tamanho maximo de itens que minha pilha pode armazenar.

class Pilha{


   private: 
  int tamanho;  //Variavel que controla a quantidade de itens que tenho na minha pilha.
  tipoItem* estrutura;  //Ponteiro vetor que cria a estrutura da minha pilha.

   public:
  Pilha(); //Construtor
  ~Pilha(); //Destruidor
  bool estaCheio(); //verifica se a pilha esta cheia
  bool estaVazio(); //verifica se a pilha esta vazia
  void inserir(tipoItem item); //metodo para inserir dados na pilha. (push())
  tipoItem remover(); //metodo para remover dados da pilha. (pop())
  void imprimir(); //metodo para printar a pilha
  int getTamanho(); //Getter para o tamanho
};