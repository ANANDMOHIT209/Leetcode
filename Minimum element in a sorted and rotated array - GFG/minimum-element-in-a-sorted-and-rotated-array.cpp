//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int num[], int n){
        //complete the function here
        int l=0,h=n-1;
        int mini=INT_MAX;
        while(l<=h){
            if(num[l]<num[h]){
                mini=min(mini,num[l]);
                break;
            }
            int mid=l+(h-l)/2;
            if(num[l]<=num[mid]){
                mini=min(mini,num[l]);
                l=mid+1;
            }
            else{
                mini=min(mini,num[mid]);
                h=mid-1;
            }
        }
        return mini;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends