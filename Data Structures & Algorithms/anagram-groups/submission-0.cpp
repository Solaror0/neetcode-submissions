class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        std::cout<< std::size(strs) << endl;
        std::unordered_map<string, vector<string>> inventory;
        string sortedstr;
        for (int i = 0; i<size(strs); i++){
            sortedstr = sorted(strs[i]);
            //sorted = std::sort(strs[i].begin(),strs[i].end());
            inventory[sortedstr].push_back(strs[i]);
        }

        for (auto [key,value] : inventory){
            output.push_back(value);
        }
        return output;

    }
    bool stringEquals(string str1, string str2){
        if(std::size(str1)!= std::size(str2)){
            return false;
        }
        std::sort(str1.begin(), str1.end());
        std::sort(str2.begin(),str2.end());

        for(int i = 0; i<std::size(str1); i++){
            if(str1[i]!=str2[i]){return false;}
        }

        return true;
    }

    string sorted (std::string s) {
        std::sort(s.begin(),s.end());
        return s;
    };
};
