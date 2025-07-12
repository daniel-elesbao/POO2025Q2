#include <iostream>
int main()
{
    int D, M, A;
    std::cin >> D >> M >> A;
    if (D < 1 || D > 31 || M < 1 || M > 12 || A < 1583) {
        std::cout << "DATA INVALIDA" << std::endl;
        return 0;
    }
    if ((M == 2 && D > 29) || (M == 2 && D == 29 && !(A % 4 == 0 && (A % 100 != 0 || A % 400 == 0))) ||
        ((M == 4 || M == 6 || M == 9 || M == 11) && D > 30)) {
        std::cout << "DATA INVALIDA" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "DATA VALIDA" << std::endl;
        return 0;
    }
   return 0;
}