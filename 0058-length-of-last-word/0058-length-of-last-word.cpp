class Solution {
public:
    int lengthOfLastWord(string s) {
          int count = 0;

        for(int i = s.length()-1; i>=0; i--){

            //check current char is not space
            if (s[i] != ' '){         
                 count++;
            }

            //if its space means it reach last word and so we started counting word    
            else if (count > 0){
                break;
            }
        }
        return count;
    }
};