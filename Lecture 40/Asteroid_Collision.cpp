#include<iostream>
#include<vector>
#include<stack>
using  namespace std;


class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>st;
        int n = a.size();
        for (int i = 0; i < n; i++) {
            int x = a[i];

            if (!st.empty() and st.top() > 0 and x < 0) {
                bool flag = 1;
                while (!st.empty() and st.top() > 0 and x < 0) {
                    if (abs(x) == abs(st.top())) {
                        flag = 0;
                        st.pop();
                        break;
                    } else if (abs(x) > abs(st.top())) {
                        flag = 1;
                        st.pop();
                        continue;
                    } else {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1) {
                    st.push(x);
                }
            } else {
                st.push(x);
            }
        }

        // while (!st.empty()) {
        //     cout << st.top() << " ";
        //     st.pop();
        // }

        vector<int>ans(st.size());

        int k = st.size() - 1;

        while (!st.empty()) {
            ans[k] = st.top();
            k--;
            st.pop();
        }

        return ans;
    }
};


int main() {

    int n;
    cin >> n;
    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    Solution obj;
    vector<int>ans = obj.asteroidCollision(v);

    for (auto x : ans) {
        cout << x << " ";
    }
}








