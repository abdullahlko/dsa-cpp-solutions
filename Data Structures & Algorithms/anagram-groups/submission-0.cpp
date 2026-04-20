class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

        for (const auto& s : strs) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            anagramMap[sortedS].push_back(s);
        }

        vector<vector<string>> result;

        for (const auto& [key, group] : anagramMap) {
            result.push_back(group);
        }

        return result;
    }
};