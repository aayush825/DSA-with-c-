#include<iostream>
using namespace std;

int pivot(int arr[],int size){
  int start =0;
  int end = size-1; 
  int mid = start+ (end-start)/2;
  while(start<end){
  	if(arr[0]<arr[mid]){
  		start = mid+1;
  		return start;
	  }
  	else
  	    end = mid;
  	    return mid;
  }	
    mid = start+ (end-start)/2;
}

int main(){
	int arr[]={7,9,10,1,2,3};
	int size =6;
	cout<<pivot(arr,size);
	
}
