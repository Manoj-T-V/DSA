class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        
        // Count frequency of each character in string s
        for (char c : s) {
            freq[c]++;
        }
        
        // Create a priority queue of pairs (frequency, character)
        priority_queue<pair<int, char>> pq;
        for (auto p : freq) {
            pq.push({p.second, p.first});
        }
        
        // Build output string by adding characters from priority queue
        string result = "";
        while (!pq.empty()) {
            auto p = pq.top();
            pq.pop();
            result += string(p.first, p.second);
        }
        
        return result;
    }
};
