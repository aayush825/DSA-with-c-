#include<bits/stdc++.h>
using namespace std;


//l: starting index of array that is 0
//r: ending index of array that is size -1
//k: find the Kth smallest and return using this fn


//largest element can be found using min heap
//using max heap
int kthsmallest(int arr[],int l,int r,int k)
{
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i = k;i<=r;i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ans = pq.top();
    return ans;
}