class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());
        int length1 = std::size(s);
        int length2 = std::size(t);
        if(length1 != length2){return false;}
        for(int i = 0; i<length1; i++){
            if (s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};
