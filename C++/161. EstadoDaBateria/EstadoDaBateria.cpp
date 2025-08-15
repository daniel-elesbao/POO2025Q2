#include <iostream>

class Bateria
{
    private:
        int carga;
    public:
        Bateria();
        Bateria(int carga);
        int getCarga();
        void setCarga(int);
        bool valida();
        void mostrar();
        Bateria operator++();
        Bateria operator--();
        Bateria operator=(int carga);
};

Bateria::Bateria() 
{
    this->setCarga(0);
}

Bateria::Bateria(int carga)
{
    this->setCarga(carga);
}

int Bateria::getCarga() 
{
    return this->carga;
}

void Bateria::setCarga(int carga) 
{
    this->carga = carga;
}

bool Bateria::valida() 
{
    return (this->getCarga() >= 0 && this->getCarga() <= 100);
}

void Bateria::mostrar() 
{
    std::cout << this->getCarga() << "%" << std::endl;
}

Bateria Bateria::operator++() 
{
    if (this->valida()) {
        if (this->getCarga() < 100) this->setCarga(this->getCarga() + 1);
    }
    return *this;
}

Bateria Bateria::operator--() 
{
    if (this->valida()) 
    {
        if (this->getCarga() > 0) this->setCarga(this->getCarga() - 1);
    }
    return *this;
}

Bateria Bateria::operator=(int carga) 
{
    this->setCarga(carga);
        if (this->valida()) {
        if (this->getCarga() == 0) std::cout << "0%: bateria vazia.";
        else if (this->getCarga() == 100) std::cout << "100%: bateria cheia.";
        else if (this->getCarga() < 6) std::cout << this->getCarga() << "%: bateria quase vazia.";
        else if (this->getCarga() > 94) std::cout << this->getCarga() << "%: bateria quase cheia.";
        else
        {
            std::cout << this->getCarga() << "%: ";
            for (int i = 0; i < this->getCarga(); i++) 
            {
                std::cout << "|";
            }
        }
        std::cout << std::endl;
    }
    return *this;
}

int main()
{
    int carga;
    char lixo;
    Bateria *bateria = new Bateria();
    while (std::cin >> carga >> lixo) 
    {
        *bateria = carga;
    }
    return 0;
}