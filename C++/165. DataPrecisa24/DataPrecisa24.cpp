#include <iostream>

class DataPrecisa24 
{
    private:
        int dia;
        int mes;
        int ano;
        int hora;
        int minuto;
        int segundo;
    public:
        DataPrecisa24();
        DataPrecisa24(int, int, int, int, int, int);
        int getDia();
        int getMes();
        int getAno();
        int getHora();
        int getMinuto();
        int getSegundo();
        void setDia(int);
        void setMes(int);
        void setAno(int);
        void setHora(int);
        void setMinuto(int);
        void setSegundo(int);
        bool valida();
        void mostrar();
        DataPrecisa24 operator++();
};

DataPrecisa24::DataPrecisa24() 
{
    this->setDia(15);
    this->setMes(11);
    this->setAno(1582);
    this->setHora(0);
    this->setMinuto(0);
    this->setSegundo(0);
}

DataPrecisa24::DataPrecisa24(int dia, int mes, int ano, int hora, int minuto, int segundo) 
{
    this->setDia(dia);
    this->setMes(mes);
    this->setAno(ano);
    this->setHora(hora);
    this->setMinuto(minuto);
    this->setSegundo(segundo);
}
int DataPrecisa24::getDia() 
{
    return this->dia;
}
int DataPrecisa24::getMes() 
{
    return this->mes;
}
int DataPrecisa24::getAno()
{
    return this->ano;
}
int DataPrecisa24::getHora() 
{
    return this->hora;
}
int DataPrecisa24::getMinuto() 
{       
    return this->minuto;
}
int DataPrecisa24::getSegundo() 
{
    return this->segundo;
}
void DataPrecisa24::setDia(int dia) 
{
    this->dia = dia;
}
void DataPrecisa24::setMes(int mes) 
{
    this->mes = mes;
}
void DataPrecisa24::setAno(int ano) 
{
    this->ano = ano;
}
void DataPrecisa24::setHora(int hora) 
{
    this->hora = hora;
}
void DataPrecisa24::setMinuto(int minuto) 
{
    this->minuto = minuto;
}
void DataPrecisa24::setSegundo(int segundo) 
{
    this->segundo = segundo;
}
bool DataPrecisa24::valida() 
{
    if (this->getHora() < 0 || this->getHora() > 23) return false;
    if (this->getMinuto() < 0 || this->getMinuto() > 59) return false;
    if (this->getSegundo() < 0 || this->getSegundo() > 59) return false;
    if (this->getAno() < 1582) return false;
    if (this->getMes() < 1 || this->getMes() > 12) return false;
    if (this->getDia() < 1 || this->getDia() > 31) return false;
    if (this->getMes() == 2 && this->getDia() > 29) return false;
    if ((this->getMes() == 4 || this->getMes() == 6 || this->getMes() == 9 || this->getMes() == 11) && this->getDia() > 30) return false;
    if (this->getMes() == 2 && this->getDia() == 29) 
    {
        if (this->getAno() % 4 != 0) return false;
        if (this->getAno() % 100 == 0 && this->getAno() % 400 != 0) return false;
    }
    return true;
}
void DataPrecisa24::mostrar()
{
    std::cout << this->getDia() << "/" << this->getMes() << "/" << this->getAno() << " " << this->getHora() << ":" << this->getMinuto() << ":" << this->getSegundo() << std::endl;
}
DataPrecisa24 DataPrecisa24::operator++()
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
                if (!this->valida()) 
                {
                    this->setHora(0);
                    this->setDia(this->getDia() + 1);
                    if (!this->valida()) 
                    {
                        this->setDia(1);
                        this->setMes(this->getMes() + 1);
                        if (!this->valida()) 
                        {
                            this->setMes(1);
                            this->setAno(this->getAno() + 1);
                        }
                    }
                }
            }
        }
    }
    return *this;
}

int main()
{
    int dia, mes, ano, hora, minuto, segundo;
    char mais;
    DataPrecisa24 *data = new DataPrecisa24();
    std::cin >> dia >> mes >> ano >> hora >> minuto >> segundo;
    *data = DataPrecisa24(dia, mes, ano, hora, minuto, segundo);
    while (std::cin >> mais && mais == '+') 
    {
        ++(*data);
    }
    data->mostrar();
    return 0;
}