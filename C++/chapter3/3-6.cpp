#include <iostream>

int main()
{
    int num,num1;
    std::cin>>num>>num1;
    int num2 = num*num1;
    if(num2 > 30 && num2 < 50)
        std::cout<<"������ ������";
    else if(num2<=30)
        std::cout<<"���� ������";
    else    
        std::cout<<"ū ������";

}