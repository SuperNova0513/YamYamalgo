#include <iostream>
int path[4];

void aespa(int level, int num, int *arr);
int main()
{

    int num = 0;
    std::cin >> num;
    int *arr;
    arr = (int *)malloc(sizeof(int) * num);
    for (int i = 0; i < num; i++)
    {
        arr[i] = i + 1;
    }
    aespa(0, num, arr);
}
void aespa(int level, int num, int *arr)
{
    if (level == 4)
    {
        for (int i = 0; i < 4; i++)
        {
            std::cout << path[i] << " ";
        }
        std::cout << std::endl;
        return;
    }

    for (int i = 0; i < num; i++)
    {
        path[level] = arr[i];
        aespa(level + 1, num, arr);
        path[level] = '0';
    }
}