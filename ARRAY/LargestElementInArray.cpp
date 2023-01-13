#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> &vect){
int max = vect[0];
for(int i=0;i<vect.size();i++){
    if(max < vect[i]){
        max = vect[i];
    }
}

cout<<"vale of temp"<<max;
}

int main(){
vector<int> vect{2,6,6,9,54,10,65,101,201};

largest(vect);


}
