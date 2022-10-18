//replace space with somethiing
//eg ;- hello me  --> hello@40me //here replacing space with 40
#include<string>
#include<iostream>
#include<vector>
using namespace std;
string replacestring(string &str){

    string temp = "";

    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    for(int i=0;i<temp.length();i++){
    cout<<temp[i];
    
    }
    
}

int main(){

 string str= "UG KJ GH";

 cout<<replacestring(str);
  
}