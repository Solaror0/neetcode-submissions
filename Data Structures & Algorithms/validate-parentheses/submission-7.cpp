class Solution {
   public:
    bool isValid(string s) {
        std::stack<char> bracket;

        // '(', ')', '{', '}', '[' and ']'


        std::unordered_map<char, char> pairs = {

            {'(', ')'}, {'{', '}'}, {'[', ']'}

        };

        if(s.length()==1){return false;}
        for (char m : s) {
            if (m == '(' || m == '[' || m == '{') {
                bracket.push(m);
            } else {
                if(bracket.empty()){return false;}
            
                if (pairs[bracket.top()] != m) {
                    return false;
                }
                bracket.pop();
            }
        }

        if(bracket.empty()){return true;} else{ return false;}
    }
};
