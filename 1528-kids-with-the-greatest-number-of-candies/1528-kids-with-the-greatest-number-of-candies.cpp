class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        int n=candies.size();
        int maxi=candies[0];
        for(int i=1;i<n;i++){
            if(maxi<candies[i]){
                maxi=candies[i];
            }
        }

        for(int i=0;i<candies.size();i++){
            candies[i]+=extraCandies;
            if(candies[i]>=maxi){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
            

        }
        return result;
        
    }
};