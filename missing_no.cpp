// find missing number in an array like 1,2,3,5,6...
#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i;
    std::cout<<" enter size of array ";
    std::cin>>n;
    
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    int t=n*(n+1)/2;
    for(i=0;i<n;i++)
    {
        t-=a[i];

    }
    std::cout<<t;
}