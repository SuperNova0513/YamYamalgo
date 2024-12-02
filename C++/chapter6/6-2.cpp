#include <iostream>

int main()
{
    char ch;
    std::cin >> ch;
    for(char i = ch; i>='a'; i--){
        std::cout<<i;
    }
}