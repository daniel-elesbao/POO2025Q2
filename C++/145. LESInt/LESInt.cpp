#include <iostream>
class Lista
{
    private:
            int *itens;
            int tamanho;
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

int Lista::getItens(int i)
{
    return this->itens[i];
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
        else if (this->itens[i] == V)
        {
            return;
        }
        else if (V < this->itens[i])
        {
            for (int j = this->tamanho-1; j > i; j--)
            {
                this->setItens(j, this->itens[j - 1]);
            }
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
            for (int j = i; j < this->tamanho-1; j++)
            {
                this->setItens(j, this->itens[j + 1]);
            }
            this->setItens(this->tamanho-1, 0);
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
    if (vazia())
    {
        return;
    }
    bool primeiro = true;
    for (int i = 0; i < this->tamanho; i++)
    {
        if (this->itens[i] != 0)
        {
            if (!primeiro)
            std::cout << " " << this->itens[i];
            primeiro = false;
        }
    }
    std::cout << std::endl;
}

bool Lista::vazia()
{
    for (int i = 0; i < this->tamanho; i++)
    {
        if (itens[i] != 0)
            return false;
    }
    return true;
}

bool Lista::cheia()
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
    std::cout << std::endl;
    return 0;
}