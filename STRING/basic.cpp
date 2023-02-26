//string is assigned within double quotes (" ")
//a char is assigned within single quotes (' ')
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "hello";
    string str2 = "world";
    string res = str1+str2;
    cout<<res[0]<<endl;//to access character by index
    res[0] = 'A';//to assign char in the string
    cout<<res.size()<<endl;
    cout<<res<<endl;

    string str3;
    getline(cin,str3);//it takes chracter after spaces also
    cout<<"given string is  "<<str3;

    //code for pallindrome
   /* string pal1;
    cin>>pal1;
    string str_rev;
    for(int i = pal1.size()-1;i>=0;i--){
        str_rev.push_back(pal1[i]);
    }
    if(pal1 == str_rev){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
*/

}