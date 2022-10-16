#include <iostream>
#include <cmath>

int main()
{
    int area1;
    int area2;
    int h;
    int a1;
    int a2;
    int b2;
    int c2;
    int p;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> h;
    std::cout << "Enter the length of the side accross the height: ";
    std::cin >> a1;
    area1 = (h * a1) / 2;
    std::cout << "The area of this triangle is: " << area1 << std::endl;
    std::cout << "Enter the length of the first side of the triangle: ";
    std::cin >> a2;
    std::cout << "Enter the length of the second side of the triangle: ";
    std::cin >> b2;
    std::cout << "Enter the length of the third side of the triangle: ";
    std::cin >> c2;
    if ((a2 + b2 > c2) && (a2 + c2 > b2) && (c2 + b2 > a2))
    {
        p = (a2 + b2 + c2) / 2;
        area2 = sqrt(p * (p - a2) * (p - b2) * (p - c2));
        std::cout << "The area of this triangle is: " << area2 << std::endl;
    }
    else
    {
        std::cout<<"The triangle does not exist";
    }

    
    return 0;
}