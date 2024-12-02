#include <iostream>

int main()
{
    char ch;
    std::cin >> ch;

    if(ch>=97 && ch <=122)
        std::cout<<"소문자입니다.";
    else if(ch>=65 && ch <=90)
        std::cout<<"대문자입니다.";
}