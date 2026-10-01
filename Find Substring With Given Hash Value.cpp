class Solution {
    private:
    int val(char c){
        return (c - 'a') + 1;
    }
    
    int hash(string s, int p, int m){
        long long hashV = 0;
        long long currentPower = 1;
        for(int i = 0; i < s.length(); i++){
            hashV += (val(s[i]) * currentPower)%m;
            currentPower = (currentPower * p) % m;
        }
        return hashV % m;
    }

public:
    string subStrHash(string s, int power, int modulo, int k, int hashValue) {
        string subStr;
        for(int i = 0; i <= s.length() - k; i++){
            subStr = s.substr(i, k);
            if(hash(subStr, power, modulo) == hashValue){
                break;
            }
        }
        return subStr;
    }
};