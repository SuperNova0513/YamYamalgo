#include <iostream>

int main()
{
    int arr1[5];
    int arr2[5];
    int a;
    for (size_t i = 0; i < 5; i++)
    {
        std::cin >> a;
        arr1[i] = a;
        arr2[i] = a;
    }
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << arr1[i];
    }
    std::cout << "\n";
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << arr2[i];
    }
}