#include <iostream>

int isExist(char arr[],int size,int target1, int target2);
int main(){

    char arr[6] = {'G','K','T','P','A','C'}, target1, target2;
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cin>>target1>>target2;
    switch (isExist(arr,size,target1,target2))
    {
    case 0:
        std::cout<<"미발견";
        break;
    case 1:
        std::cout<<"중발견";
        break;
    case 2:
        std::cout<<"대발견";
    default:
        break;
    }
}
int isExist(char arr[],int size,int target1, int target2){
    int count = 0;
    for(size_t i = 0; i < size; i++){
        if(arr[i] == target1 || arr[i] == target2){
            count++;
        }
    }
    return count;
}