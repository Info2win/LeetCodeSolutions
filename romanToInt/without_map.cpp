class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        int add;
        char previous;
        for(int i=0; i<s.length();i++)
        {
            if(s[i]=='I')
                add=1;
            else if(s[i]=='V')
                {
                 if(previous=='I')
                add=3;
                else
                add=5;
                }
            else if (s[i]=='X')
            {
                if(previous=='I')
                add=8;
                else
                add=10;
            }
            else if (s[i]=='L')
                            {
                if(previous=='X')
                add=30;
                else
                add=50;
            }
            else if (s[i]=='C')
                            {
                if(previous=='X')
                add=80;
                else
                add=100;
            }
            else if (s[i]=='D')
                            {
                if(previous=='C')
                add=300;
                else
                add=500;
            }
            else if (s[i]=='M')
                            {
                if(previous=='C')
                add=800;
                else
                add=1000;
            }
            previous=s[i];
            result = result + add;
        
        }
    return result;    
    }
};