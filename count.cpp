#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,j,k,c=0;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        std::cout<<a[i];
    }
    std::cout<<" enter element to find ";
    
    std::cin>>k;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        c++;
    }
    std::cout<<c;
   
}
