class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int maxvowels=0,curr=0;
        int n=s.length();

        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                curr++;
            }
        }
        maxvowels=curr;

        for(int i=k;i<n;i++){
            if(isVowel(s[i-k])){
              curr--;
            }
            if(isVowel(s[i])){
                curr++;
            }
            maxvowels=max(maxvowels,curr);
        }

      
        return maxvowels;
    }
};