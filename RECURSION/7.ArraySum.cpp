#include<iostream>
using namespace std;
//Sum fn
int sum(int *arr,int size){
	if(size == 0)
	   return 0;
	   
	if(size ==1)
	  return arr[0];
	  
	int ans= sum(arr+1,size-1);
	int rem = arr[0]+ans;
	return rem;
     	
}
int main(){
	int arr[6]={5,6,7,8,9,12};
	int size=6;
	
	cout<<" sum "<<sum(arr,6)<<endl;
	
	return 0;
	
}
