#include <iostream>

int main()
{
    int arr[4];
    int result = 0;
    for(size_t i = 0; i<4; i++){
        std::cin>>arr[i];
        result += arr[i];
    }
    std::cout<<result;
    
       

}