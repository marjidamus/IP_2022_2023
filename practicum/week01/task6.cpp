#include <iostream>

const int longevity=3;

int main()
{
    int hour;
    int min;
    int songs;

    int endHour;
    int endMin;

    std::cout<<"Enter the starting hour: ";
    std::cin>>hour;
    std::cout<<"Enter the starting minutes: ";
    std::cin>>min;
    std::cout<<"Enter the number of the songs: ";
    std::cin>>songs;

    endMin=(min+(songs*longevity))%60;
    endHour=hour+ ((min+(songs*longevity)) /60);
    std::cout<<"Preslava's performance will end at: 0"<<endHour<<":"<<endMin;
    return 0;
}