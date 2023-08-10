class Solution {
public:
    bool search(vector<int>& a, int k) {
        int l=0;
       int h=a.size()-1;
       while(l<=h){
            int mid=(l+h)/2;
            
            if(a[mid]==k) return true;
            if((a[l]==a[mid]) && (a[h]==a[mid]))
            {
                l++;
                h--;
            }
            else if(a[l]<=a[mid]){
                if(k>=a[l] && k<a[mid]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(k<=a[h] && k>a[mid]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return false;
    }
};