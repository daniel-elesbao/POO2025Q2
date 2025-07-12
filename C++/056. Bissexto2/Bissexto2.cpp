#include <iostream>
int main()
{
    int A;
    std::cin >> A;
    if (A % 400 == 0) {
        std::cout << "ANO BISSEXTO" << std::endl;
        return 0;
    }
    else if (A % 100 == 0) {
        return 0;
    }
    else if (A % 4 == 0) {
        std::cout << "ANO BISSEXTO" << std::endl;
        return 0;
    }
   return 0;
}