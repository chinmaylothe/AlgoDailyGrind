class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        //returns the substring of str1 starting 
        //at index 0 and having
        //a length equal to the GCD of the sizes of str1 and str2.
        return (str1+str2==str2+str1)?
        str1.substr(0,gcd(size(str1),size(str2))):"";
    }
};