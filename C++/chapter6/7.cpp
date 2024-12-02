#include <iostream>

int main(){
    int num;
    std::cin>>num;
    for(size_t i =0; i < num; i++){
        for(size_t j = 0; j < num; j++){
            std::cout<<"#";
        }
        std::cout<<"\n";
    }
}