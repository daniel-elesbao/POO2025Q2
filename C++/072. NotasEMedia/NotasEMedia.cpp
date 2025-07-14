#include <iostream>
#include <iomanip>
int main()
{
    double N[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    double soma = 0;
    double media;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Informe a " << i + 1 << "a. nota:" << std::endl;   
        std::cin >> N[i];
        soma += N[i];
    }
    media = soma / 10;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Sua Media Final dos Trabalhos (NFT) foi " << media << std::endl;
    return 0;
}
