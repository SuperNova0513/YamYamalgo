#include <iostream>

int main(){

    int a,b,maxi,mini,c;
    std::cin >> a >> b;
    maxi = std::max(a,b);
    mini = std::min(a,b);

    c = maxi - mini;
    if(c % 2 == 0){
        std::cout << "¦�����";
    }
    else
        std::cout<<"����Ѵ�";

}