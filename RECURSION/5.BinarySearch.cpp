#include<iostream>
using namespace std;

bool binarysearch(int *arr,int s,int e,int k){
	
	if(s>e)
	  return false;
	  
	int mid = s+(e-s)/2;
	
	if(arr[mid] == k)
	   return true;
	   
	if(arr[mid]<k){
	  return binarysearch(arr,mid+1,e,k);
	} 
	else
	  return binarysearch(arr,s,mid-1,k);-
	    
}

int main(){
	int arr[10]={1,2,3,4,6,8,12,20,35,87};
	int size = 10;
	int key;
	cout<<"enter key"<<endl;
	cin>>key;
	
	cout<<"  result  "<<binarysearch(arr,0,size-1,key)<<endl;
	
	return 0;
	
}
