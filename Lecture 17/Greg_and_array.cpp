#include<bits/stdc++.h>
using namespace std;
#define int long long
#define size 100100


int32_t main() {
	int n, m, k;
	cin >> n >> m >> k;
	int a[n + 1] = {0};//n+1 kyu liya hain://1 based index:

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}


	int l[size] = {0}, r[size] = {0}, d[size] = {0};
	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}

	//Query ka input:
	//KOnsa operation kitni bar karna hain:

	int operations_count[size] = {0};//Konsa operation kitni bar karna hain.

	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		operations_count[x] = operations_count[x] + 1;
		operations_count[y + 1] = operations_count[y + 1] - 1;
	}

	//Is operation array ka aapko lena hain prefix sum:

	for (int i = 1; i <= m; i++) {
		operations_count[i] = operations_count[i - 1] + operations_count[i];
	}

	//Tumhe mil jaaayega ki konsa operation kitni bar karna hain.


	int difference[size] = {0};

	for (int i = 1; i < size; i++) {
		//aap operation ko perform karte ho!!!
		difference[l[i]] = difference[l[i]] + (operations_count[i] * d[i]);
		difference[r[i] + 1] = difference[r[i] + 1] - (operations_count[i] * d[i]);
	}

	// //Iske baad difference array build hogya ab aapko iska prefix sum lena hain:


	for (int i = 1; i < size; i++) {
		difference[i] = difference[i - 1] + difference[i];
	}


	// //Add difference  array to your original array:

	for (int i = 1; i <= n; i++) {
		a[i] = a[i] + difference[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
}


