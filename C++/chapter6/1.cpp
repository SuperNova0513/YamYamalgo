#include <iostream>
char a, b;
void ABC(){
     std::cin >> a >> b;
}

void output(char a, char b){
    std::cout << a;
    std::cout << b;
}
int main()
{
  ABC();
  output(a,b);
}