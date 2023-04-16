#include<iostream>
#include<stack>
using namespace std;

bool validparanthesis(string expression){
    stack<char> s;
    for(int i=0; i<expression.length();i++){
        char ch = expression[i];

        if(ch == '(' || ch =='{' || ch == '['){
            s.push(ch);
        }
        else{

            if(!s.empty()){
                char top = s.top();
                if((ch == ')' && top == '(') ||
                  (ch == '}' && top == '{') ||
                  (ch == ']' && top == '[') )
                {
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{ 
                return false;
            }
        
        }
        if(s.empty())
            return true;
        else
            return false;    
        
    }
}

 bool ispar(string x)
    {
        stack<char> st;

        for (auto it : x)
        {
            if (it == '{' || it == '(' || it == '[')
            {
                st.push(it);
            }
            else
            {
                if (st.size() == 0)
                    return false;

                // Extracting the topmost character to compare
                char ch = st.top();

                if ((it == ')' and ch == '(') or (it == ']' and ch == '[') or (it == '}' and ch == '{'))
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }

int main(){
string str = "[]{}()";

bool ans = ispar(str);
if(ans){
    cout<<"valid";
}
else
    cout<<"invalid";

bool sol = validparanthesis(str);
if(sol){
    cout<<"valid";
}
else
    cout<<"invalid";    
}