#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,j,MIN=INT16_MAX,MAX=0;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
       if(a[i]<MIN)
       MIN=a[i];
       if(a[i]>MAX)
       MAX=a[i];

    }
    std::cout<<MIN<<" "<<MAX;
    
}