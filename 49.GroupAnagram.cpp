class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> anagramsGroup;

        for(string word: strs)
        {
            string sortedword = word;
            sort(sortedword.begin(),sortedword.end());
            anagramsGroup[sortedword].push_back(word);

        }

        vector<vector<string>> result;

        for(auto groups : anagramsGroup)
        {
            result.push_back(groups.second);
        }

       return result;
    }
};