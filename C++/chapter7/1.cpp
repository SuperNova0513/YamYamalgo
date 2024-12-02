#include <iostream>

int main(){
    int arr[5] = {3,5,2,4,1};
    int arr2d[3][2] = {9,8,7,1,3,4};

    int num;
    std::cin >> num;
    if(num % 2 == 0){
        for(size_t i =0; i < 3; i++){
            for(size_t j = 0; j < 2; j++){
                std::cout<< arr2d[i][j];
            }
            std::cout<<std::endl;
        }
    }
}