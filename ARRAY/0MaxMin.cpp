#include<iostream>
using namespace std;

int getmin(int num[],int n){
	
	int min= INT_MAX;
	
	for(int i=0;i<n;i++){
		if(num[i]<min){
			min = num[i];
		}
	}
	return min;
}


int getmax(int num[],int n){
	
	int max= INT_MIN;
	
	for(int i=0;i<n;i++){
		if(num[i]>max){
			max = num[i];
		}
	}
	return max;
}
//Main 
int main(){
	
	int size;
	cout<<"enter size of array"<<endl;
	cin>>size;
	
	int num[100];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>num[i];
	}
	
	cout<<"max value"<<getmax(num,size)<<endl;
	cout<<"min value"<<getmin(num,size)<<endl;
}
