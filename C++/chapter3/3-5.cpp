#include <iostream>

int main()
{
    int num, num1, num2;
    std::cin>>num >> num1 >> num2;
    if(num > num1 && num > num2)
        std::cout<<"MAX�߰�";
    else
        std::cout<<"MAX�ƴ�";
}