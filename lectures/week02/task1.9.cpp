#include <iostream>

int main()
{
    int n;
    int sum=0;
    std::cout<<"Enter n: ";
    std::cin>>n;
    for(int i=2; i<n; i+=3)
    {
        sum+=i;
    }
    std::cout<<sum;
    
    return 0;
}