#include <iostream>

int main()
{
    int arr[5];

    for(size_t i = 0; i < 5; i++)
    {
        std::cin>>arr[i];
    }
     for(size_t i = 0; i < 5; i++)
    {
        std::cout<<arr[i]<<" ";
    }
}