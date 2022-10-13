#include<iostream>
using namespace std;

void reverse(char name[],int size){
	int start=0;
	int end=size-1;
	
	while(start<end){
		swap(name[start++],name[end--]);
	}
	
	
}
int getlength(char name[]){
	int count =0;
	for(int i=0;name[i]!= '\0';i++){
		count++;
	}
	return count;
}

int main(){
	
	char name[5];
	cout<<"enter string"<<endl;
	cin>>name;
	int len= getlength(name);

	reverse(name,len);
	cout<<name;


	
		
}
