#include <iostream>

class Horario 
{
    private:
        int hora;
        int minuto;
        int segundo;
    public:
        Horario();
        Horario(int, int, int);
        void setHora(int);
        void setMinuto(int);
        void setSegundo(int);
        int getHora();
        int getMinuto();
        int getSegundo();
        bool valida();
};

Horario::Horario() 
{
    setHora(0);
    setMinuto(0);
    setSegundo(0);
}

Horario::Horario(int hora, int minuto, int segundo) 
{
    setHora(hora);
    setMinuto(minuto);
    setSegundo(segundo);
}

void Horario::setHora(int hora) 
{
    this->hora = hora;
}

void Horario::setMinuto(int minuto) 
{
    this->minuto = minuto;
}

void Horario::setSegundo(int segundo)
{
    this->segundo = segundo;
}

int Horario::getHora() 
{
    return this->hora;
}

int Horario::getMinuto() 
{
    return this->minuto;
}

int Horario::getSegundo() 
{
    return this->segundo;
}

bool Horario::valida() 
{
    if (hora < 0 || hora > 23) return false;
    if (minuto < 0 || minuto > 59) return false;
    if (segundo < 0 || segundo > 59) return false;
    return true;
}

int main() 
{
    int hora, minuto, segundo;
    char lixo;
    Horario *h;
    while (std::cin >> hora >> lixo >> minuto >> lixo >> segundo) 
    {
        h = new Horario (hora, minuto, segundo);
        if (h->valida()) 
        {
            std::cout << "horario valido" << std::endl;
        } 
        else 
        {
            std::cout << "horario invalido" << std::endl;
        }
    }
    return 0;
}