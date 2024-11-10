#include <iostream>

bool isExist(char arr[],int size, char target);
int main(){
    char arr[4] = {'M','T','K','C'}, target;
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cin >> target;
    if(isExist(arr,size,target)){
        std::cout<<"발견";
    }
    else
        std::cout<<"미발견";

}
bool isExist(char arr[],int size, char target){
    for(size_t i = 0; i<size; i++){
        if(arr[i] == target)
            return true;
        else
            return false;
    }
}