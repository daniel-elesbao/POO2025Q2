#include <iostream>
class Lista
{
    private:
            int *itens;
            int tamanho;
            int posicao = 0;
    public:
            Lista();
            Lista(int);
            void setItens(int, int);
            int getItens(int);
            void inserir(int);
            void remover(int);
            bool buscar(int);
            bool vazia();
            bool cheia();
            void mostrar();
};

Lista::Lista()
{
    this->itens = nullptr;
    this->tamanho = 0;
}


Lista::Lista(int N)
{
    this->itens = new int[N]();
    this->tamanho = N;
}

void Lista::setItens(int i, int V)
{
    this->itens[i] = V;
}

void Lista::inserir(int V)
{
    for (int i = 0; i < this->tamanho; i++)
    {
        if (this->itens[i] == 0)
        {
            this->setItens(i, V);
            return;
        }
    }
}

void Lista::remover(int V)
{
    for (int i = 0; i < this->tamanho; i++)
    {
        if (itens[i] == V)
        {
            this->setItens(i, 0);
            return;
        }
    }
}

bool Lista::buscar(int V)
{
    for (int i = 0; i < this->tamanho; i++)
    {
        if (itens[i] == V)
        {
            return true;
        }
    }
    return false;
}

void Lista::mostrar()
{
    for (int i = 0; i < this->tamanho; i++)
    {
        if (this->itens[i] != 0)
        {
            std::cout << ' ' << this->itens[i];
        }
    }
    std::cout << std::endl;
}



int main()
{
    int N, V;
    char O;
    std::cin >> N;
    Lista *lista = new Lista(N);
    while (std::cin >> O)
    {
        switch (O)
        {
        case 'I':
            std::cin >> V;
            lista->inserir(V);
            break;
        case 'R':
            std::cin >> V;
            lista->remover(V);
            break;
        case 'B':
            std::cin >> V;
            if (lista->buscar(V))
            {
                std::cout << "SIM" << std::endl;
            }
            else
            {
                std::cout << "NAO" << std::endl;
            }
            break;
        case 'M':
            lista->mostrar();
            break;
        }
    }
    return 0;
}