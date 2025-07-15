#include <iostream>
int main()
{
    int N, maior, segundoMaior = 0;
    std::cin >> N;
    int* notas = new int[N];
    while (N!= 0)
    {
        for (int i = 0; i < N; i++)
        {
            std::cin >> notas[i];
        }
        maior = notas[0];
        segundoMaior = 0;
        for (int i = 1; i < N; i++)
        {
            if (notas[i] > maior)
            {
                segundoMaior = maior;
                maior = notas[i];
            }
            else if (notas[i] > segundoMaior && notas[i] < maior)
            {
                segundoMaior = notas[i];
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (notas[i] == segundoMaior)
            {
                std::cout << i + 1 << std::endl;
            }
        }
        std::cin >> N;
        notas = new int[N];
    }
    return 0;
}