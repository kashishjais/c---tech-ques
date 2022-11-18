#include<iostream> 
#include<conio.h>
int main()
{
    int n ,i,j,f=1;
    std::cout<<" enter number ";
    std::cin>>n;
    
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    std::cout<<"factorial "<<f;
}


