#include <iostream>
int main()
{
    int M;
    std::cin >> M;
    std::string meses[] = 
    {
        "JANEIRO", "FEVEREIRO", "MARCO", "ABRIL", "MAIO", "JUNHO",
        "JULHO", "AGOSTO", "SETEMBRO", "OUTUBRO", "NOVEMBRO", "DEZEMBRO"
    };
    if (M >= 1 && M <= 12) {
        std::cout << meses[M - 1] << std::endl;
    } else {
        std::cout << "MES INVALIDO" << std::endl;
    }
}