#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    for (size_t i = 0; i < c; i++)
    {
        for (size_t j = a; j < b; j++)
        {
            std::cout << j;
        }
        std::cout << "\n";
    }
}