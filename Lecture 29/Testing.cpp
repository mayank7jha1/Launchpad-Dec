#include<iostream>
#include<vector>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];				//Static Array
	int *d = new int[n];	//Dynamic Array
	vector<int>b;			//Vector Without Size
	vector<int>c(n);		//Vector with size

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = x;			//Static Array
		d[i] = x;			//Dyamic Array
		b.push_back(x);		//Vector Without Size
		c[i] = x;			//Vector with size
	}

	//Logic and STL : Algorithms: Sort and Reverse

	sort(a, a + n);
	sort(d, d + n);

	//Container Iterators: a+0 in array returns address of the first block
	// and for the similar address in container you have to use .begin

	sort(b.begin(), b.end());
	sort(c.begin(), c.end());


	reverse(a, a + n);
	reverse(d, d + n);


	reverse(b.begin(), b.end());
	reverse(c.begin(), c.end());
}










