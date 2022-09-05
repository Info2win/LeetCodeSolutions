class Solution {
public:
    long count=0;
    int mySqrt(int x) {
       while(1)
       {
           if(x == count*count)
           {
               return count;
           }
           else if (x < count*count)
           {
               return  count-1;
           }
           count++;          
       }  
    }
};