class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int m = matrix.length();
       int n = matrix[0].length();
       int start=0;
       int end=(m*n)-1;
       while(start<=end){
        int mid = start+(end-start)/2;
        int rowindex=mid/n;
        int colindex=mid%n;
        if(matrix[m][n]==target){
            return true;
        }
        else if(matrix[m][n]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       }
       return false;
    }
};