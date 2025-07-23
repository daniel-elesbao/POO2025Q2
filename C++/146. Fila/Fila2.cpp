#include <iostream>

class Fila {
private:
    int *itens;
    int tamanho;
    int inicio;
    int fim;
    int count;

public:
    Fila(int N) {
        this->tamanho = N;
        this->itens = new int[N];
        this->inicio = 0;
        this->fim = 0;
        this->count = 0;
    }

    ~Fila() {
        delete[] this->itens;
    }

    bool cheia() {
        return count == tamanho;
    }

    bool vazia() {
        return count == 0;
    }

    void inserir(int valor) {
        if (cheia()) return;

        itens[fim] = valor;
        fim = (fim + 1) % tamanho;
        count++;
    }

    void excluir() {
        if (vazia()) return;

        std::cout << itens[inicio] << '\n';
        inicio = (inicio + 1) % tamanho;
        count--;

        if (count == 0) {
            // Reinicia a fila
            inicio = 0;
            fim = 0;
        }
    }
};

int main() {
    int N, V;
    char O;
    std::cin >> N;
    Fila fila(N);

    while (std::cin >> O) {
        if (O == 'E') {
            std::cin >> V;
            fila.inserir(V);
        } else if (O == 'D') {
            fila.excluir();
        }
    }

    return 0;
}
