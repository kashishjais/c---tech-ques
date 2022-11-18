#include<iostream>
#include<conio.h>
int main()
{
    int n,a[n] ,i,j,k,n1=0,p=0,e=0,od=0,z=0;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
      
        std::cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
      if(a[i]<0)
      n1++;
      else if(a[i]>0)
        p++;
        else if(a[i]==0)
        z++;
        else if(a[i]%2==0)
        e++;
        else if(a[i]%2!=0)
        od++;
    }
    std::cout<<"negative "<<n1<<"positive "<<p<<"zeroes "<<z<<"odd "<<od<<"even "<<e;
}

