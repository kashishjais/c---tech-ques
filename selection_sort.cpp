#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,j;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<n;i++)
    { 
        int temp;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
for(i=0;i<n;i++)
{
    std::cout<<a[i]<<" ";
}
}
