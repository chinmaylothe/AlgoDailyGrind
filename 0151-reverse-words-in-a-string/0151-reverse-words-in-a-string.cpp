class Solution {
public:
    string reverseWords(string s) {
      stringstream ss(s);
      vector<string>words;
      string word;

      while(ss>>word){
        words.push_back(word);

      }
      reverse(words.begin(),words.end());

      string t="";
      int n=words.size();
      for(int i=0;i<n-1;i++){
        t+=words[i];
        t+=" ";
      }
      t+=words[n-1];
      return t;
    }
};