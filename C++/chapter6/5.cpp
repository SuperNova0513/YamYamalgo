#include <iostream>

int main()
{

    char arr[4] = {'B','T','K','A'};
    int num;
    std::cin >> num;
    for(size_t j = 0; j < num; j++){
        for(size_t i = 0; i < sizeof(arr)/sizeof(char); i++){
            std::cout << arr[i] << " ";
        }
        std::cout<<"\n";
    }

}