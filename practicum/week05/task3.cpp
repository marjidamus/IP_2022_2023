#include <iostream>

const int MAX_SIZE = 100;

void input(int arr[], std::size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
}

void print(const int arr[], std::size_t size)
{
    for(int i=0; i<size; ++i)
    {
        std::cout<<arr[i]<<" ";
    }
}

void movePos(int arr[], std::size_t size, std::size_t pos)
{
    int temp[MAX_SIZE];
    for (int i = 0; i < size; ++i)
    {
        temp[(i + pos)%size] = arr[i];
    }
    print(temp,size);
}



int main()
{
    int n;
    int arr[MAX_SIZE];
    int pos;
    std::cout<<"Enter the number of the elements: ";
    std::cin>>n;

    std::cout<<"Enter the number of positions you want to move: ";
    std::cin>>pos;

    input(arr,n);
    movePos(arr,n,pos);

    return 0;
}