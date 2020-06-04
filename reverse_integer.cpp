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
