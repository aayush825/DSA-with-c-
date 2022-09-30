#include<iostream>
using namespace std;

int pow(int m,int n){
	
	if(n == 0)
	 return 1;
	 
	return pow(m,n-1)*m; 
}

int main(){
	
	int m,n;
	cout<<"enter value of m&n"<<endl;
	cin>>m>>n;
	int ans=pow(m,n);
	cout<<ans;
}
