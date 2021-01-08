class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s,t;
        for(string c: word1) s+=c;
        for(string c:word2) t+=c;
        return (t==s);
        
    }
};
