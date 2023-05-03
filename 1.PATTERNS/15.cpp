#include<bits/stdc++.h>
using namespace std;

void pattern17(int N){
    for(int i=0;i<N;i++){

        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }

        char ch = 'A';
        int breakpoint = (2*i+1)/2;

        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<= breakpoint) ch++;
            else ch--;
        }
         for(int j=0;j<N-i-1;j++){
              cout<<" ";
          }
          cout<<endl;
    }
}
int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;
    
    pattern17(N);

    return 0;
}