#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextemallerelemnt(vector<int> &arr, int n){

    stack<int> s;
    s.push(-1);
    //anser array
    vector<int> ans;
    for(int i = n-1;i>=0;i--){
        int curr = arr[i];
        while (s.top()>= curr)
        {
           s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
//tc -- o(n)

int main(){


}