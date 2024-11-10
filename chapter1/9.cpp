#include <iostream>

void stepadd(int arr[], int size);
int main(){

    int arr[6];
    for(size_t i = 0; i < 6; i++){
        std::cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    stepadd(arr, size);
}
void stepadd(int arr[], int size){
    for(size_t i = 1; i < size; i++){
        arr[i] = arr[i] + arr[i-1];
    }
     for(size_t i = 0; i < 6; i++){
        std::cout<<arr[i]<<" ";
    }
}
