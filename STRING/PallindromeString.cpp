#include<iostream>
using namespace std;

int getlength(char name[]){
	int count =0;
	for(int i=0;name[i]!= '\0';i++){
		count++;
	}
	return count;
}

bool pallindrome(char name[],int len){

    int start=0;
    int end= len-1;
    while (start<=end){
       if(name[start]!=name[end]){
        return 0;
       }
       else{
        start++;
        end--;
       }
    
    }
    return 1;    

}

int main(){
char name[10];
cout<<"  enter string  ";
cin>>name;
getlength(name);

int ans= pallindrome(name,getlength(name));

if(ans){
    cout<<"pallindrome";
}
else
   cout<<"not";

}