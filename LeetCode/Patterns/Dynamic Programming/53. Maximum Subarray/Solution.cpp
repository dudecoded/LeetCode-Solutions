class Solution {
public:
    long long maxSubArray(vector<int>& arr) {
long long maxi=INT_MIN,prefix=0;
for(int i =0;i<arr.size();i++){
    prefix+=arr[i];
    maxi=max(prefix,maxi);
    if(prefix<0){
        prefix=0;
    }
}
       return maxi; 
    }
};