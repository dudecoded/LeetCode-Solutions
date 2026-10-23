class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end());
      vector<vector<int>>merge;
      vector<int>cur=intervals[0];

        for(int i = 0; i < intervals.size(); i++){
 if(intervals[i][0] <= cur[1]) {

                cur[1] = max(cur[1], intervals[i][1]);

            }
            else{
                merge.push_back(cur);
                cur = intervals[i];
            }

        }

merge.push_back(cur);
return merge;


    }
};