#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,1,2,2,3,3,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int Xor =0;
    for(int i=0;i<n;i++){
        Xor = Xor ^ arr[i];
    }
    cout<<Xor;
}