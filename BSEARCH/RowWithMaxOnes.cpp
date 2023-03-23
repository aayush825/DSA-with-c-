#include<bits/stdc++.h>
using namespace std;

int row_with_max_1s(vector<vector<int>> matrix)
{
int max_one = 0;
int max_one_index = 0;

for(int i=0;i<matrix.size();i++){
    int ones = matrix[i].end() - lower_bound(matrix[i].begin(),matrix[i].end(),1);

    if (ones > max_one)
        {
            max_one = ones;
            max_one_index = i;
        }
}
    return max_one_index;

}

int main(){
vector<vector<int>> matrix = {{0,0,0,0},
{0,0,0,1},
{0,0,1,1},
{0,0,0,1}
};


int max_one_index = row_with_max_1s(matrix);
cout<<max_one_index;

}