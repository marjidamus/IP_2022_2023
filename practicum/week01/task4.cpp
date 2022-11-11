#include <iostream>

const int diff='a' - 'A';
int main()
{
    char c;
    std::cout<<"Enter a capital letter: ";
    std::cin>>c;

    c+=diff;
    std::cout<<"Lower case: "<<c;
    return 0;
}