#include <iostream>

int main()
{


    int arr[5];
    for(int i =0; i < 5; i++){
        std::cin >> arr[i];
    }

    for(int j = 0; j  <5; j++){
        if(arr[j]>= 70)
            std::cout<<j<<"번 사람은"<<arr[j]<<"점PASS\n";
        else if(arr[j]>=50 && arr[j] <70)
            std::cout<<j<<"번 사람은"<<arr[j]<<"점RESTART\n";
        else
            std::cout<<j<<"번 사람은"<<arr[j]<<"점FAIL\n";
    }
}