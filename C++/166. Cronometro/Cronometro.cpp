#include <iostream>
class Cronometro
{
    private:
        int segundo;
        int minuto;
        int hora;
    public:
        Cronometro();
        void setSegundo(int);
        void setMinuto(int);
        void setHora(int);
        int getSegundo();
        int getMinuto();
        int getHora();
        bool valida();
        void mostrar();
        Cronometro operator++();        
};
Cronometro::Cronometro() 
{
    this->setSegundo(0);
    this->setMinuto(0);
    this->setHora(0);
}
void Cronometro::setSegundo(int segundo) 
{
    this->segundo = segundo;
}
void Cronometro::setMinuto(int minuto) 
{
    this->minuto = minuto;
}
void Cronometro::setHora(int hora) 
{
    this->hora = hora;
}
int Cronometro::getSegundo() 
{
    return this->segundo;
}
int Cronometro::getMinuto() 
{
    return this->minuto;
}
int Cronometro::getHora() 
{
    return this->hora;
}
bool Cronometro::valida() 
{
    if (this->getMinuto() < 0 || this->getMinuto() > 59) return false;
    if (this->getSegundo() < 0 || this->getSegundo() > 59) return false;
    return true;
}
void Cronometro::mostrar() 
{
    std::cout << this->getHora() << ":" << this->getMinuto() << ":" << this->getSegundo() << std::endl;
}
Cronometro Cronometro::operator++() 
{
    if (this->valida()) 
    {
        this->setSegundo(this->getSegundo() + 1);
        if (!this->valida()) 
        {
            this->setSegundo(0);
            this->setMinuto(this->getMinuto() + 1);
            if (!this->valida()) 
            {
                this->setMinuto(0);
                this->setHora(this->getHora() + 1);
            }
        }
    }
    return *this;
}

int main() 
{
    std::string entrada;
    Cronometro *cronometro = new Cronometro();
    while (std::cin >> entrada) 
    {
        if (entrada == "tic") ++(*cronometro);
    }
    cronometro->mostrar();
    return 0;
}