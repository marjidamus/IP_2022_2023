#include <iostream>

int main()
{
    int a;
    int b;

    std::cout<<"Enter a: ";
    std::cin>>a;
    std::cout<<"Enter b: ";
    std::cin>>b;

    a+=b;
    b=a-b;
    a-=b;

    std::cout<<a<<" "<<b;
}