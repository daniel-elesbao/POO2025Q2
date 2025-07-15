#include <iostream>
int main()
{
    int Y;
    float H, W;
    char G;
    double alturaHomens[100], pesosMulheres[100];
    double somaAlturaHomens = 0, somaPesoMulheres = 0;
    int homens = 0, mulheres = 0, homensAcima = 0, mulheresAbaixo = 0;
    for (int i = 0; i < 100; ++i)
    {
        std::cin >> Y >> H >> W >> G;
        if (G == 'M')
        {
            alturaHomens[homens++] = H;
            somaAlturaHomens += H;
        }
        else
        {
            pesosMulheres[mulheres++] = W;
            somaPesoMulheres += W;
        }
    }
    if (homens > 0)
    {
        for (int i = 0; i < homens; ++i)
        {
            if (alturaHomens[i] > (somaAlturaHomens / homens))
            {   
                homensAcima++;
            }
        }
        std::cout << "Ha " << homensAcima 
                  << " atletas homens acima da media da altura dos homens." << std::endl;
    }
    else
    {
        std::cout << "Nao houve entrada de atletas homens." << std::endl;
    }

    if (mulheres > 0)
    {
        for (int i = 0; i < mulheres; ++i)
        {
            if (pesosMulheres[i] < (somaPesoMulheres / mulheres))
            {
                mulheresAbaixo++;
            }
        }
        std::cout << "Ha " << mulheresAbaixo 
                  << " atletas mulheres abaixo da media do peso das mulheres." << std::endl;
    }
    else
    {
        std::cout << "Nao houve entrada de atletas mulheres." << std::endl;    
    }
    return 0;
}