#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& s, int x)
{

    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    solve(s, x);
    s.push(num);
}

stack<int> pushatbottom(stack<int> &mystack, int x)
{

    solve(mystack, x);
    return mystack;
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
    pushatbottom(s,8);
    while (!s.empty())
    {
        int p = s.top();
       
        cout << p << " ";
         s.pop();
    }
    return 0;
}