#include <iostream>

int main()
{

    int num;
    std::cin >> num;

    for(size_t i = 0; i < num; i++){
        for(size_t j = 1; j < 6; j++){
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
        
}