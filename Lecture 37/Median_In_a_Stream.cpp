#include<iostream>
#include<queue>
#include<algorithm>
using  namespace std;



class MedianFinder {
public:
    priority_queue<int>Maxi;
    priority_queue<int, vector<int>, greater<int>>Mini;
    MedianFinder() {
    }

    void addNum(int num) {
        Maxi.push(num);
        Mini.push(Maxi.top());
        Maxi.pop();

        if (Mini.size() > Maxi.size()) {
            Maxi.push(Mini.top());
            Mini.pop();
        }
    }

    double findMedian() {
        if ((Maxi.size() + Mini.size()) % 2 == 0) {
            double ans = (double)((Mini.top() + Maxi.top()) / 2);
            return ans;
        } else {
            return Maxi.top();
        }
    }
};

int main() {
    MedianFinder obj;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        obj.addNum(x);
        cout << obj.findMedian() << endl;
    }
}