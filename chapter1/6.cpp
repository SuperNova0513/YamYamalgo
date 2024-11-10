#include <iostream>

void isExist(char arr[3][10]);
int main(){
    char arr[3][10];
    for(size_t i = 0; i<3; i++){
        std::cin>>arr[i];
    }
    isExist(arr);

}
void isExist(char arr[3][10]){
     for(size_t i = 0; i < 3; i++){
        for(size_t j =0; arr[i][j] != '\0'; j++)
            if(arr[i][j] == 'M'){
               std::cout<<"M이 존재합니다";
               return;
            }
    }
    std::cout<<"M이 존재하지 않습니다";
}