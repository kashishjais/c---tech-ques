// move negative elements to one side in an array
#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,j=0;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            a[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }
}
