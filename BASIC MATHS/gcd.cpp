#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0)
       return b;
    if(b==0)
       return a;

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return b;
}
int main(){
int a,b;
cout<<"enter values of a and b";
cin>>a>>b;

int ans=gcd(a,b);
cout<<"the gcd of a and b is"<<ans<<endl;

return 0;
}