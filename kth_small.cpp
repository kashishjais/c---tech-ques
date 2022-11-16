#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,j,k;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<" enter value of k ";
    std::cin>>k;
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
    std::cout<<k<<"th"<<" largest element "<<a[n-k];
    std::cout<<k<<"th"<<" smallest element "<<a[k-1];
}
