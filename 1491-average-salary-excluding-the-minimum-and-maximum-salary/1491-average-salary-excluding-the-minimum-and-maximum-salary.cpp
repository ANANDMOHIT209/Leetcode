class Solution {
public:
    double average(vector<int>& s) {
        double av;
        int sum=0;
        int maxi=*max_element(s.begin(),s.end());
        int mini=*min_element(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            // if(s[i]!=maxi && s[i]!=mini){
                sum+=s[i];
            // }
        }
        cout<<sum<<" "<<maxi<<" "<<mini<<" ";
        sum-=(maxi+mini);
        av=(double)sum/(s.size()-2);
        return av;
    }
};