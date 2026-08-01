#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int wLen = words[0].size();      // length of each word
        int wCount = words.size();       // number of words
        int totalLen = wLen * wCount;    // total concatenated length

        if (s.size() < totalLen) return result;

        unordered_map<string, int> wordMap;
        for (string &w : words) wordMap[w]++;

        // Check each possible offset (0, 1, ..., wordLength - 1)
        for (int start = 0; start < wLen; start++) {
            int left = start;
            int count = 0;
            unordered_map<string, int> tempMap;

            for (int j = start; j + wLen <= s.size(); j += wLen) {

                string word = s.substr(j, wLen);

                if (wordMap.count(word)) {
                    tempMap[word]++;
                    count++;

                    // If excess, move left pointer
                    while (tempMap[word] > wordMap[word]) {
                        string leftWord = s.substr(left, wLen);
                        tempMap[leftWord]--;
                        left += wLen;
                        count--;
                    }

                    // Found a full concatenation
                    if (count == wCount) {
                        result.push_back(left);
                    }
                }
                else {
                    // Reset window
                    tempMap.clear();
                    count = 0;
                    left = j + wLen;
                }
            }
        }

        return result;
    }
};
