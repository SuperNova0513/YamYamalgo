#include <iostream>

int main()
{
    int num,num1;
    std::cin>>num>>num1;
    int num2 = num*num1;
    if(num2 > 30 && num2 < 50)
        std::cout<<"적당한 사이즈";
    else if(num2<=30)
        std::cout<<"작은 사이즈";
    else    
        std::cout<<"큰 사이즈";

}