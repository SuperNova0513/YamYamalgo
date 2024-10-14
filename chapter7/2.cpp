#include <iostream>
#include <cstring>

int main(){

    char arr[3][11];
    int flag;
    int count = 0;
    for(size_t i = 0; i < 3; i++){
        std::cin >> arr[i];
    }
     for(size_t i = 0; i < 2; i++){
    
       for(size_t j = i+1; j < 3; j++){
        flag = strcmp(arr[j],arr[i]);
         if(flag == 0){
            count++;
         }
       }
}
 if(count == 3 ){
        std::cout<<"WOW";
       }
       else if(count == 1 ){
        std::cout<<"GOOD";
       }
       else if(count == 0)
        std::cout<<"bad";
   
   
}

