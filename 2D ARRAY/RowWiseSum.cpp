//also tell the largest row sum
//



#include<iostream>
using namespace std;

int largestsum(int arr[][3],int row,int col){

    int maxi= INT_FAST8_MIN;
    int rowindex= -1;
    for(int row=0;row<3;row++){
         int sum=0;
       for(int col=0;col<3;col++){
           sum+= arr[row][col];
 }   
 if(sum>maxi){
    maxi=sum;
    rowindex = row;
 }
    }
   cout<<"the max sum is"<<maxi<<endl;
   return rowindex;
}

void printsum(int arr[][4],int row,int col){
cout<<"printing sum row wise"<<endl;
   for(int row=0;row<3;row++){
       int sum=0;
        for(int col=0;col<3;col++){
           sum+= arr[row][col];
 }
 cout<<sum;
 cout<<endl;
}

}

int main(){
int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,15};
printsum(arr,3,4);
}
