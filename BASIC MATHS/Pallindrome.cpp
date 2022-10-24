#include<iostream>
using namespace std;

int reverse(int y){
    int rev=0;
    while(y!=0){
        int r=y%10;
        rev = rev*10+r;
        y=y/10;
    }
    return rev;
    
}
int main(){
    int n =1221;
    int rev;
    int ans=reverse(n);
    
    if(n == ans){
        cout<<"number is pallindrome";
    }
    else
       cout<<"not pallindrome";
}
