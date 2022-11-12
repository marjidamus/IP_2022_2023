#include <iostream>

const int MAX_SIZE=100;

void input(int arr[], std::size_t size)
{
    for(int i=0; i<size; ++i)
    {
        std::cin>>arr[i];
    }
}

void print(const int arr[], std::size_t size)
{
    for(int i=0; i<size; ++i)
    {
        std::cout<<arr[i]<<" ";
    }
}

void revTemp(int arr[], std::size_t size)
{
    int temp[MAX_SIZE];
    for(int i=0, j=size-1; i<size, j>=0; ++i, --j)
    {
        temp[j]=arr[i];
    }

    print(temp,size);
}

void rev(int arr[], std::size_t size)
{
    for(int i=0; i<size/2; ++i)
    {
        std::swap(arr[i],arr[size-1-i]);
    }
    print(arr,size);
}

int main()
{
    int arr[MAX_SIZE];
    int n;
    std::cout<<"Enter the number of the elements: ";
    std::cin>>n;
    input(arr,n);
    //revTemp(arr,n);
    rev(arr,n);
    return 0;
}