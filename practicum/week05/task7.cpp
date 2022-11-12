#include <iostream>

const int MAX_SIZE = 100;
void input(int arr[], std::size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
}

void findTupples(int arr[], std::size_t size, int sum)
{
    int temp[MAX_SIZE];
    for(int i=0; i<size; ++i)
    {
        for(int j=i; j<size; ++j)
        {
            if(arr[i]+arr[j]==sum)
            {
                std::cout<<"("<<arr[i]<<", "<<arr[j]<<")";

            }
        }
    }
}

int main()
{
    int n;
    int sum;
    int arr[MAX_SIZE];
    std::cout<<"Enter the number of the elements: ";
    std::cin>>n;

    std::cout<<"Enter the sum that is looked for: ";
    std::cin>>sum;

    input(arr,n);
    findTupples(arr,n,sum);
    return 0;
}
