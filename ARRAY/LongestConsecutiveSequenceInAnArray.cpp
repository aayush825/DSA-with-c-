/*
 You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.
 Example 1:

Input: [100, 200, 1, 3, 2, 4]

Output: 4

Explanation: The longest consecutive subsequence is 1, 2, 3, and 4.

Input: [3, 8, 5, 7, 6]

Output: 4

Explanation: The longest consecutive subsequence is 5, 6, 7, and 8.
*/

/*count() is a built-in function in C++ STL which returns the number of times an element occurs in the set.
 It can only return 1 or 0 as the set container contains unique elements only. 
*/

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    set<int> hashset;
    //inserting values of vector into set
    for (int num : nums)
    {
        hashset.insert(num);
    }

    int longestStreak =0; //keeps The longest consecutive subsequence

    for(int num: nums){
        if(!hashset.count(num-1)){//if number less than 1 doest not exist in the set then only it enters the loop
            int currentNum = num;
            int currentStreak = 1;

            while(hashset.count(currentNum+1)){//if number greater than 1 exist in the loop then we enter the loop and run it until +1 number does not exist
                currentNum +=1; //it will increase the number by 1
                currentStreak +=1;
            }

            longestStreak = max(longestStreak,currentStreak);
        }
    }
    return longestStreak;
}
int main()
{
    vector<int> arr{100, 200, 1, 2, 3, 4,6,5};
    int ans = longestConsecutive(arr);
    cout << "longest consecutive sequence is " << ans << endl;
}