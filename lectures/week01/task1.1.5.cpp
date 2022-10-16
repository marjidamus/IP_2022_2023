#include <iostream>

int main()
{
    double x;
    double y;
    if(x>0 && y>0)
    {
        std::cout<<"First quadrant"<<std::endl;
    }
    else if(x<0 && y>0)
    {
        std::cout<<"Second quadrant"<<std::endl;
    }
    else if(x<0 && y<0)
    {
        std::cout<<"Third quadrant"<<std::endl;
    }
    else if(x<0 && y<0)
    {
        std::cout<<"Forth quadrant"<<std::endl;
    }
    else if(x==0 && y!=0)
    {
        std::cout<<"On the y axis"<<std::endl;
    }
    else if(x!=0 && y==0)
    {
        std::cout<<"On the x axis"<<std::endl;
    }
    else if(x==0 && y==0) 
    {
        std::cout<<"In the center"<<std::endl;
    }
    return 0;
}