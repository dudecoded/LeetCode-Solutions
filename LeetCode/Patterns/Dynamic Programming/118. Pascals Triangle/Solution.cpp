class Solution {
public:
    vector<vector<int>> generate(int numrows) {
    vector<vector<int>>pas;

    for(int r=0; r<numrows;r++){
        vector<int>row(r+1,1);
    
    for(int c=1 ; c<r;c++){
        row[c] = pas[r-1][c-1] + pas[r-1][c];
    }

    pas.push_back(row);
    }
    return pas;
    }
};