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

class Lista
{
    private:
            Item *primeiro;
    public:
            Lista();
            Lista(Item*);
            void setPrimeiro(Item*);
            Item *getPrimeiro();
            void inserir(int);
            void *remover(int);
            bool buscar(int);
            bool vazia();
            void mostrar();
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

Lista::Lista()
{
    this->setPrimeiro(NULL);
}

void Lista::setPrimeiro(Item* it)
{
    this->primeiro = it;
}

Item *Lista::getPrimeiro()
{
    return this->primeiro;
}

void Lista::inserir(int chave)
{
    if (buscar(chave))
    return;
    Item* novo = new Item(chave);
    if (!primeiro || chave < primeiro->getChave())
    {
        novo->setProximo(primeiro);
        primeiro = novo;
        return;
    }
    Item* atual = primeiro;
    while (atual->getProximo() && atual->getProximo()->getChave() < chave) {
        atual = atual->getProximo();
    }
    novo->setProximo(atual->getProximo());
    atual->setProximo(novo);
}

void *Lista::remover(int chave)
{
    if (!primeiro)
    {
        return 0;
    }
    if (primeiro->getChave() == chave)
    {
        Item* temp = primeiro;
        primeiro = primeiro->getProximo();
        delete temp;
        return 0;
    }
    Item* atual = primeiro;
    while (atual->getProximo() && atual->getProximo()->getChave() != chave)
    {
    atual = atual->getProximo();
    }
    if (atual->getProximo()) {
        Item* temp = atual->getProximo();
        atual->setProximo(temp->getProximo());
        delete temp;
    }
    return 0;
}

bool Lista::buscar(int chave)
{
    Item* atual = primeiro;
    while (atual)
    {
        if (atual->getChave() == chave) 
        return true;
        atual = atual->getProximo();
    }
    return false;
}

bool Lista::vazia()
{
    return this->getPrimeiro() == NULL;
}

void Lista::mostrar()
{
    Item* atual = primeiro;
    if (!atual)
    {
    return;
    }
    bool ehPrimeiro = true;
    while (atual) {
        if (!ehPrimeiro) std::cout << " ";
        std::cout << atual->getChave();
        ehPrimeiro = false;
        atual = atual->getProximo();
    }
    std::cout << std::endl;
}
int main()
{
    char op;
    int chave;
    Lista lista;
    
    while (std::cin >> op) 
    {
        switch (op) {
        case 'I':
            std::cin >> chave;
            lista.inserir(chave);
            break;
        case 'R':
            std::cin >> chave;
            lista.remover(chave);
            break;
        case 'B':
            std::cin >> chave;
            std::cout << (lista.buscar(chave) ? "SIM" : "NAO") << std::endl;
            break;
        case 'L':
            lista.mostrar();
            break;
        }
    }
    return 0;
}