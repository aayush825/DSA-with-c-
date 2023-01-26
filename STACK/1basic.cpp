#include<iostream>
#include<stack>
using namespace std;

int main(){
    //using stl
    //creation of stack with name s
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();

    cout<<"printing top element  "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    cout<<"size of stack is "<<s.size()<<endl;


    return 0;

}
