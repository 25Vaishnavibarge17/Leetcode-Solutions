class Solution {
public:
    bool checkIfPangram(string sentence) {
    unordered_set<char> snt (sentence.begin(), sentence.end());         
    return snt.size()==26;  
    }
};


