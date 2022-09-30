#include<iostream>
using namespace std;

void selectionsort(int A[],int n){
	int i,j,k;
	
	for(i=0;i<n-1;i++){
		for(j=k=i;j<n;j++){
			if(A[j]<A[k])
			 k=j;
		}
		swap(A[i],A[k]);
	}
}

int main(){
	
	int A[]={520,65,41,78,6,19,37,20,98,65},i,n=10;
	
	selectionsort(A,10);
	
	for(i=0;i<n;i++){
		cout<<A[i]<<endl;
	}
	
	return 0;
}
