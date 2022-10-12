
//given array, arr[]={1,2,0,4}; 
//roatete the array by 2 ,k=2: output arr[]={0,4,1,2}

#include<iostream>
#include<vector>
using namespace std;

 int rotate(vector<int>& nums, int k) {
      
    // just to practice the modulus approach
      int n = nums.size();
      vector<int> temp(n);
 
      for(int i =0;i<n;i++) {
        
        temp[(i+k)%n] = nums[i];
        
      }
      
          //now copy element of temp into num
      for(int i=0;i<nums.size();i++) 
      {
        nums[i] = temp[i];
      }
      
    }



int main(){
 
  	vector<int> nums{ 1,2,3,4,5 };
  
    rotate(nums,2);

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i];
    }
    

return 0;
}