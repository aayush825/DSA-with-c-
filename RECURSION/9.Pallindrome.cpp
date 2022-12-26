#include<iostream>
using namespace std;
//Palindrome 
bool palindrome(string& str,int i,int j){
	if(i>j)
	   return true;
	   
	if(str[i]!=str[j])
	   return false;
	   
	return palindrome(str,i+1,j-1);      
	
}

int main(){
	
	string name = "kook";
	
	bool ans= palindrome(name,0,name.length()-1);
	if(ans)
	  cout<<"pallindrome"<<endl;
	  
	else
	  cout<<"not pallindrome";  
	return 0;
}
