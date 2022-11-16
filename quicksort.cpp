#include<iostream>
#include<conio.h>
using namespace std;
void  main()
{
    int n,a[n],i;
    std::cout<<" enter size ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
qsort(a,0,n-1);
for(i=0;i<n;i++)
{
    std::cout<<a[i]<<" ";

}
}

void qsort(int a[],int low,int high)
{
if(low<high)
{
    int p=quicksort(a,low,high);
    qsort(a,low,p);
    qsort(a,p+1,high);
    
}
}
int  quicksort(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low-1,j=high-1;
    while(true)
    {
        do{
            i++;
          }while(a[i]<pivot);
        do{
            j--;
          }while(a[j]>pivot);
        if(i>=j)
        std::cout<<j;
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}

