#include <iostream>
int main()
{
    int tempo;
    std::string universidade;

    std::cout << "Onde voce estuda: " ;
    std::cin >> universidade;
    std::cout << "Quanto tempo: " ;
    std::cin >> tempo;
    std::cout << "Voce estuda na " << universidade << " ha " << tempo << " anos." << std::endl;
    return 0;
}