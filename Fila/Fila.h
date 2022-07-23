typedef int tipoItem;
const int maxItens = 100;

class Fila{
  private:
int primeiro, ultimo; //variaveis para controlar a estrutura da fila
tipoItem* estrutura; //ponteiro para estruturar a fila

  public:
Fila();  //Construtor
~Fila(); //Destrutor
bool estaVazio();
bool estaCheio();
void inserir(tipoItem item); //enqueue, push
tipoItem remover(); //dequeue, pop
void print();
};