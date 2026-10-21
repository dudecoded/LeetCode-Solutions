class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int n = nums.size();
       std::unordered_map<int, int> frequency;
int x;
    // Count occurrences of each number
    for (int x : nums) {
        frequency[x]++;
    }
for (auto const& [number, count] : frequency) {
        if (count > n/2) {
            return number;
        }}
        return 0;
    }
};