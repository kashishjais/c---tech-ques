//cyclically rotate an array by one
#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,j;
    std::cout<<" enter size of array ";
    std::cin>>n;
    
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    int x=a[n-1];
    for(i=n-1;i>=0;i--)
    {
        a[i]=a[i-1];
        a[0]=x;
    }
    for(i=0;i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }
}

    