#include <iostream>
#include<cmath>
using namespace std;

int merge(int a[],int s,int mid,int e)
{
    int nl=mid-s+1;
    int nr=e-mid;
    int l[nl],r[nr];
     for(int i=0;i<nl;i++)
       l[i]=a[s+i];
     for(int i=0;i<nr;i++)
       r[i]=a[mid +1+i];
       int i=0;
       int j=0;
       int k=s;
    while(i<nl && j<nr)
    {
        if(l[i]<r[j])
         {a[k]=l[i];
           ++i;
         }
         else
         {
          a[k]=r[j];
          ++j;
         }
         ++k;
         }
     while(i<nl)
     {
         a[k]=l[i];
         ++k;
         ++i;
     }
     while(j<nr)
     {
         a[k]=r[j];
         ++k;
         ++j;
     }
    return 0;
}
int mergesort(int a[],int s,int e)
{
    if(s<e)
    { 
    int mid=s+(e-s)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);
    merge(a,s,mid,e);

    }    
    return 0;
    }
int main() {
	// your code goes here
    int a[]={8,9,7,2,5,6,4},s,e;
    mergesort(a,0,7);
    for(int i=1;i<8;i++)
       cout<<" "<<a[i];
	
	return 0;
}
