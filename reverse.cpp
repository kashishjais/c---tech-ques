#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n],b[n] ,i;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        int j=0;
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        std::cout<<b[i];
    }
}
