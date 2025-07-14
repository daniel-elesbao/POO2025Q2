#include <iostream>
int datas(int D, int M, int A)
{
    if (D < 1 || D > 31 || M < 1 || M > 12 || A < 1582 || 
        (A == 1582 && M < 10) || (A == 1582 && M == 10 && D < 15))
    {
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
}

int main()
{
    long N;
    int D, M, A;
    std::cin >> N;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> D >> M >> A;
        datas(D, M, A);
    }
    return 0;
}