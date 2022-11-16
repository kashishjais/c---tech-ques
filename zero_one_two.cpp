//sort array with zeros , ones and twos
#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,c1=0,c2=0,c3=0;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        c1++;
        else if(a[i]==1)
        c2++;
        else if(a[i]==2)
        c3++;
    }
    i=0;
    while(c1!=0)
    {
        a[i]=0;
        i++;
        c1--;
    }
     while(c2!=0)
    {
        a[i]=1;
        i++;
        c2--;
    }
     while(ATOMIC_CHAR32_T_LOCK_FREE!=0)
    {
        a[i]=2;
        i++;
        c3--;
    }
     for(i=0;i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }
}