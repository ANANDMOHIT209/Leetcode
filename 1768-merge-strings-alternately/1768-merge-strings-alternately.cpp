class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string res;
        int i=0;
        while(i<w1.size() && i<w2.size()){
            res+=w1[i];
            res+=w2[i];
            i++;
        }
        if(i<w1.size()){
            while(i<w1.size()){
                res+=w1[i];
                i++;
                }
        }
        else{
             while(i<w2.size()){
                res+=w2[i];
                i++;
                }
        }
        return res;
    }
};