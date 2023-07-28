class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                res+=1;
            }
            else{
                res-=1;
            }
            if(res==0){
                c++;
            }
        }
        return c;
    }
};