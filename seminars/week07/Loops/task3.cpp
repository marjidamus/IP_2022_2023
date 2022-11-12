#include <iostream>

void printNumHello(int n, int m)
{
    int handshake=0;
    int hello=0;
     
    for(int i=0; i<n; ++i)
    {
        handshake+=i;
    }
    for(int i=m+n-1; i>=n; --i)
    {
        hello+=2*i;
    }

    std::cout<<"Hellos: "<<hello<<std::endl;
    std::cout<<"Handshakes: "<<handshake;
    
}

int main()
{
    int n;
    int m;
    std::cout<<"Enter the number of the boys: ";
    std::cin>>n;
    std::cout<<"Enter the number of the girls: ";
    std::cin>>m;
    printNumHello(n,m);
    return 0;
}

