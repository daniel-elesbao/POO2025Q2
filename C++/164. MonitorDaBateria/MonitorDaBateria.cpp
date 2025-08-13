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
        Bateria operator()();
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

Bateria Bateria::operator()() 
{
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
    int carga, nivel, count = 0;
    char lixo, barra;
    std::string app;
    Bateria *bateria;
    std::cin >> carga >> lixo;
    bateria = new Bateria(carga);
    while (std::cin >> app >> nivel) 
    {
        if (app == "charge")
        {
            while (std::cin >> barra && barra == '|') 
            {
                count++;
                if (count == nivel)
                { 
                    ++(*bateria);
                count = 0;
                }
            }
        }
        else if (bateria->getCarga() == 0) std::cout << "nao executou por falta de bateria.";
        else
        {
            while (std::cin >> barra && barra == '|') 
            {
                count++;
                if (count == nivel)
                { 
                    --(*bateria);
                    count = 0;
                }
            }  
        }
        std::cout << app << ": " << bateria->getCarga() << "%" << std::endl;
    }
    std::cout << "carga final da bateria: " << bateria->getCarga() << "%" << std::endl;
    return 0;
}