#include <iostream>

int main()
{
    int a, b, c, maxi, mini;
    std::cin >> a >> b >> c;
    if(a > b && a >> c)
        maxi = a;
    else if(b > a && b > c )
        maxi = b;
    else
        maxi = c;
    
    if(a < b && a < c)
        mini = a;
    else if(b < a && b < c)
        mini = b;
    else    
        mini = c;
    std::cout << "MAX=" << maxi << "\n";
    std::cout << "MIN=" << mini << "\n";
}