#include <iostream>
#include <cstring>

const char *arr[11] = {"B5", "B4", "B3", "B2", "B1", "1F", "2F", "3F", "4F", "5F", "6F"};
int main()
{

    int men = 5;
    char up_down[10];
    for (size_t i = 0; i < 5; i++)
    {
        std::cin >> up_down;
        if (!strcmp(up_down, "up"))
        {
            men++;
        }
        else
            men--;
    }
    std::cout << arr[men];
}