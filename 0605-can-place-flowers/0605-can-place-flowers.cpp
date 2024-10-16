class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        int size=flowerbed.size();
        for(int i=0;i<size;i++){
            if(flowerbed[i]==0){
                bool leftempty=(i==0||flowerbed[i-1]==0);
                bool rightempty=(i==size-1||flowerbed[i+1]==0);

                if(leftempty && rightempty){
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        if(count>=n){
            return true;
        }
        return false;
    }
};