#include <iostream>
#include <iomanip>
int main()
{
    int A, B;
    float C;
    std::cin >> A >> B;
    C = static_cast<float>(A) / static_cast<float>(B);
    std::cout << std::fixed << std::setprecision(4);
    std::cout << C << std::endl;
    return 0;
}