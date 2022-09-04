class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry = true;
        for(int i = digits.size()-1; i>=0 && carry;i--)
        {
            carry = (digits[i]+1)/10; // carry 1 if digits[i]=9 or 0
            digits[i] = (digits[i]+1)%10; // the element is 0 if it was 9 or now it is incremented by one
        }
        if(carry) digits.insert(digits.begin(),1); // push front 1
        return digits;
    }
};