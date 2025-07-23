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
        void setReal(int);
        void setImaginario(int);
        int  getReal() const;
        int  getImaginario() const;
        operator double() const;
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

Complexo::operator double() const
{
    return sqrt(r * r + i * i);
}

int main()
{
    int r, i;
    char ci;

    while (std::cin >> r >> i >> ci)
    {
        Complexo z(r, i);
        std::cout << std::fixed << std::setprecision(4) << double(z) << std::endl;
    }
    return 0;
}