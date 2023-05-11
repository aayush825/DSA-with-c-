#include<bits/stdc++.h>
using namespace std;

void subseq(int ind,vector<int> &ds,int arr[],int n){
    //print
    if(ind == n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0){
            cout<<"{}"; 
        }
        cout<<endl;
        return;
    }
    //take or  pick particular index into subsequence
    ds.push_back(arr[ind]);
    subseq(ind+1,ds,arr,n);
    ds.pop_back();

    //not pick ,or not take condn,the element is added to subseq
    subseq(ind+1,ds,arr,n);
}

int main(){
    int arr[] = {3,1,2};
    int n =3;
    vector<int> ds;
    subseq(0,ds,arr,n);

}