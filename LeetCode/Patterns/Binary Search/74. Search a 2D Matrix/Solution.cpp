class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int m = matrix.size();
       int n = matrix[0].size();
       int start=0;
       int end=(m*n)-1;
       while(start<=end){
        int mid = start+(end-start)/2;
        int rowindex=mid/n;
        int colindex=mid%n;
        if(matrix[rowindex][colindex]==target){
            return true;
        }
        else if(matrix[rowindex][colindex]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       }
       return false;
    }
};