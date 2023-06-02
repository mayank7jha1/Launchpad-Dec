class Solution {
public:
    vector<int> advantageCount(vector<int>& a, vector<int>& b) {

        vector<int>ans(a.size(), -1);
        sort(a.begin(), a.end());
        vector<pair<int, int>>v;

        for (int i = 0; i < b.size(); i++) {
            v.push_back({b[i], i});
        }
        sort(v.begin(), v.end());

        vector<int>extra;
        int j = 0;

        for (int i = 0; i < a.size(); i++) {
            if (a[i] > v[j].first) {

                int index = v[j].second;

                ans[index] = a[i];
                j++;
            } else {
                extra.push_back(a[i]);
            }
        }

        if (extra.size() == 0) {
            return ans;
        }

        j = 0;
        for (int i = 0; i < a.size(); i++) {

            if (ans[i] == -1) {
                ans[i] = extra[j];
                j++;
            }

            if (j == extra.size()) {
                break;
            }
        }

        return ans;
    }
};












