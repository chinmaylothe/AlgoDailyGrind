class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int j=0;

        while(i<n){
            char curr=chars[i];
            int count=0;
            while(i<n && curr==chars[i]){
                count++;
                i++;
            }
            chars[j++]=curr;

            if(count>1){
            for(char digit:to_string(count)){
                chars[j++]=digit;
            }
            }

        }
       return j++;
    }
};