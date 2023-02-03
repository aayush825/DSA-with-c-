#include <iostream>
using namespace std;

int fact(int n){
    if(n == 0)
      return 1;
        
    return n * fact(n-1);   
}

int main() {
    
    int n;
    cout<<"enter no";
    cin>> n ;
    
    int ans = fact(n);
    cout<<ans;

    return 0;
}
