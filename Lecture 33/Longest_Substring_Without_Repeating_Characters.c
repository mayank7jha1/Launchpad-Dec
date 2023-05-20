class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_map<int, int>um;

        int Max_Till_Now = 0;

        for (int s = 0, e = 0; e < str.length(); e++) {

            if (um.count(str[e]) == 1) {
                s = max(s, um[str[e]] + 1);
            }

            um[str[e]] = e;

            Max_Till_Now = max(Max_Till_Now, e - s + 1);
        }

        return Max_Till_Now;
    }
};


// a b c d a b f g z y a


// e = 1, s = 0;

// s[e] = b;

// m[a] = 0;
// m[b] = 1;
// m[c] = 2;
// m[d] = 3;






