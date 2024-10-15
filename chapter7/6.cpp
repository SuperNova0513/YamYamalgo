#include <iostream>
#include <string>

int main()
{

    std::string arr[4];
    int len_arr[4] = {
        0,
    };
    int max = len_arr[0];
    int min = len_arr[0];
    int max_num, min_num = 0;
    for (size_t i = 0; i < 4; i++)
    {
        std::cin >> arr[i];
    }
    for (size_t i = 0; i < 4; i++)
    {
        len_arr[i] = arr[i].length();
        if (max < len_arr[i])
        {
            max = len_arr[i];
            max_num = i;
        }
        if (min > len_arr[i])
        {
            max = len_arr[i];
            min_num = i;
        }
    }

    std::cout << "긴문장: " << max_num << std::endl;
    std::cout << "짧은문장: " << min_num;
}