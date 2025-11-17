class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for (int i = 0; i < strs[0].size(); i++) {
        char c = strs[0][i]; // ki tu dau cua chuoi dau

        for (int j = 1; j < strs.size(); j++) {
            // neu nngan hon hoac khac c thi dung 
            if (i >= strs[j].size() || strs[j][i] != c) {
                return strs[0].substr(0, i); 
            }
        }
    }

    return strs[0];
}
};
