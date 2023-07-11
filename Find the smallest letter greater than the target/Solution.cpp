class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //int num = target-'0';
        auto idx = upper_bound(letters.begin(), letters.end(), target);
        return idx == letters.end() ? letters[0] : *idx;
    }
};
