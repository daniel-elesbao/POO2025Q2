#include <iostream>

long mdc(long a, long b) {
    return b == 0 ? a : mdc(b, a % b);
}

struct tRacional
{
    long numerador;
    long denominador;
};

struct tRacional racional(long numerador, long denominador)
{
    return {numerador, denominador};
}

struct tRacional negativo(struct tRacional r2)
{
    return racional(-r2.numerador, r2.denominador);
}

struct tRacional reduz(struct tRacional r)
{
    long dencom = mdc(abs(r.numerador), abs(r.denominador));
    long num = r.numerador / dencom;
    long den = r.denominador / dencom;
    if (den < 0)
    {
        num = -num;
        den = -den;
    }
    return racional(num, den);
}

struct tRacional soma(struct tRacional r1, struct tRacional r2)
{
    return reduz(racional(r1.numerador * r2.denominador + r2.numerador * r1.denominador, r1.denominador * r2.denominador));
}

struct tRacional mult(struct tRacional r1, struct tRacional r2)
{
    return reduz(racional(r1.numerador * r2.numerador, r1.denominador * r2.denominador));
}

struct tRacional div(struct tRacional r1, struct tRacional r2)
{
    return reduz(racional(r1.numerador * r2.denominador, r1.denominador * r2.numerador));
}

int main()
{
    tRacional r1_input, r2_input;
    char op;

    while (std::cin >> r1_input.numerador >> r1_input.denominador >> op >> r2_input.numerador >> r2_input.denominador)
    {
        tRacional r1 = racional(r1_input.numerador, r1_input.denominador);
        tRacional r2 = racional(r2_input.numerador, r2_input.denominador);
        tRacional resultado;

        if (op == '+')
        {
            resultado = soma(r1, r2);
        }
        else if (op == '-')
        {
            resultado = soma(r1, negativo(r2));
        }
        else if (op == '*')
        {
            resultado = mult(r1, r2);
        }
        else if (op == '/')
        {
            resultado = div(r1, r2);
        }

        std::cout << resultado.numerador << " " << resultado.denominador << std::endl;
    }
    return 0;
}