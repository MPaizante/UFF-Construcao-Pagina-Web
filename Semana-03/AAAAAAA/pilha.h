

typedef int TipoItem;
const int max_itens = 100;


class pilha{
    private:
    int tamanho;
    TipoItem* estrutura;



    public:
    pilha();//construtora
    ~pilha();//destrutora
    bool estaCheia();//verifica se a pilha esta cheia
    bool estaVazia();//verifica se a pilha esta vazia
    void inserir(TipoItem item);//push
    TipoItem remover();//pop
    void imprimir();//print
    int qualTamanho();//lenght





};