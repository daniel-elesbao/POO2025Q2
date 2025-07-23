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

class Pilha
{
    private:
            Item *topo;
    public:
            Pilha();
            void setTopo(Item*);
            Item *getTopo();
            void empilha(Item*);
            Item *desempilha();
            bool vazia();
            void mostrarTopoBase();
};

Item::Item(int chave)
{
    this->setChave(chave);
    this->setProximo(NULL);
}

void Item::setChave(int chave)
{
    this->chave = chave;
}

int Item::getChave()
{
  return this->chave;
}

void Item::setProximo(Item *it)
{
    this->proximo = it;
}

Item *Item::getProximo()
{
    return this->proximo;
}

Pilha::Pilha()
{
    this->setTopo(NULL);
}

void Pilha::setTopo(Item* it)
{
    this->topo = it;
}

Item *Pilha::getTopo()
{
    return this->topo;
}

void Pilha::empilha(Item* it)
{
    it->setProximo(this->getTopo());
    this->setTopo(it);
}

Item *Pilha::desempilha()
{
    Item *it = this->getTopo();
    if(!this->vazia())
    {
        this->setTopo(it->getProximo());
        it->setProximo(NULL);
    }
    return it;
}

bool Pilha::vazia()
{
    return this->getTopo() == NULL;
}

void Pilha::mostrarTopoBase()
{
    Item *it = this->getTopo();
    while(it != NULL)
    {
        std::cout << it->getChave() << (it->getProximo()!=NULL?" ":"\n");
        it = it->getProximo();
    }
}

int main()
{
    char op;
    int chave;
    Item *it;
    Pilha *pilha = new Pilha();
    
    while(std::cin >> op)
    {
        if(op == 'E')
        {
            std::cin >> chave;
            pilha->empilha(new Item(chave));
        }
        else if(op == 'D')
        {
            it = pilha->desempilha();
            if(it != NULL)
            {
                std::cout << "[" << it->getChave() << "]" << std::endl;
                delete it;
            }
        }
        else
        {
            pilha->mostrarTopoBase();
        }
    }
    return 0;
}