#include<iostream>
#include<stack>
using namespace std;

void sortedinsert(stack<int> &s,int num){
    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    sortedinsert(s,num);
    s.push(n);

}

void sortstack(stack<int> &stack){
    //base case
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();

    //recursive call
    sortstack(stack);
    sortedinsert(stack,num);
}

int main(){

   stack<int> s;
    s.push(10);
    s.push(80);
    s.push(100);
    s.push(200);
    s.push(50);
    cout<<"before";
    while (!s.empty())
    {
        int p = s.top();
        
        cout << p << " ";
        s.pop();
    }
    
    sortstack(s);
   
    while (!s.empty())
    {
        int p = s.top();
        
        cout << p << " ";
        s.pop();
    }
    return 0; 
}