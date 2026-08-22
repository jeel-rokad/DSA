class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0){
            // pop takes last digit from original no (123 % 10 = 3) 
            int pop = x % 10;
           
            // INT_MAX/10 is  2147483647
            // rev > INT_MAX/10 cross limit so we return 0

            // INT_MAX ends with 7 (2147483647), So if pop>7  the final number will cross the limit, return 0
           
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && pop > 7)) 
            return 0;

            // Same logic for negative no, INT_MIN/10 is -2147483648
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && pop < -8))
            return 0;

            // rev = 3, pop = 2 -> rev = 3*10 + 2 = 32 (build revrse no)
            rev = rev*10 + pop;
       
            // x = 123, 123 / 10 = 12(Remove last digit from org no)
            x = x / 10;
        }
        return rev;
    }
};