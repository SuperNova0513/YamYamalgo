#include <iostream>

int main()
{
    char a, b;
    std::cin >> a >> b;

    if (a < 'a')//�빮���϶� + 32
        a = static_cast<char>(a + 'a' - 'A');
    else if (a >= 'a')//�ҹ����϶� - 32
        a = static_cast<char>(a - 'a' + 'A');

    if (b < 'a')
        b = static_cast<char>(b + 'a' - 'A');
    else if (b >= 'a')
        b = static_cast<char>(b - 'a' + 'A');
    
    std::cout << a << b;
}