#include <iostream>

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
        Complexo operator+(const Complexo &) const;
        Complexo operator-(const Complexo &) const;
        Complexo operator*(const Complexo &) const;
        Complexo operator/(const Complexo &) const;
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

Complexo Complexo::operator+(const Complexo &num) const
{
    return Complexo(r + num.r, i + num.i);
}

Complexo Complexo::operator-(const Complexo &num) const
{
    return Complexo(r - num.r, i - num.i);
}

Complexo Complexo::operator*(const Complexo &num) const
{
    int real = (r * num.r) - (i * num.i);
    int imag = (r * num.i) + (i * num.r);
    return Complexo(real, imag);
}

Complexo Complexo::operator/(const Complexo &num) const
{
    int a = r, b = i;
    int c = num.r, d = num.i;
    int denom = c * c + d * d;

    if (denom == 0)
        return Complexo(0, 0);

    int real = (a * c + b * d) / denom;
    int imag = (b * c - a * d) / denom;
    return Complexo(real, imag);
}

std::ostream &operator<<(std::ostream &out, const Complexo &c)
{
    out << c.getReal();
    if (c.getImaginario() >= 0)
        out << " +" << c.getImaginario() << "i";
    else
        out << " " << c.getImaginario() << "i";
    return out;
}

int main()
{
    int c1, c2, r1, r2;
    char i;
    char op;
    Complexo complexo1, complexo2, resultado;

    while (std::cin >> c1 >> r1 >> i >> op >> c2 >> r2 >> i)
    {
        complexo1 = Complexo(c1, r1);
        complexo2 = Complexo(c2, r2);

        switch (op)
        {
        case '+':
            resultado = complexo1 + complexo2;
            break;
        case '-':
            resultado = complexo1 - complexo2;
            break;
        case '*':
            resultado = complexo1 * complexo2;
            break;
        case '/':
            resultado = complexo1 / complexo2;
            break;
        default:
            continue;
        }
        std::cout << resultado << std::endl;
    }
    return 0;
}
