#include <iostream>
#include <cmath>

const int MAX_SIZE=100;

void input(int arr[], std::size_t size)
{
    for(int i=0; i<size; ++i)
    {
        std::cin>>arr[i];
    }
}

int polynomial (int arr[], std::size_t size, int x)
{
    int res=0;
    for(int i=0; i<size; ++i)
    {
        res+=arr[i]*pow(x,size-1-i);
    }

    return res;
}

int main()
{
    int x;
    int n;
    int arr[MAX_SIZE];
    std::cout<<"Enter x: ";
    std::cin>>x;
    std::cout<<"Enter the number of the elements: ";
    std::cin>>n;
    input(arr, n);
    std::cout<<"The result of the polynomial is: "<<polynomial(arr,n,x);

    return 0;
}

