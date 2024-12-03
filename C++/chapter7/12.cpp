#include <iostream>

void BBQ(int);
int main()
{
    int num;
    std::cin >> num;
    if(num == 3 || num == 5 || num == 7){
        for(int i = 1; i <= 10; i++){
            std::cout<<i;
        }
    }
    else if(num == 0 || num ==8){
          for(int i = 10; i >= 1; i--){
            std::cout<<i;
        }
    }
    else
        BBQ(num);
      
}
void BBQ(int num){
    if(num>0 && num < 5)
        std::cout<<"초기값";
    else if(num >6 && num < 10)
        std::cout<<"중간값";
    else   
        std::cout<<"알수없는값";
}