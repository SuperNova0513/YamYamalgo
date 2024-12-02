#include <iostream>

int main()
{
    char input;
    std::cin>>input;
    if(input>=48 && input <=57)
        input -= 43;
    std::cout<<static_cast<int>(input);

}