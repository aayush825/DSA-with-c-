#include<iostream>
using namespace std;

class hero
{
   
   
   public:
    int health;
    char level = 'a';
    void print(){
        cout<<level<<endl;
   }
};

int main(){

    hero h1;
    h1.print();
    cout<<"size:"<<sizeof(h1);
    cout<<h1.health<<endl;
    cout<<h1.level<<endl;

    return 0;
}