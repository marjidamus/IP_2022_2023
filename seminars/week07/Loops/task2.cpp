#include <iostream>

void print2Del(int a, int b)
{
    int z;
    int y;
    for (int i = a; i <= b; ++i)
    {
        for (int j = 2; j < i - 1; ++j)
        {
            z = j + 1;
            if (z * j == i)
            {
                std::cout << i;
            }
        }
    }
}

int main()
{
    int a;
    int b;
    do
    {
        std::cout << "Enter a: ";
        std::cin >> a;
        std::cout << "Enter b: ";
        std::cin>>b;
    } while (a < 1 || b < 1 || a==b || a>b);
    print2Del(a,b);
}

