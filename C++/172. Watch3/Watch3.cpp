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
    return *this;
}

class Relogio: public Cronometro
{
    public:
        bool valida();
        Relogio operator++();
};
bool Relogio::valida() 
{
    if (!Cronometro::valida()) return false;
    if (this->getHora() < 0 || this->getHora() > 23) return false;
    return true;
}
Relogio Relogio::operator++()
{
    Cronometro::operator++();
    if (!this->valida()) 
    {
        this->setHora(0);
    }
    return *this;
}

class Relogio2: public Relogio
{
    public:
        Relogio2 operator~();
        Relogio2 operator!();
};
Relogio2 Relogio2::operator~()
{
    this->setMinuto(this->getMinuto() + 1);
        if (!this->valida()) 
        {
            this->setMinuto(0);
            this->setHora(this->getHora() + 1);
            if (!this->valida()) this->setHora(0);
        }
    return *this;
}
Relogio2 Relogio2::operator!()
{   this->setHora(this->getHora() + 1);
    if (!this->valida())
    {
        this->setHora(0);
    }
    return *this;
}

class Relogio3: public Relogio2
{
    public:
        Relogio3(int, int, int);
        Relogio3();
};
Relogio3::Relogio3() : Relogio2() {}
Relogio3::Relogio3(int hora, int minuto, int segundo) 
{
    this->setHora(hora);
    this->setMinuto(minuto);
    this->setSegundo(segundo);
}
class Watch: public Relogio3
{
    public:
        Watch(int hora, int minuto, int segundo);
        Watch();
        void show();
};
Watch::Watch(int hora, int minuto, int segundo)
    : Relogio3(hora, minuto, segundo) {}
Watch::Watch() : Relogio3() {}
void Watch::show()
{
    if (this->getHora() == 0 )
    {
        std::cout << "12:" 
                  << this->getMinuto() << ":" 
                  << this->getSegundo() << " AM" 
                  << std::endl;
    }
    else if(this->getHora() < 12)
    {
        std::cout << this->getHora() << ":" 
                  << this->getMinuto() << ":" 
                  << this->getSegundo() << " AM"
                  << std::endl;
    }
    else if (this->getHora() == 12)
    {
        std::cout << this->getHora() << ":" 
                  << this->getMinuto() << ":" 
                  << this->getSegundo() << " PM"
                  << std::endl;        
    }
    else
    {
        std::cout << this->getHora() - 12 << ":" 
                  << this->getMinuto() << ":" 
                  << this->getSegundo() << " PM" 
                  << std::endl;        
    }
}
int main()
{
    int hora, minuto, segundo;
    std::string entrada;
    std::cin >> hora >> minuto >> segundo;
    Watch *watch3 = new Watch(hora, minuto, segundo);
    while (std::cin >> entrada) 
    {
        if (entrada == "tic") 
        {
            ++(*watch3);
        } 
        else if (entrada == "tac") 
        {
            ~(*watch3);
        } 
        else if (entrada == "toc") 
        {
            !(*watch3);
        }
    }
    watch3->show();
    return 0; 
}