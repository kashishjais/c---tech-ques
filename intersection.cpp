#include<iostream>
#include<conio.h>
int main()
{
    int n1,n2,a[n1],b[n2] ,i,j;
    std::cout<<" enter size of array1 ";
    std::cin>>n1;
    std::cout<<" enter size of array2 ";
    std::cin>>n2;
    for(i=0;i<n1;i++)
    {
        std::cin>>a[i];
    }
     for(i=0;i<n2;i++)
    {
        std::cin>>b[i];
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            std::cout<<a[i]<<" ";
        }
    }
}