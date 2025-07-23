#include <iostream>
#include <cmath>

class Racional {
private:
    int numerador;
    int denominador;

public:
    Racional(int n = 0, int d = 1) {
        numerador = n;
        denominador = d;
    }

    void negativo() {
        numerador *= -1;
    }

    void adicao(Racional r) {
        numerador = numerador * r.denominador + denominador * r.numerador;
        denominador = denominador * r.denominador;
    }

    void subtracao(Racional r) {
        r.negativo();
        adicao(r);
    }

    void multiplicacao(Racional r) {
        numerador *= r.numerador;
        denominador *= r.denominador;
    }

    void divisao(Racional r) {
        numerador *= r.denominador;
        denominador *= r.numerador;
    }

    void simplifica() {
        int a = abs(numerador);
        int b = abs(denominador);
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        numerador /= a;
        denominador /= a;
    }

    void imprime() {
        std::cout << numerador << " " << denominador << '\n';
    }
};

int main() {
    int n1, d1, n2, d2;
    char op;

    while (std::cin >> n1 >> d1 >> op >> n2 >> d2) {
        Racional q(n1, d1);
        Racional r(n2, d2);

        switch (op) {
            case '+':
                q.adicao(r);
                break;
            case '-':
                q.subtracao(r);
                break;
            case '*':
                q.multiplicacao(r);
                break;
            case '/':
                q.divisao(r);
                break;
        }

        q.simplifica();
        q.imprime();
    }

    return 0;
}
