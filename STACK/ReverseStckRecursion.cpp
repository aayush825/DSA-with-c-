#include<iostream>
#include<stack>
using namespace std;

void pushatbottom(stack<int> &s,int element){

    if(s.empty()){
        s.push(element);
         return;
    }
    int num = s.top();
    s.pop();
    pushatbottom(s, element);
    s.push(num);

}

void reversestack(stack<int> &stack){
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();

    //recursive call
    reversestack(stack);
    pushatbottom(stack,num);
}

int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    reversestack(s);

    while (!s.empty())
    {
        int p = s.top();
       
        cout << p << " ";
         s.pop();
    }
    return 0;
}