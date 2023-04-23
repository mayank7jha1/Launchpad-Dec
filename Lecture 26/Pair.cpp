#include<iostream>
using  namespace std;
template<typename T>

class Pair1 {
public:
	T first;
	T second;

	Pair1() {
		first = 0;
		second = 0;
	}

	void make_pair(T x, T y) {
		first = x;
		second = y;
	}



};


int main() {
	Pair1<int> p;
	p.make_pair(10, 20);

	cout << p.first << " " << p.second << " ";

}






