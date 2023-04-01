class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
    int low = 0;
    int high = Arr.size()-1;
    int mid = low+(high - low)/2;
    
    while(low <= high){
       if(Arr[mid] == k)
            return mid;
        
        else if(Arr[mid] < k)
            low = mid+1; 
        else
            high = mid -1;
        
        mid = low+(high - low)/2;    
    }
    return low;