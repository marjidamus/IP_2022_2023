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

void moidifyArray(int arr[], std::size_t size)
{
    int prev=arr[0];
    int curr;
    arr[0]*=arr[1];
    for(int i=1; i<size-1; ++i)
    {
        curr=arr[i];
        arr[i]=prev*arr[i+1];
        prev=curr;
    }
    arr[size-1]*=prev;
}

int main()
{
    int n;
    int arr[MAX_SIZE];
    std::cout << "Enter the number of the elements: ";
    std::cin >> n;

    input(arr, n);
    moidifyArray(arr, n);
    print(arr, n);

    return 0;
}

