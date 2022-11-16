#include<iostream>
#include<conio.h>
void  main()
{
    int s,a[s],i;
    std::cout<<" enter size ";
    std::cin>>s;
    for(i=0;i<s;i++)
    {
        std::cin>>a[i];
    }
    if(a[0]>a[1])
    std::cout<<a[0];
    for(i=1;i<s-1;i++)
    {
        if(a[i]>=a[i-1] && a[i]>=a[i+1])
        std::cout<<a[i];
    }
    if(a[s-1]>=a[s-2])
    std::cout<<a[s-1];
   getch();
}