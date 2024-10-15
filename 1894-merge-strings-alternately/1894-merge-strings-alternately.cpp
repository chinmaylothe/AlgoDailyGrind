class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
         int n=word1.length();
         int t=word2.length();
         int c=n+t;
          int j=0,k=0;
          while(j<n && k<t){
            result+=word1[j++];
            result+=word2[k++];
          }

          while(j<n){
            result+=word1[j++];
          }
           while(k<t){
            result+=word2[k++];
          }
         return result;
    }
};