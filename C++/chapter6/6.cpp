#include <iostream>

int main()
{
    char ch;
    std::cin >> ch;

    if(ch>=97 && ch <=122)
        std::cout<<"�ҹ����Դϴ�.";
    else if(ch>=65 && ch <=90)
        std::cout<<"�빮���Դϴ�.";
}