
#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        string noSpaces;
        string alphanumeric = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
        for(auto m : s){
            string mS(1,std::tolower(m));

            noSpaces =
             (m==' ' || !alphanumeric.contains(m)) ? noSpaces : noSpaces + mS;

        }

        int length = std::size(noSpaces);
        int runtime = (length%2 == 0) ? (length/2) : ((length+1)/2);

        bool palindrome = true;
        for (int i = 0; i<runtime; i++){
            string one(1,noSpaces[i]);
            string two(1,noSpaces[length-1-i]);
            
            palindrome = (one==two);
           
            cout << one << " :1: " << two << " " << palindrome << endl;
             if(!palindrome){break;}
        }

        std::cout << noSpaces << " " << s << endl;
        return palindrome;
    }
};


//