#include <iostream>

int main()
{
    char arr[5];
    char arr1[5];
    char ch;
    std::cin>>ch;
    for(size_t i = 0; i < 5; i ++){
        arr[i] = ch +i;
        arr1[i] = ch - i;
    }
    for(size_t i = 0; i < 5; i ++){
        std::cout<<arr[i];
    }
    std::cout<<"\n";
    for(size_t i = 0; i < 5; i ++){
        std::cout<<arr1[i];
    }
}