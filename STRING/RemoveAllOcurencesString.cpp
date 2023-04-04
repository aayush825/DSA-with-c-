//a substring is contiguous sequence of a character in a string
#include<bits/stdc++.h>
using namespace std;

string removerOccurence(string s,string part){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());

    }
    return s;
}

int main(){
    
}