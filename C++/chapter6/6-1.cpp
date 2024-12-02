#include <iostream>

int main()
{
    char a, b;
    std::cin >> a >> b;
    std::cout << "문자" << a << "의 아스키코드값은 " << static_cast<int>(a) << "\n";
    std::cout << "문자" << b << "의 아스키코드값은 " << static_cast<int>(b) << "\n";
}