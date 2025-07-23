#include <iostream>
#include <iomanip>
#include <cmath>

class Complexo
{
    private:
        int r, i;

    public:
        Complexo();
        Complexo(int, int);
        Complexo(int);
        void setReal(int);
        void setImaginario(int);
        int  getReal() const;
        int  getImaginario() const;
        Complexo& operator=(int);
};

Complexo::Complexo()
{
    setReal(0);
    setImaginario(0);
}

Complexo::Complexo(int r, int i)
{
    setReal(r);
    setImaginario(i);
}

Complexo::Complexo(int r)
{
    setReal(r);
    setImaginario(0);
}

void Complexo::setReal(int r)
{
    this->r = r;
}

void Complexo::setImaginario(int i)
{
    this->i = i;
}

int Complexo::getReal() const
{
    return this->r;
}

int Complexo::getImaginario() const
{
    return this->i;
}

Complexo& Complexo::operator=(int r)
{
    this->r = r;
    this->i = 0;
    return *this;
}

int main()
{
    int r;
    Complexo z;
    while (std::cin >> r)
    {
        z = r;
        std::cout << z.getReal() << "+" << z.getImaginario() << "i" << std::endl;
    }
    return 0;
}
