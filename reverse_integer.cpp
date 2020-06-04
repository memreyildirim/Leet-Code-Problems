/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:
Input: 123
Output: 321

Example 2:
Input: -123
Output: -321

Example 3:
Input: 120
Output: 21

Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. 
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

*/
class Solution {
public:
    int reverse(long long x) {
        
        vector<int> last;
        int absx = abs(x),i=10;
        long long result = 0;
        while(absx>0){
            last.push_back(absx%10);
            absx /=i;
        }   
                

        for (auto d : last)  
            result = result * 10 + d;
        
        if(result>=INT_MAX||result<=INT_MIN){return 0;}
        if(x<0){return (-1*result);}
       
        return result;     
    }
    
};
