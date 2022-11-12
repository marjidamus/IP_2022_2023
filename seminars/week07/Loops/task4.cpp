#include <iostream>

bool isSpecial(int num)
{
    int product = 1;
    int temp = num;

    while (num)
    {
        product *= num % 10;
        num /= 10;
    }
    num = temp;
    if (product!=0 && num % product == 0  )
    {
        return true;
    }

    return false;
}

int cntSpecialNums(int a, int b)
{
    int cnt = 0;
    for (int i = a; i <= b; ++i)
    {
        if (isSpecial(i))
        {
            ++cnt;
        }
        
    }

   return cnt;
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
        std::cin >> b;
    } while (a < 1 || b < a || a > 1000000000 || b > 1000000000 || b - a > 100001);

    std::cout << "The number of special numbers in the interval between " << a << " and " << b << " is: " << cntSpecialNums(a, b);
    return 0;
}