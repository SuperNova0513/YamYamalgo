#include <iostream>

int main()
{

    int arr[3][3] ={0};

    int num;
    std::cin >> num;

    for(int i =0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = num++;
        }
    }
      for(int i =0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}