#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int> > arr, int nRows, int mCols)
{
    vector<int> ans;
    
    for(int col=0; col<mCols; col++) {
        
        if( col&1 ) {
            //odd Index -> Bottom to top
            
            for(int row = nRows-1; row>=0; row--) {
                //cout << arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }    
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for(int row = 0; row<nRows; row++) {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }   
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}

int main(){
//2d vector 
 vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    wavePrint(vect,3,3);

}
