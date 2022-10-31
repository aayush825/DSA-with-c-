//Write a C++ program to find all elements in array of integers which have at-least two greater elements.

#include<iostream>
using namespace std;
 
void find_greater_elements(int nums[], int n)
{
    cout << "\nElements which have at-least two greater elements: ";
    for (int i=0; i<n; i++)
    {
        int ctr = 0;
        for (int j=0; j<n; j++)
            if (nums[j] > nums[i])
                ctr++;
 
        if (ctr >= 2)
            cout << nums[i] << " ";
    }
}
 

int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
   find_greater_elements(nums, n);
    return 0;
}