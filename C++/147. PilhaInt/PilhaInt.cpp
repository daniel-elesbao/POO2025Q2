#include <iostream>

class Pilha 
{
    private:
        int *pilha;
        long topo;
        long max;
    public:
        Pilha(long);
        Pilha();
        void empilhar(int);
        void desempilhar();
        void mostraTopo();
        void mostraTopoBase();
        void mostraBaseTopo();
        bool cheia();
        bool vazia();
};

Pilha::Pilha()
{
    this->pilha = nullptr;
    this->topo = 0;
    this->max = 0;
}


Pilha::Pilha(long N)
{
    this->pilha = new int[N]();
    this->topo = 0;
    this->max = N;
}

void Pilha::empilhar(int V)
{
    if (this->cheia())
    {
        return;
    }
    this->pilha[topo] = V;
    this->topo++;
    return;
}


void Pilha::desempilhar()
{
    if (this->vazia())
    {
        return;
    }
    this->pilha[topo] = 0;
    this->topo--;
    return;
}


bool Pilha::vazia()
{
    if (this->topo == 0)
    {
        return true;
    }
    return false;
}

bool Pilha::cheia()
{
    if (this->topo == this->max)
    {
        return true;
    }
    return false;
}

void Pilha::mostraTopo()
{
    if (this->vazia())
    {
        return;
    }
    std::cout << this->pilha[topo - 1] << std::endl;
    return;
}
 
void Pilha::mostraTopoBase()
{
    if (this->vazia())
    {
        return;
    }
    bool primeiro = true;
    for (int i = this->topo; i > 0; i--)
    {
        if (primeiro)
        {
            std::cout << this->pilha[i - 1];
            primeiro = false;
        }
        else
            std::cout << " " << this->pilha[i -1];
    }
    std::cout << std::endl;
    return;
}

void Pilha::mostraBaseTopo()
{
    if (this->vazia())
    {
        return;
    }
    bool primeiro = true;
    for (int i = 0; i < this->topo; i++)
    {
        if (primeiro)
        {
            std::cout << this->pilha[i];
            primeiro = false;
        }
        else
            std::cout << " " << this->pilha[i];
    }
    std::cout << std::endl;
    return;
}

int main()
{
    int N, V;
    char O;
    std::cin >> N;
    Pilha *pilha = new Pilha(N);
    while (std::cin >> O)
    {
        switch (O)
        {
        case 'E':
            std::cin >> V;
            pilha->empilhar(V);
            break;
        case 'D':
            pilha->desempilhar();
            break;
        case 'T':
            pilha->mostraTopo();
            break;
        case 'X':
            pilha->mostraTopoBase();
            break;
        case 'B':
            pilha->mostraBaseTopo();
            break;
        }
    }
    return 0;
}