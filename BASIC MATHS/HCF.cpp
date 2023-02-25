#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    int h = min(a,b);
    for(h;h>=1;h--){
        if(a%h == 0 && b%h ==0)
            break;
    }
    cout<<"hcf is"<<h;
}