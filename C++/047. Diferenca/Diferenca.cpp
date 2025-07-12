#include <iostream>
int main()
{
    long long A, B;
    std::cin >> A >> B;
    if (A != B) {
        std::cout << "true" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "false" << std::endl;
        return 0;
    }
    return 0;
}