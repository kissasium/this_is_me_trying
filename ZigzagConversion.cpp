class Solution {
public:
    string convert(string s, int numRows) 
    {
        if (numRows <= 1 || numRows >= s.size()) 
        {
            return s;
        }

        string result;
        int step = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) 
        {
            for (int j = i; j < s.size(); j += step) 
            {
                result += s[j];
                int middle = j + step - 2 * i;
                if (i != 0 && i != numRows - 1 && middle < s.size()) 
                {
                    result += s[middle];
                }
            }
        }

        return result; 
    }
};
