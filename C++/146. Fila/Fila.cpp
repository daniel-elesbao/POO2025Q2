#include <iostream>
class Fila
{
    private:
            int *itens;
            int tamanho;
            int inicio = 0;
            int fim = 0;
    public:
            Fila();
            Fila(int);
            void setItens(int, int);
            int getItens(int);
            void inserir(int);
            void excluir();
            bool vazia();
            bool cheia();
};

Fila::Fila()
{
    this->itens = nullptr;
    this->tamanho = 0;
}


Fila::Fila(int N)
{
    this->itens = new int[N]();
    this->tamanho = N;
}

void Fila::setItens(int i, int V)
{
    this->itens[i] = V;
}

int Fila::getItens(int i)
{
    return this->itens[i];
}

void Fila::inserir(int V)
{
    if (this->cheia())
    {
        return;
    }
    this->itens[this->fim] = V;
    this->fim++;
    if (this->fim == this->tamanho)
    {
        this->fim = 0;
    }
}


void Fila::excluir()
{
    if (this->vazia())
    {
        return;
    }
    std::cout << this->itens[this->inicio] << std::endl;
    this->itens[this->inicio] = 0;
    this->inicio++;
    if (this->inicio == this->tamanho)
    {
       this->inicio = 0;
    }
}


bool Fila::vazia()
{
    for (int i = 0; i < this->tamanho; i++)
    {
        if (this->itens[i] != 0)
            return false;
    }
    return true;
}

bool Fila::cheia()
{
    for (int i = 0; i < this->tamanho; i++)
    {
        if (itens[i] == 0)
            return false;
    }
    return true;
}

int main()
{
    int N, V;
    char O;
    std::cin >> N;
    Fila *fila = new Fila(N);
    while (std::cin >> O)
    {
        switch (O)
        {
        case 'E':
        std::cin >> V;
            fila->inserir(V);
            break;
        case 'D':
            fila->excluir();
            break;
        }
    }
    return 0;
}