#include <iostream>


// The sizeof(char) is: 1 bytes
// The sizeof(short) is: 2 bytes
// The sizeof(int) is: 4 bytes
// The sizeof(long) is: 8 bytes
// The sizeof(long long) is: 8 bytes
// The sizeof(float) is: 4 bytes
// The sizeof(double) is: 8 bytes
// The sizeof(long double) is: 16 bytes
// The sizeof(bool) is: 1 bytes
int main()
{
    std::cout<<"The size of char is: "<<sizeof(char)<<std::endl;
    std::cout<<"The size of short is: "<<sizeof(short)<<std::endl;
    std::cout<<"The size of int is: "<<sizeof(int)<<std::endl;
    std::cout<<"The size of long is: "<<sizeof(long)<<std::endl;
    std::cout<<"The size of long long is: "<<sizeof(long long)<<std::endl;
    std::cout<<"The size of float is: "<<sizeof(float)<<std::endl;
    std::cout<<"The size of double is: "<<sizeof(double)<<std::endl;
    std::cout<<"The size of long double is: "<<sizeof(long double)<<std::endl;
    std::cout<<"The size of bool is: "<<sizeof(bool)<<std::endl;
    return 0;
}