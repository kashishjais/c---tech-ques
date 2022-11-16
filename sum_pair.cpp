//find array element pair with certain sum
#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,j,sum,c=0;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<" enter sum ";
    std::cin>>sum;
    for(i=0;i<n;i++)
    { 
        c=a[i];
        for(j=i+1;j<n;j++)
        {
            c+=a[j];
            if(c==sum)
            {
                std::cout<<i<<","<<j;
                c=0;
            }
        }
    }
}