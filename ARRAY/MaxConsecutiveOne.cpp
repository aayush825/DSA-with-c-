#include <iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v{1,0,1,1,1,2,3,4,5,1,1,1,1};
    
    int maxi =0;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i] == 1){
            count++;
        }
        else{
            count=0;
        }
        maxi = max(maxi,count);
    }
    cout<<maxi;
}