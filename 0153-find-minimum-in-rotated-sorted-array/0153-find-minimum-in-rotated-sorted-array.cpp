class Solution {
public:
    int findMin(vector<int>& num) {
        int n=num.size();
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