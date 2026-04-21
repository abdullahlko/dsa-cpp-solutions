class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string result = "";
        string first = strs[0];

        for (int i = 0; i < first.length(); i++) {
            char ch = first[i];

            for (int j = 1; j < strs.size(); j++) {
                // If index out of bound OR mismatch
                if (i >= strs[j].length() || strs[j][i] != ch) {
                    return result;
                }
            }

            result += ch;
        }

        return result;
    }
};