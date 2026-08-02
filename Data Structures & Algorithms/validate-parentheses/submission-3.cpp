class Solution {
   public:
    bool isValid(string s) {
        std::stack<char> bracket;

        // '(', ')', '{', '}', '[' and ']'

        bool validity = true;

        std::unordered_map<char, char> pairs = {

            {'(', ')'}, {'{', '}'}, {'[', ']'}

        };

        if(s.length()==1){return false;}
        for (char m : s) {
            if (m == '(' || m == '[' || m == '{') {
                bracket.push(m);
                cout<<m<<endl;
            } else {
                if(bracket.empty()){return false;}
                char n = bracket.top();
                cout<<n<< " " << pairs[n] << " " << m << endl;
                if (pairs[n] != m) {
                    return false;
                }
                bracket.pop();
            }
        }

        if(bracket.empty()){return true;} else{ return false;}
    }
};
