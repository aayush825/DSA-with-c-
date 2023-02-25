#include<iostream>
using namespace std;

int main(){
int num=5;
  cout<<"address of num"<<&num<<endl;

 int *ptr = &num; 
 cout<<"address is"<<ptr<<endl;
 cout<<"value is"<<*ptr<<endl;

 double d=4.3;
 double *p2 = &d;

 cout<<"address is"<<p2<<endl;
 cout<<"value is"<<*p2<<endl;

}
