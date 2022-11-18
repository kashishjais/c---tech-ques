#include<iostream> //rearrange array elements in alternative negative & positive signs
#include<conio.h>
int main()
{
    int n,a[n] ,i,j=-1,temp;
    std::cout<<" enter size of array ";
    std::cin>>n;
    
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            j++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
    }
    int pos=j+1,neg=1;
    while(neg<pos && pos<n && a[neg]<0)
    {
        temp=a[pos];
        a[pos]=a[neg];
        a[neg]=temp;
        pos++;
        neg+=2;
    }
    for(i=0;i<n;i++)
    {
        std::cout<<a[i];
    }
}


    

