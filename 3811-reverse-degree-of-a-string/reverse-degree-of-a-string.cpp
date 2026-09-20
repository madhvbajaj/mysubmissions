class Solution {
public:
    int reverseDegree(string s) {
        int k=0;
        for(int i=0;i<s.size();i++)k += (26 - (s[i] - 'a')) * (i + 1);        
        return k;
    }
};