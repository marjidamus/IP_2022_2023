#include <iostream>
#include <cmath>

// Тяхната сума
// Абсолютна стойност на тяхната разлика
// Остатъка при деление на първото с второто число
// Цялата част на частното на двете числа
// Частното на n със m
// Частното на n със m, закръглено надолу
// Частното на n със m, закръглено нагоре
// Сборът на n^2 + m^(1/2)

int main()
{
    int n;
    int m;
    std::cout<<"Enter n: ";
    std::cin>>n;
    std::cout<<"Enter m: ";
    std::cin>>m;

    std::cout<<"Sum: "<<m+n<<std::endl;
    std::cout<<"Absolute difference: "<<abs(n-m)<<std::endl;
    std::cout<<"Remainder: "<<n%m<<std::endl;
    std::cout<<"Delim: "<<n/m<<std::endl;
    std::cout<<"Delim n: "<<n*1.0/m<<std::endl;
    std::cout<<"Delim down: "<<floor(n*1.0/m)<<std::endl;
    std::cout<<"Delim up: "<<ceil(n*1.0/m)<<std::endl;
    std::cout<<"Expression: "<<pow(n,2)+ sqrt(m)<<std::endl;

    return 0;
}