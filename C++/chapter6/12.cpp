#include <iostream>

char flag, a, b, c;

void input();
void output();
void process();
int main()
{
    input();
    process();
    output();
}
void input(){
    std::cin >> a >> b >> c;
}
void process(){
    if(a=='A' && b == 'B', c =='C')
        flag = 1;
}
void output(){
    if(flag == 1)
        std::cout<<"ABC�� ã�Ҵ�";
    else   
        std::cout<<"��ã�Ҵ�.";
}
