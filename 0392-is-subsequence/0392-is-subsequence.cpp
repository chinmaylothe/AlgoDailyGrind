class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=t.length();
          int j=0;
          int m=s.length();
        for(int i=0;i<l;i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        return (j==m);
    }
};