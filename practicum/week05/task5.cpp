#include <iostream>
#include <cmath>

const double EPS = 0.00001;
const int MAX_SIZE=100;
void input(double arr[], std::size_t size)
{
    for(int i=0; i<size; ++i)
    {
        std::cin>>arr[i];
    }
}

void print(double arr[], std::size_t size)
{
    for(int i=0; i<size; ++i)
    {
        std::cout<<arr[i];
    }
}

double findMin(double arr[], std::size_t size)
{
    double min=arr[0];
    for(int i=0; i<size; ++i)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int cntOccur(double arr[], std::size_t size)
{
    double min=findMin(arr,size);
    int cnt=0;
    for(int i=0; i<size; ++i)
    {
        if(fabs(arr[i]-min)<EPS)
        {
            cnt++;
        }
    }

    return cnt;
}
int main()
{
    int n;
    double arr[MAX_SIZE];
    std::cout<<"Enter the number of the elements: ";
    std::cin>>n;

    input(arr,n);
    std::cout<<"The occurences of the smallest element are: "<<cntOccur(arr,n);

    return 0;
}