#include <iostream>

class Item
{
    private:
            int chave;
            Item *proximo;
    public:
            Item(int);
            void setChave(int);
            int getChave();
            void setProximo(Item *);
            Item *getProximo();
};

class Fila
{
    private:
            Item *primeiro, *ultimo;
    public:
            Fila();
            Fila(Item *);
            void setPrimeiro(Item*);
            void setUltimo(Item*);
            Item *getPrimeiro();
            Item *getUltimo();
            void enfileirar(Item*);
            Item *desenfileirar();
            bool vazia();
            void mostrar();
};

Item::Item(int chave)
{
    this->chave = chave;
    this->proximo = NULL;
}

void Item::setChave(int chave)
{
    this->chave = chave;
}

int Item::getChave()
{
    return this->chave;
}

void Item::setProximo(Item *proximo)
{
    this->proximo = proximo;
}

Item *Item::getProximo()
{
    return this->proximo;
}

Fila::Fila()
{
    this->primeiro = this->ultimo = NULL;
}

Fila::Fila(Item *item)
{
    this->primeiro = this->ultimo = item;
}

void Fila::setPrimeiro(Item *item)
{
    this->primeiro = item;
}

void Fila::setUltimo(Item *item)
{
    this->ultimo = item;
}

Item *Fila::getPrimeiro()
{
    return this->primeiro;
}

Item *Fila::getUltimo()
{
    return this->ultimo;
}

void Fila::enfileirar(Item *item)
{
    if (vazia())
    {
        this->primeiro = this->ultimo = item;
    }
    else
    {
        this->ultimo->setProximo(item);
        this->ultimo = item;
    }
}

Item *Fila::desenfileirar()
{
    if (vazia())
    {
        return nullptr;
    }
    else
    {
        Item *item = this->primeiro;
        this->primeiro = this->primeiro->getProximo();
        if (this->primeiro == nullptr)
        {
        this->ultimo = nullptr;
        }
        std::cout << "<" << item->getChave() << ">" << std::endl;
        delete item;
    }
    return nullptr;
}

bool Fila::vazia()
{
    return getPrimeiro() == nullptr;
}

void Fila::mostrar()
{
    Item* atual = primeiro;
    if (!atual)
    {
        return;
    }
    while (atual->getProximo())
    {
        std::cout << atual->getChave() << " ";
        atual = atual->getProximo();
    }
    std::cout << atual->getChave() << std::endl;
}

int main()
{
    char op;
    int chave;
    Item *it;
    Fila *fila = new Fila();
   
    while (std::cin >> op) 
    {
        switch (op) {
        case 'E':
            std::cin >> chave;
            it = new Item(chave);
            fila->enfileirar(it);
            break;
        case 'D':
            fila->desenfileirar();
            break;
        case 'M':
            fila->mostrar();
            break;
        }
    }
    return 0;
}

