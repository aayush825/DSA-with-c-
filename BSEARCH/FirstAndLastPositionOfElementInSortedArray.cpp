#include<iostream>
using namespace std;
 
int firtocc(int arr[] , int n, int key){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    int ans= -1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans =mid;
            e=mid-1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
} 

int lasttocc(int arr[] , int n, int key){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    int ans= -1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans =mid;
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
} 
int main(){
    int ans;
    int even[8]={1,2,3,3,3,4,5,6};
    int ast = firtocc(even,8,3);
    cout<<"first occurence"<<ast<<endl;
    
    cout<<"last occu"<<lasttocc(even,8,3);
    
}
