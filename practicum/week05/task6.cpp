#include <iostream>

const int MAX_SIZE=100;
void input(int arr[], std::size_t size)
{
    for(int i=0; i<size; ++i)
    {
        std::cin>>arr[i];
    }
}

void findOccur(int arr[], std::size_t size)
{
    int cnt=0;
    int maxCnt=0;
    int maxEl=arr[0];
    for(int i=0; i<size; ++i)
    {
        for(int j=i; j<size; ++j)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(maxCnt<cnt)
        {
            maxCnt=cnt;
            maxEl=arr[i];
        }
        cnt=0;

    }

    std::cout<<"Most oocurences of the number: "<<maxEl<<std::endl;
    std::cout<<"Number of most occurences: "<<maxCnt;
}

int main()
{
    int n;
    int arr[MAX_SIZE];
    std::cout<<"Enter the number of the elements: ";
    std::cin>>n;

    input(arr,n);
    findOccur(arr,n);

    return 0;
}
