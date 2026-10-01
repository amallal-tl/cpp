// Link : https://leetcode.com/problems/hash-divided-string/
class Solution {
    static const int ALPHABET_SIZE = 26;
public:
    string stringHash(string s, int k) {
        string result;
        for(int i = 0 ; i < s.length();  i += k){
            int value = 0;
            for(int j = i; j < (i + k); j++){
                value += s[j] - 'a';
            }
            value %= ALPHABET_SIZE;
            result+='a' + value;
        }
        return result;
    }
};

//s = abcd
//n = 4
//k = 2
//result = n/k
//substring = n/k 