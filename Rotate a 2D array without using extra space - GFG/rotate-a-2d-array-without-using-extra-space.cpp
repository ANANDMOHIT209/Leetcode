//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& mat, int n) {
	    // code here 
	    for(int i=0;i<(mat.size()-1);i++){
        for(int j=i+1;j<mat.size();j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<mat.size()/2;i++){
        for(int j=0;j<mat[0].size();j++){
            swap(mat[i][j],mat[(mat.size()-1)-i][j]);
        }
    }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            vector<int> a;
            for (int j = 0; j < n; j++) {
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        Solution ob;
        ob.rotateMatrix(arr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends