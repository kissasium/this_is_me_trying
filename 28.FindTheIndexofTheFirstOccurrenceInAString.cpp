class Solution {
public:
    int strStr(string haystack, string needle) {

     int length_haystack = haystack.length();
     int length_needle = needle.length();

        int len = 0;  // if the len of the substring matches needle's length
        
        if(needle == "")
        {
            return 0;
        }

        for(int i=0; i<length_haystack - length_needle + 1; i++)
        {
            int store = i;
            bool flag = false;
            len = 0;
             for(int j = 0; j<length_needle; j++)
             {
                if(haystack[store] == needle[j])
                {
                    ++len;
                    ++store;
                }
                else
                {
                    break;
                }
                
             }
             if(len == length_needle)
                {
                    return i;
                }
        }

        return -1;
        
    }
};