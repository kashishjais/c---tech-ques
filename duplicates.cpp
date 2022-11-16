#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,j,c=0;
    std::cout<<" enter size of array ";
    std::cin>>n;
    
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            c++;
        }
    }
    std::cout<<c;
}
