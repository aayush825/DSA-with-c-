#include<iostream>
using namespace std;

int partition(int A[],int l,int h)
{
 int pivot=A[l];
 int i=l,j=h;
 
 do
 {
 do{i++;}while(A[i]<=pivot);
 do{j--;}while(A[j]>pivot);
 
 if(i<j){
 
  swap(A[i],A[j]);
 }
 }while(i<j);
 
 swap(A[l],A[j]);
 return j;
}

int main()
{
 int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
 
 partition(A,0,10);
 
 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");
 
 return 0;
}
