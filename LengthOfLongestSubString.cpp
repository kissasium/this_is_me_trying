class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        string r = "";
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) 
        {
            bool f = false;
            for (int k = 0; k < r.length(); k++) 
            {
                if (s[i] == r[k]) 
                {
                    f = true;
                    break;
                }
            }

            if (f) 
            {
                r = r.substr(r.find(s[i]) + 1);
            }

            r += s[i];
            maxLength = max(maxLength, (int)r.length());
        }

        return maxLength;
    }
};
