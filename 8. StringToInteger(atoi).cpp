class Solution {
public:
    int myAtoi(string s) {
        
        int i = 0;
        int sign = 1;
        int num = 0;
        bool x  = true;

        while(s[i] == ' ')
        {
            i++;
        }
    
       if(s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(s[i] == '+')
        {
            i++;
        }

        while(s[i]!='\0')
        {

          int rem = s[i] - '0';

            if(rem <=9 && rem >=0)
            {
               if((num > INT_MAX / 10) || (num == INT_MAX / 10 && rem > 7))
                {
                    return (sign == 1) ? INT_MAX : INT_MIN;
                }
                else
                {
                    num = num * 10 + rem;
                }
            }
            else
            {
                break;
            }
       
           i++;
        }

    num = num * sign;
    return num;
    
    }

};