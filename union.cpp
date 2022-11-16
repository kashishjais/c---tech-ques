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
        std::cout<<a[i]<<" ";
    }
    for(j=0;j<n2;j++)
    {
       int flag=0;
        for(i=0;i<n1;i++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            std::cout<<b[j]<<" ";
        }
    }
}

    

