#include <iostream>

void del(int p)
{
    std::cout << std::boolalpha << (p % 4 == 0 || p % 7 == 0) ? true : false;
}

void equ(int a, int b, int c)
{
    int deskr = b * b - 4 * a * c;
    std::cout << std::boolalpha << (deskr < 0) ? true : false;
}



int main()
{
    int p;
    std::cout<<"Enter p: ";
    std::cin>>p;
    del(p);

    int a, b, c;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;
    equ(a, b, c);



    return 0;
}