#include<iostream>
using namespace std;

int ans(int n){
	int count =0;
	while(n!=0){
		n=n/10;
		count++;
	}
	return count;
	
}

int main(){
	
	int x= 123;
	
	cout<<" no of dgits are  "<<ans(x);
	return 0;
}
