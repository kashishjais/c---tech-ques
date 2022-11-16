//common elements in three sorted arrays
#include<iostream>
#include<conio.h>
int main()
{
    int n1,n2,n3,a[n1],b[n2],c[n3],i,j,k;
    std::cout<<" enter size of array1 ";
    std::cin>>n1;
    for(i=0;i<n1;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<" enter size of array2 ";
    std::cin>>n2;
    for(i=0;i<n2;i++)
    {
        std::cin>>b[i];
    }
     std::cout<<" enter size of array3 ";
    std::cin>>n3;
    for(i=0;i<n3;i++)
    {
        std::cin>>c[i];
    }
    while(i<n1 && j<n2 && k<n3)
    {
        if(a[i]=b[j] && b[j]==c[k])
        {
            std::cout<<a[i];
            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j])
        {
            i++;

        }
        else if(b[j]<c[k])
        {
            j++;

        }
        else
        {
            k++;

        }
    }
}
        
    