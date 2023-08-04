class Solution {
public:
  
    int f(int n,int sum)
    {
    // Note that this loop runs till square root
    int count=0;
    for (int i=1; i<=sqrt(n); i++)
    {
    if (n%i == 0)
    {
        // If divisors are equal, print only one
        if (n/i == i){
            sum+=i;
            count++;
        }  
        else {
            sum+=i;
            sum+=(n/i);
            count=count+2;
        }

    }
    }
    if(count==4){
    return sum;
    }
    else return 0;
    }


    int sumFourDivisors(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            int x=f(nums[i],0);
            res+=x;

        }
        return res;
            }
};