// A Leader is an element that is greater than all of the elements on its right side in the array
/*
Example 2:
Input:
 arr = [10, 22, 12, 3, 0, 6]
Output:
 22 12 6
*/

#include<iostream>
using namespace std;

void printLeader(int arr[],int n){
    int max = arr[n-1];
    cout<<arr[n-1]<<" ";

    for(int i =n-2;i>=1;i--){
        if(arr[i]>max){
            cout<<arr[i]<<" ";
            max = arr[i];
        }
    }
    
}

int main(){
    int arr1[]={4,7,1,0};  //{10, 22, 12, 3, 0, 6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout<<"the leaders of array are  ";
    printLeader(arr1,n1);
}