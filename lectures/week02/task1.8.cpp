#include <iostream>



int main()
{
    int x;
    int k;
    int dig;
    std::cout<<"Enter x: ";
    std::cin>>x;
    std::cout<<"Enter k: ";
    std::cin>>k;
    for(int i=0; i<k; ++i)
    {
        dig=x%10;
        x/=10;

    }
    std::cout<<dig;
    return 0;
}