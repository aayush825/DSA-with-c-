/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Input: nums = [2,2,1,1,1,2,2]
Output: 2
Moore’s Voting Algorithm

Intuition: The question clearly states that the nums array has a majority element. Since it has a majority element we can say definitely the count is more than N/2.
*/
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int majorityElement(vector<int>& nums){
    int count =0;
    int candidate =0;

    for(int num: nums){
        if(count == 0){
            candidate = num;
        }
        if(num == candidate) 
           count +=1;
        else 
            count -= 1;   
    }
        return candidate;
    }
};