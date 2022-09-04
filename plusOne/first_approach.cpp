class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>::reverse_iterator rit = digits.rbegin();
        int count = 0;
        if(digits.back()!=9)
        {
            digits[digits.size()-1] = digits.back()+1;
            return digits;
        }
        for(rit ; rit!= digits.rend(); rit++) // counts how mony 9s we have at the end and pops them
        {
            if(*rit == 9) 
            {
             count++;
             digits.pop_back();
            }
            else break;          
        }
        if(digits.empty()) // push 1 if all the elements were 9
        {
            digits.push_back(1);
        }
        else digits[digits.size()-1] = digits[digits.size()-1]+1; // increment once the last element if it was not 9
        for(int i=0; i<count;i++) // push zeros at the end
        {
            digits.push_back(0);
        }
        
        return digits;
    }
};