class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); // Get the no of digits
        
        for (int i = n - 1; i >= 0; --i) {

            // If the current digit is < 9, simply add 1
            // bcz no carry-over is needed
            if (digits[i] < 9) {
                digits[i]++;
                return digits; 
            }
            
            // If the digit is 9, adding 1 makes it 0 and carry over the 1
            digits[i] = 0;
        }
        
        // If we exit the loop, it means all number inside array are 9 (Ex. 999 + 1 = 1000)
        // than need to add new 1 at the very front of the array
        digits.insert(digits.begin(), 1);
        return digits;  
    }
};