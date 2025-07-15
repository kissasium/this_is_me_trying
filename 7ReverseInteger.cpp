class Solution {
public:
    int reverse(int x) 
    {
        int reverse = 0;
        int min = INT_MIN;
        int max = INT_MAX;
        int rem = 0;

        while(x)
        {
            rem = x%10;  
            x = x/10;  

            if (reverse > max/10 || (reverse == max/10 && rem>7))
                return 0;
            if (reverse < min/10 || (reverse == min/10 && rem<-8))
                return 0;

             reverse = (reverse*10) + rem; 
          
        }

        return reverse;
        
    }
};