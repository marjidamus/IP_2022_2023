#include <iostream>

int main()
{
    int years;
    int days;
    int hours;
    int mins;
    int secs;
    std::cout<<"Enter the years ";
    std::cin>>years;
    days=years*365;
    hours=days*24;
    mins=hours*60;
    secs=mins*60;
    std::cout<<"Days: "<<days<<std::endl;
    std::cout<<"Hours: "<<hours<<std::endl;
    std::cout<<"Mins: "<<mins<<std::endl;
    std::cout<<"Seconds: "<<secs<<std::endl;
    return 0;
}