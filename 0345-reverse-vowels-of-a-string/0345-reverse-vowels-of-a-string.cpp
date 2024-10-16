class Solution {
public:
bool isVowel(char c){
    c=tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
    }
    return false;
}

    string reverseVowels(string s) {
        string t="";
      

        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
               t+=s[i];
               s[i]='*';
            }
        }
         int j=t.length()-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*' && j>=0){
                s[i]=t[j];
                j--;
            }
        }
        return s;

    }
};