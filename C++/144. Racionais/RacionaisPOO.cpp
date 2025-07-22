#include <iostream>
#include <cmath>

class Racional
{
    private:
            int numerador, denominador;
    public:
            Racional();
            Racional(int, int);
            void setNumerador(int);
            void setDenominador(int);
            int getNumerador();
            int getDenominador();

            operator double();
            operator float();

            void operator=(int);

            Racional operator++();
            Racional operator++(int);

            Racional operator-();
            Racional operator+(Racional);
            Racional operator-(Racional);
            Racional operator*(Racional);
            Racional operator/(Racional);

            Racional simplifica();
            int mdc(int, int);
};

Racional::Racional()
{

}

Racional::Racional(int numerador, int denominador)
{
    this->setNumerador(numerador);
    this->setDenominador(denominador);
}

void Racional::setNumerador(int numerador)
{
    this->numerador = numerador;
}

void Racional::setDenominador(int denominador)
{
    this->denominador = denominador;
}

int Racional::getNumerador()
{
    return this->numerador;
}

int Racional::getDenominador()
{
    return this->denominador;
}

Racional Racional::operator-()
{
    Racional r;
    r.setNumerador(-this->getNumerador());
    r.setDenominador(this->getDenominador());
    return r;
}

Racional Racional::operator+(Racional q)
{
    Racional r;
    r.setNumerador(this->getNumerador() * q.getDenominador() + this->getDenominador() * q.getNumerador());
    r.setDenominador(this->getDenominador() * q.getDenominador());
    return r;
}

Racional Racional::operator-(Racional q)
{
    return (*this) + (-q);
}

Racional Racional::operator*(Racional q)
{
    Racional r;
    r.setNumerador(this->getNumerador() * q.getNumerador());
    r.setDenominador(this->getDenominador() * q.getDenominador());
    return r;
}

Racional Racional::operator/(Racional q)
{
    Racional r;
    r.setNumerador(this->getNumerador() * q.getDenominador());
    r.setDenominador(this->getDenominador() * q.getNumerador());
    return r;
}

Racional Racional::operator++() // pre
{
    *this = (*this) + Racional(1,1);
    return *this;
}

Racional Racional::operator++(int) //pos
{
    Racional r = *this;
    ++(*this);
    return r;
}

void Racional::operator=(int valor)
{
    this->setNumerador(valor);
    this->setDenominador(1);
}

Racional::operator double()
{
    return this->getNumerador() /(double)this->getDenominador();
}

Racional::operator float()
{
    return this->getNumerador() / (float)this->getDenominador();
}


Racional Racional::simplifica()
{
    int maxDiv = this->mdc(abs(this->getNumerador()), abs(this->getDenominador()));
    Racional r;
    r.setNumerador(this->getNumerador() / maxDiv);
    r.setDenominador(this->getDenominador() / maxDiv);
    return r;
}

int Racional::mdc(int a, int b)
{
    int resto;
    do
    {
        resto = a % b;
        a = b;
        b = resto;
    }while(resto > 0);
    return a;
}

int main()
{
    int qNum, qDen, rNum, rDen;
    char op;
    Racional q, r, res(1,1), ret(4,3);
    double d;
    float f;

    d = ret;
    f = ret;
    std::cout << "d: " << d << "\n";
    std::cout << "f: " << f << "\n";

    q = 7;
    std::cout << "q: " << q.getNumerador() << " " << q.getDenominador() << "\n";

    ret = ++res;
    std::cout << "res: " << res.getNumerador() << " " << res.getDenominador() << "\n";
    std::cout << "ret: " << ret.getNumerador() << " " << ret.getDenominador() << "\n";
    ret = res++;
    std::cout << "res: " << res.getNumerador() << " " << res.getDenominador() << "\n";
    std::cout << "ret: " << ret.getNumerador() << " " << ret.getDenominador() << "\n";


    while(std::cin >> qNum >> qDen >> op >> rNum >> rDen)
    {
        q.setNumerador(qNum);
        q.setDenominador(qDen);
        r.setNumerador(rNum);
        r.setDenominador(rDen);

        switch(op)
        {
            case '+': res = q + r;
                      break;
            case '-': res = q - r;
                      break;
            case '*': res = q * r;
                      break;
            case '/': res = q / r;
        }
        res = res.simplifica();
        std::cout << res.getNumerador() << " " << res.getDenominador() << std::endl;
    }
    return 0;
}
