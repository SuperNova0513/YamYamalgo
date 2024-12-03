#include <iostream>

int main()
{

    int arr[3][3] = {3, 4, 1, 2, 1, 4, 3, 3, 0};
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
    }

    std::cout << "Â¦¼ö :" << even_count<<std::endl;
    std::cout << "È¦¼ö :" << odd_count;
}