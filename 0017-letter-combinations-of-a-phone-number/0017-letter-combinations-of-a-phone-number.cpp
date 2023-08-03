class Solution {
public:
    vector<string>res;
    void f(string d,int i,string temp,vector<string>str){
        if(i==d.size()){
            res.push_back(temp);
            return;
        }
        string s= str[d[i]-'0'];
        for(int j=0;j<s.size();j++){
            temp.push_back(s[j]);
            f(d,i+1,temp,str);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string d) {
        if(d=="") return {};
        vector<string>str ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp;
        f(d,0,temp,str);
        return res;
    }
};