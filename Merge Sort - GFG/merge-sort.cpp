//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
         // Your code here
         int merged[r-l+1];
         int idx1=l;
         int idx2=mid+1;
         int x=0;
         
         while(idx1<=mid && idx2<=r){
             if(arr[idx1]<=arr[idx2]){
                 merged[x++]=arr[idx1++];
             }
             else{
                 merged[x++]=arr[idx2++];
             }
         }
         while(idx1<=mid){
             merged[x++]=arr[idx1++];
         }
         while(idx2<=r){
             merged[x++]=arr[idx2++];
         }
         for(int i=0,j=l;i<(r-l+1);i++,j++){
             arr[j]=merged[i];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r) return;
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends