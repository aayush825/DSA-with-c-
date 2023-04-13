class solution
{

private:
bool knows(vector<vector<int>> &M,int a,int b,int n){
if(M[a][b] == 1)
    return true;
else
    return false;    
}


public:

int celebrity(vector<vector<int>> &M, int n){

    stack<int> s;

    for(int i=0;i<n;i++){
        s.push(i);
    }
    while (s.size() > 1)
    {
       int a =s.top();
       s.pop();

       int b =s.top();
       s.pop();

       if(knows(M,a,b,n)){
        s.push(b);
       }
       else{
        s.push(a);
       }
    }
    
    int zerocount = 0;

    for(int i=0;i<n;i++){
        if(M[candidate][i] == 0)
        zerocount++;
    }
    if(zerocount != n){
        return -1;
    }
   
    int onecount = 0;

    for(int i=0;i<n;i++){
        if(M[i][candidate] == 0)
        onecount++;
    }
    if(onecount != n-1){
        return -1;
    }

    if(rowcheck == true && colcheck == true){
        return ans;
    }
    else
      return -1;
}
};