class Solution {
public:
    string generate(string& s) {
        int arr[26] = {0};

        for (char ch : s) {
            arr[ch - 'a']++;
        }

        string newWord = "";

        for (int i = 0; i < 26; i++) {
            if (arr[i] > 0) {
                newWord += string(arr[i], char(i + 'a'));
            }
        }

        return newWord;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> result;

        for (string& word : strs) {
            string key = generate(word);
            mpp[key].push_back(word);
        }

        for (auto& it : mpp) {
            result.push_back(it.second);
        }

        return result;
    }
};