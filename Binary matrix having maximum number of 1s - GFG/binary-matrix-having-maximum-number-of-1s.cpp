//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        //code here
        int row = -1;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int start=0;
            int end=n-1;
            int ans=INT_MAX;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(mat[i][mid]==1)
                {
                    ans=min(ans,mid);
                    end=mid-1;
                }
                else
                    start=mid+1;
            }
            if(ans<mini){
                row=i;
                mini=ans;
            }
        }
        vector<int> v;
        if(row==-1){
            v.push_back(0);
            v.push_back(0);
        }
        else{
            v.push_back(row);
            v.push_back(n-mini);
        }

        return v;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends