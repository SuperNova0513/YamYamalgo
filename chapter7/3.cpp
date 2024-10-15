#include <iostream>
char path[10];
char arr[4] = {'B', 'G', 'T', 'K'};
void aespa(int);
int level1;
int main()
{

    std::cin >> level1;

    aespa(0);
}
void aespa(int level)
{
    if (level == level1)
    {
        std::cout << path << std::endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        path[level] = arr[i];
        aespa(level + 1);
        path[level] = '0';
    }
}