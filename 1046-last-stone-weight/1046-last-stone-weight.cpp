class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int>pq;
        for(int i=0;i<s.size();i++){
            pq.push(s[i]);
        }
        while(pq.size()!=1){
            int a=pq.top();
            pq.pop();
            if(pq.empty()==false){
                int b=pq.top();
                pq.pop();
                pq.push(a-b);
            }
            else{
                return pq.top();
            }
        }
        return pq.top();
    }
};