#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputstack,int count,int size){

    //base case
    if(count == size/2){
        inputstack.pop();
        return;
    }
    int num = inputstack.top();
    inputstack.pop();

    //recursive call
    solve(inputstack,count+1,size);
    inputstack.push(num);
}

int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    solve(s,0,s.size());

    while(!s.empty()){
        int p =s.top();
        s.pop();
        cout<<p<<" ";
    }
    return 0;

}