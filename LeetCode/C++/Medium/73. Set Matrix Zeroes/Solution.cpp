class Solution {
public:
   
 void setZeroes(vector<vector<int>>& mat) {
        int i ,j ;
        int n = mat.size();
       int  m=mat[0].size();
       vector<int> rows(n,0);

      vector<int> cols(m,0);


       for(i=0;i<n;i++){
           for(j=0;j<m;j++){
       
            if(mat[i][j] == 0){
            rows[i]=1;
            cols[j]=1;
            }

       
           }
       }
       
        
  for(i=0;i<n;i++){
           for(j=0;j<m;j++){

                if(rows[i]==1 || cols[j]==1){
                      mat[i][j]=0;}
     
           }
           }

    }
};