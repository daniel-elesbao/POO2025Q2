#include <iostream>
int main()
{
    long long A, B;
    std::cin >> A >> B;
    if (A % B == 0) {
        std::cout << "a divisao de " << A << " por " << B  << " eh exata." << std::endl;
        return 0;
    }
    return 0;
}