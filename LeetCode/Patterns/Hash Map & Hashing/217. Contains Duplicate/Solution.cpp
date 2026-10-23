class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> frequency;
        int x;
    for (int x : nums) {
        frequency[x]++;
    }
    for (auto const& [number, count] : frequency) {
        if (count >1) {
            return true;
        }
        }
        return false;
    }
};