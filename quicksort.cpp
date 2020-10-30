#include <iostream>
using namespace std;
int swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
    return 0;
}
int partition(int a[],int s,int e)
{
   int x=a[e-1];
   int j,i=s-1;
   for(j=s;j<e-1;j++)
   {
        if(a[j]<x)
         {  
             ++i;
             swap(a[j],a[i]);
             
         }
   }
    swap(a[i+1],a[j]);     
    return i+1;
}
int quicksort(int a[],int s,int e)
{
    
   if(s<e){
    int p;   
    p=partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e-1);
   }
    return 0;
}

int main() {
	// your code goes here
    int a[]={8,9,7,2,5,6,4},s,e;
    quicksort(a,0,7);
    for(int i=0;i<7;i++)
       cout<<" "<<a[i];
	
	return 0;
}
