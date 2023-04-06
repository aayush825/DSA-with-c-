#include<bits/stdc++.h>
using namespace std;

class solution{
    string removeOuterParentheses(string s) {
        string ans;
        int c = 0;
        for(int i =0;i<s.size();i++){
            if(s[i] == '('){
                ans.push_back(s[i]);
                if(c == 0)
                    ans.pop_back();
                c++;    
            }
            if(s[i] == ')'){
                c--;
                ans.push_back(s[i]);
                if(c == 0)
                    ans.pop_back();

            }
        }
        return ans;

    }

};