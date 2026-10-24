class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0, rightmax=0 , index=0,heightmax=height[0];
        for(int i =0;i<height.size();i++){
            if(height[i]>heightmax){
               heightmax = height[i];
                index = i;
            }

        }
        //left
        int water =0;
        for(int i=0;i<index;i++){
            if(leftmax>height[i]){
                water+=leftmax-height[i];

            }
            else{
                leftmax=height[i];
            }
        }
         for(int i=height.size()-1;i>index;i--){
            if(rightmax>height[i]){
                water+=rightmax-height[i];

            }
            else{
                rightmax=height[i];
            }
        }
        return water;
    }
};