#include <iostream>

const int MAX_SIZE = 100;

void input(int arr[], size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
}

int main()
{
    int n;
    int arr[MAX_SIZE];
    int max;
    int secMax;
    std::cout << "Enter the number of the elements: ";
    std::cin >> n;

    input(arr,n);
    max = 0;
    secMax = -1;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > max)
        {
            secMax = max;
            max = arr[i];
        }
        else if (arr[i] > secMax)
        {
            secMax = arr[i];
        }
    }

    std::cout << secMax;

    return 0;
}