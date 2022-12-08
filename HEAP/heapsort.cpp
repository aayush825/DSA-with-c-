//heapify algo  
//in cbt - leeaf node index ->   (n/2+1) to n th node

//heap is complete binary tree that comes with heap order property
//complete binary tree -> every level is completely filled except the last level,nodes always added from left

//max heap -- parent hmesha child s bada hoga
//min heap

//node -> ith index
//left child -- 2*i index
//right child -- (2*i+1) index
//parent = (i/2)


//max heap inserttion
//tc - log n
#include<iostream>
using namespace std;
#include<queue>

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]= -1;
        size = 0;
    }

    void insert(int val){
        size = size+1; // as we insert the element at end so we increse size by1
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else 
              return;
        }
        
    }
    void print(){
        for(int i =1;i<= size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deletefromheap(){
        if(size == 0){
            cout<<"nothing to delete "<<endl;
            return;
        }
        //step 1: put lat element into first index
        arr[1] = arr[size];
        //remove last element
        size--;

        //take root node to its correct position

        int i =1;
        int leftindex = 2*i;
        int rightindex = 2*i+1;

        if(leftindex < size && arr[i]<arr[leftindex])
        {
            swap(arr[i],arr[leftindex]);
            i = leftindex;
        }
        else if (rightindex < size && arr[i]< arr[rightindex])
        {
            swap(arr[i],arr[rightindex]);
            i = rightindex;
        }
        else{
            return;
        }
    }
};
//it is also used to arrange element
//max heap
//buila a min heap too
//tc - nlogn
void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n){
    int size= n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;

        heapify(arr,size,1);
    }
}

int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    
    h.print();

    h.deletefromheap();
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n =5;

    //heap creation
    for(int i = n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"print the array now" <<endl;
    for(int i =0;i<=n;i++){
        cout<<arr[i]<< " ";
    }cout<<endl;

    //heap sort
    heapsort(arr,n);

      cout<<"print the sorted array  now" <<endl;
    for(int i =0;i<=n;i++){
        cout<<arr[i]<< " ";
    }cout<<endl;


    cout<<"using priority queue here" <<endl;
    //priority queue - data structure  which can be used for min heap and max heap functionality
    
    priority_queue<int> pq;//this is max  heap
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"element at top"<<pq.top() <<endl;
    pq.pop();
    cout<<"element at top"<<pq.top() <<endl;
    cout<<"size is"<<pq.size()<<endl;


    //min heap
    priority_queue<int,vector<int>,greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    cout<<"element at top"<<minheap.top() <<endl;
    return 0;
}

