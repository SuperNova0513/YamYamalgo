#include <iostream>

int main()
{
    int num;
    std::cin>>num;
    for(int i =0; i < 6; i++){
        if(i<3){
            for(int j =0; j < 6; j++){
                std::cout<<num;
            }
            std::cout<<"\n";
        }
        else{
            for(int j =0; j <3; j++){
                std::cout<<num;
            }
            std::cout<<"\n";
        }
    }
}