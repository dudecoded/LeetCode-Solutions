class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int  n=nums.size();
        int count=0 , cand;
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                cand=nums[i];
            }
            else{
                if(cand==nums[i]){
                    count++;
                }
                else
                count--;
            }
        }
        return cand;
    }
};