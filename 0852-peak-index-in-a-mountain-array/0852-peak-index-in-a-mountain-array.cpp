class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        int j=arr.size();
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]>arr[mid+1])
                j=mid-1;
            else{
                i=mid+1;
            }
        }
        return -1;
    }
};