#include <iostream>
int main()
{
    int tempo;
    std::string universidade;

    std::cin >> universidade >> tempo;
    std::cout << "Voce estuda na " << universidade << " ha " << tempo << " anos." << std::endl;
    return 0;
}
// Compile with: g++ -o Universidade Universidade.cpp
// Run with: ./Universidade