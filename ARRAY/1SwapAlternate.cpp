#include<iostream>
using namespace std;

int print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
		
	}cout<<endl;
}
//swap fn
int swap(int arr[],int size){
	for(int i=0;i<size;i+=2){
	
	if(i+1 < size)
		swap(arr[i],arr[i+1]);
	
   }
}

int main(){
   int even[6]={2,4,6,8,7,9};
   int odd[5]={1,2,3,4,5};	
	
   swap(even,6);
   print(even,6);
   
   cout<<endl;
   
   swap(odd,5);	
   print(odd,5);
   
   
   return 0;
   
}
