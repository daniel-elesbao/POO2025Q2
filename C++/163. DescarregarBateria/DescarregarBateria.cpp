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

int main()
{
    int carga;
    char lixo;
    Bateria *bateria;
    while (std::cin >> carga >> lixo) 
    {
        bateria = new Bateria(carga);
        --(*bateria);
        bateria->mostrar();
    }
    return 0;
}