class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char s) {
        vector<string>res;
        for(int i=0;i<words.size();i++){
            string str="";
            string temp=words[i];
            
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]!=s){
                    str+=words[i][j];
                }
                else{
                    if(str.size()>0)
                    res.push_back(str);
                    str="";
                }
            }
            if(str.size()>0)
            res.push_back(str);
        }
        return res;
    }
};