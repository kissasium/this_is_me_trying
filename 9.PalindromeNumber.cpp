class Solution {
public:
    bool isPalindrome(int x) {

        int min = INT_MIN;
        int max = INT_MAX;

        if(x < 0)
        {
            return false;
        }
        else if(x == 0)
        {
            return true;
        }
        else
        {
            int rem = 0;
            int rev = 0;
            int val = x;
            while(x)
            {
                rem = x%10;
                x = x/10;
                if((rev > max/10) || (rev == max/10 && rem > 7))
                {
                    return false;
                }
                else if((rev < min/10) || (rev == min/10 && rem < -8))
                {
                    return false;
                }
                else {rev = rev*10 + rem;}
            }
            if(rev == val)
            {
                return true;
            }
        }
        return false;
        
    }
};