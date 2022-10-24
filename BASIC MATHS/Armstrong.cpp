#include<iostream>
using namespace std;

int main(){
	int n,r,sum=0,m;
	cout<<"enter number";
	cin>>n;
	m=n;
	
	while(n>0){
		r=n%10;
		n=n/10;
		sum = sum+r*r*r;
	}
	if(sum == m){
	
	   cout<<"amstrong no";}
	else{
	
	   cout<<"not armstrong no";}
	   
	      
	return 0;
}
