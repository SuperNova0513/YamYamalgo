#include <iostream>

int main()
{
    int arr[6] ={0};
    int a, b;
    std::cin >>a >> b;
    
    for(size_t i = 0; a<=b; i++){
        arr[i] = a++;
    }
      for(size_t i = 0; arr[i]!=0; i++){
        std::cout <<arr[i];
        
    }
}