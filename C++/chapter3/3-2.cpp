#include <iostream>

int main()
{
    int num;
    std::cin>>num;
    for(size_t i = 0; i < 3; i ++){
        for(size_t j = 0; j < 3; j++){
            std::cout<<num;
        }
        std::cout<<"\n";
        num++;
    }
}