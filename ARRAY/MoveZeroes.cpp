//in this move all the zeroes present in array to righr side
// eg- [0,68,0,5,6]  ==> [68,5,6,0,0]

#include<iostream>
using namespace std;

void moveZero(int arr[],int size){

    int i=0;
    for (int j = 0; j < size; j++){
         
         if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
         }
    } 
    
}

int main(){

    int arr[]={0,1,0,2,3,0};
    int size=6;

    moveZero(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

}