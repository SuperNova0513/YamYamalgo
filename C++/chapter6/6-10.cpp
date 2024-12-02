#include <iostream>

int main()
{
    char arr[3];
    for (int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
    }
    if (arr[0] > arr[1] && arr[0] > arr[2])
        std::cout << "¿Ç´Ù" << arr[0];
    else
        std::cout << "¿ÇÁö¾ÊÀ½";
}