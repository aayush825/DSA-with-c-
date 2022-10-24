#include<iostream>
using namespace std;

int main(){
    int n = 156;
    int rev=0;
    while(n!=0){
    int r = n%10;
    rev = rev*10+r;
    n=n/10;}
    
    cout<<rev;
}
