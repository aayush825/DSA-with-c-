#include<iostream>
using namespace std;
int main(){
  int i,j,k=0;
  for(i=0;i<=7;i++){
  	i<=4?k++:k--;
  	for(j=0;j<=7;j++){
  		
  		if(j>=5-k && j<=3+k)
		  
  		    cout<<"*";
  		else
  		    cout<<" ";
		    
	  }
	  cout<<endl;
  }	
	
}
