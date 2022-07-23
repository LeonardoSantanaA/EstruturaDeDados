typedef int tipoItem;

struct No{
    tipoItem valor;  //essa variavel vai armazenar o valor do struct atual
    No* proximo; //crio um ponteiro para o proximo no
};

class Pilha{
  private:
    No* topo; //Ponteiro para apontar pro no que esta no topo
  public:
    Pilha();   //construtor
    ~Pilha();  //destrutor
    bool estaVazio(); //verifica se a pilha esta vazia
    bool estaCheio(); //verifica se a pilha esta cheia, e a disponibilidade de memoria no computador.
    void inserir(tipoItem item); //inserir elemento (push)
    tipoItem remover(); //remover elemento (pop)
    void imprimir();  //printar
};