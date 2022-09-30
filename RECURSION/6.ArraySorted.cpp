#include<iostream>
using namespace std;

bool sorted(int *arr,int size){
	if(size ==0||size ==1){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}
	
	return sorted(arr+1,size-1);
}



int main(){
	int arr[6]={1,2,3,4,6,5};
	int size = 6;
	
	bool ans= sorted(arr,size);
	
	if(ans)
	  cout<<"array sorted"<<endl;
	  
	else
	  cout<<"not sorted";
	  
	  return 0;  
	
}
