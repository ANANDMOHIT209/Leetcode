class Solution {
public:
    bool f(vector<int>& w, int days,int cap){
        int s=1;
        int curr=cap;
        for(auto it:w){
            if(curr-it<0){
                s++;
                curr=cap;
            }
            curr-=it;
        }
        return s<=days;
        
    }
    int shipWithinDays(vector<int>& w, int days) {
        int j=accumulate(w.begin(), w.end(), 0);
        int i=*max_element(w.begin(),w.end());
        int res=j;
        while(i<=j){
            int mid=(i+j)/2;
            if(f(w,days,mid)){
                res=min(res,mid);
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return res;
    }
};