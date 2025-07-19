class Solution {
public:
    string intToRoman(int num) {
       map<int, string> myMap = {
            {1, "I"},
            {4, "IV"},
            {5, "V"},
            {9, "IX"},
            {10, "X"},
            {40, "XL"},
            {50, "L"},
            {90, "XC"},
            {100, "C"}, 
            {400, "CD"},
            {500, "D"},
            {900, "CM"},
            {1000, "M"}
        };

       string result = "";
       for (auto it = myMap.rbegin(); it != myMap.rend(); ++it) {

        int x = num/it->first;
        if(x!=0)
        {
                while(x!=0)
                {
                  result = result + it->second;
                  x=x-1;
                }
                num = num % it->first;
        }

       }
    
    return result;
}

       
    
};