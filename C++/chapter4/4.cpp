#include <iostream>

int main()
{
    int arr[4]={0};
    int num;
    std::cin>>num;
    for(size_t i =0; i < 4; i++)
        arr[i] = num+5;
    for(size_t i =0; i < 4; i++)    
        std::cout<<arr[i];
}