#include <iostream>

const int MAX_SIZE = 100;
void input(int arr[], std::size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
}

int findFirst(int arr[], std::size_t size, int num)
{
    int firstOccr;
    for(int i=0; i<size; ++i)
    {
        if(num==arr[i])
        {
            firstOccr=i;
            break;
        }
    }

    return firstOccr;
}

int findLast(int arr[], std::size_t size, int num)
{
    int lastOccur;
    for(int i=size-1; i>=0; --i)
    {
        if(num==arr[i])
        {
            lastOccur=i;
            break;
        }
    }

    return lastOccur;
}

int cntOccur(int arr[], std::size_t size, int num)
{
    int startPos=findFirst(arr,size, num);
    int finPos=findLast(arr,size,num);
    int cnt=0;

    for(int i=startPos; i<=finPos; ++i)
    {
        if(arr[i]==num)
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    int n;
    int num;
    int arr[MAX_SIZE];
    std::cout<<"Enter the number of the elements: ";
    std::cin>>n;

    std::cout<<"Enter the number that is looked for: ";
    std::cin>>num;

    input(arr,n);
    std::cout<<"Start position: "<<findFirst(arr,n,num)+1<<std::endl;
    std::cout<<"Final position: "<<findLast(arr,n, num)+1<<std::endl;
    std::cout<<"Count of occurences: "<<cntOccur(arr,n,num);

    return 0;
}