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
        Horario operator()();
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

Horario Horario::operator()() 
{
    if (this->getHora() == 0) std::cout << "meia-noite";
    else if (this->getHora() == 12) std::cout << "meio-dia"; 
    else if (this->getHora() == 1) std::cout << "1 hora";
    else std::cout <<  this->getHora() << " horas";
    if (this->getSegundo() == 0)
    {
        if (this->getMinuto() == 0) std::cout << ".";
        else if (this->getMinuto() == 1) std::cout << " e 1 minuto.";
        else std::cout << " e " << this->getMinuto() << " minutos.";
    } 
    else if (this->getMinuto() == 0)
    {
        if (this->getSegundo() == 1) std::cout << " e 1 segundo.";
        else std::cout << " e " << this->getSegundo() << " segundos.";
    }
    else
    {
        if (this->getMinuto() == 1) std::cout << ", 1 minuto";
        else std::cout << ", " << this->getMinuto() << " minutos";
        if (this->getSegundo() == 1) std::cout << " e 1 segundo.";
        else std::cout << " e " << this->getSegundo() << " segundos.";
    }
    std::cout << std::endl;
    return *this;
}

int main() 
{
    int hora, minuto, segundo;
    char lixo;
    Horario *h;
    while (std::cin >> hora >> lixo >> minuto >> lixo >> segundo) 
    {
        h = new Horario (hora, minuto, segundo);
        (*h)();
    }
    return 0;
}