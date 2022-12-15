#include <iostream>

const int MAX_SIZE = 100;

void input(int arr[], std::size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
}

void print(int arr[], std::size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
}

void pushZerosToEnd(int arr[], std::size_t size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while (count < size)
    {
        arr[count++] = 0;
    }
        
}

void changeArray(int arr[], std::size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == arr[i + 1])
        {
            arr[i] *= 2;
            arr[i + 1] = 0;
        }
    }

    pushZerosToEnd(arr, size);
}

int main()
{
    int n;
    int arr[MAX_SIZE];
    std::cout << "Enter the number of the elements: ";
    std::cin >> n;

    input(arr, n);
    changeArray(arr, n);
    print(arr, n);

    return 0;
}

