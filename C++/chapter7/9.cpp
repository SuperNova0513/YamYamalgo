#include <iostream>

int main()
{


    int arr[5];
    for(int i =0; i < 5; i++){
        std::cin >> arr[i];
    }

    for(int j = 0; j  <5; j++){
        if(arr[j]>= 70)
            std::cout<<j<<"�� �����"<<arr[j]<<"��PASS\n";
        else if(arr[j]>=50 && arr[j] <70)
            std::cout<<j<<"�� �����"<<arr[j]<<"��RESTART\n";
        else
            std::cout<<j<<"�� �����"<<arr[j]<<"��FAIL\n";
    }
}