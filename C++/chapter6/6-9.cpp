#include <iostream>

int arr[6] = {5, 4, 1, 2, 7, 8};
int main()
{

    int num;
    std::cin >> num;
    for (size_t i = 0; i < num; i++)
    {
        for (int j = 5; j >= 0; j--)
        {
            std::cout << arr[j] << " ";
        }
        std::cout <<"\n";
    }
}