#include <iostream>

const int MAX_SIZE=100;

int main()
{
    int n;
    int arr[MAX_SIZE];
    int sum=0;
    int avrg;
    std::cout<<"Enter the number of the elements of the array: ";
    std::cin>>n;

    for(int i=0; i<n; ++i)
    {
        std::cin>>arr[i];
    }

    for(int i=0; i<n; ++i)
    {
        sum+=arr[i];
    }

    avrg=sum/n;
    std::cout<<avrg;
    return 0;
}