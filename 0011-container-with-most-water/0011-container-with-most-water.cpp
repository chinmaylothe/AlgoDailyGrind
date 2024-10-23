class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
       int max_area=0;

        while(l<r){
           int h=min(height[l],height[r]);
           int distance=r-l;
           int curr_area=h*distance;
           max_area=max(curr_area,max_area);

           if(height[l]<height[r]){
            l++;
           }else{
            r--;
           } 
        }
          
       return max_area;
    }
};