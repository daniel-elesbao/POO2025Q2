#include <iostream>
int abaixoDaMedia(float notas[][3], int N)
{
    float soma1 = 0, soma2 = 0, soma3 = 0;
    int abaixo1 = 0, abaixo2 = 0, abaixo3 = 0;
    for (int i = 0; i < N; i++)
    {
        soma1 += notas[i][0];
        soma2 += notas[i][1];
        soma3 += notas[i][2];
    }
    float media1 = soma1 / N, media2 = soma2 / N, media3 = soma3 / N;
    for (int i = 0; i < N; i++)
    {
        if (notas[i][0] < media1)
        {
            abaixo1++;
        }
        if (notas[i][1] < media2)
        {
            abaixo2++;
        }
        if (notas[i][2] < media3)
        {            
            abaixo3++;
        }
    }
    std::cout << "Na 1a. atividade " << abaixo1 
              << " alunos tiveram nota abaixo da media." << std::endl;
    std::cout << "Na 2a. atividade " << abaixo2 
              << " alunos tiveram nota abaixo da media." << std::endl;
    std::cout << "Na 3a. atividade " << abaixo3
              << " alunos tiveram nota abaixo da media." << std::endl;
    return 0;
}

int main()
{
    int N;
    std::cin >> N;
    float notas[N][3];
    for (int i = 0; i < N; i++)
    {
        std::cin >> notas[i][0] >> notas[i][1] >> notas[i][2];
    }
    abaixoDaMedia(notas, N);
    return 0;
}