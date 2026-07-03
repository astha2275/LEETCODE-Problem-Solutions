class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int word_len = words[0].size();
        int word_count = words.size();
        unordered_map<string, int> freq;
        for(int i = 0; i<words.size(); i++){
            freq[words[i]]++;
        }
        int req_size = word_count * word_len;
        vector<int> ans;
        for(int off = 0; off<word_len; off++){
            unordered_map<string, int> seen;
            int found = 0;
            int l = off;
            for(int r = off; r + word_len <= s.size(); r += word_len){
                string w = s.substr(r, word_len);
                if(freq.count(w)){
                    seen[w]++;
                    if(seen[w] <= freq[w]) found++;
                    while(seen[w] > freq[w]){
                        string lw = s.substr(l, word_len);
                        seen[lw]--;
                        if(seen[lw] < freq[lw]) found--;
                        l += word_len;
                    }
                }
                else{
                    seen.clear();
                    found = 0;
                    l = r + word_len;
                }
                if(found == word_count){
                    ans.push_back(l);
                    string lw = s.substr(l, word_len);
                    seen[lw]--;
                    if(seen[lw] < freq[lw]) found--;
                    l += word_len;
                }
            }
        }
        return ans;
    }
};