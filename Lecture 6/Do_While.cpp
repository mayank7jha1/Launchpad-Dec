#include<iostream>
using  namespace std;

int main() {
	// int i = 11;

	// do {
	// 	cout << i << " ";
	// 	i++;
	// } while (i <= 10);


	// if (i >= 10) {
	// 	cout << "Mayannk" << endl;
	// } else {
	// 	cout << "Samyak" << endl;
	// }


	// // ?:

	// (i >= 10) ? (cout << "Mayannk") : (cout << "Samyak");

	int i = 30;

	if (i % 5 == 0) {
		if (i % 3 == 0) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	} else {
		cout << "Wrong" << endl;
	}



	((i % 5 == 0) ? ((i % 3 == 0) ? (cout << "Yes") :
	                 (cout << "No")) : (cout << "Wrong"));



















}