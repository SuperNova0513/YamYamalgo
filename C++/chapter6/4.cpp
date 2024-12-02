#include <iostream>

int main()
{

    char arr[4] = {'$', '@', 'D', 'A'};
    for(size_t i = 0; i < 4; i++){
        std::cout<<arr[i]<<":"<<static_cast<int>(arr[i])<<"\n";
    }
}