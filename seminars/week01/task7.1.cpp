#include <iostream>

int main()
{
    int a;
    int b;
    int temp;

    std::cout<<"Enter a: ";
    std::cin>>a;
    std::cout<<"Enter b: ";
    std::cin>>b;

    temp=a;
    a=b;
    b=temp;

    std::cout<<a<<" "<<b;
}