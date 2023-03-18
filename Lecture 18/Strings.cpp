#include<iostream>
using  namespace std;

int main() {

	char ch[100] = "Mayank";

	char ch1[10][100] = {"Mayank", "Samyak"};

	char ch2[10][100] = {{"Mayank"}, {"Samyak"}};


	cout << ch2[1][4] << endl;
	cout << ch2[1] << endl;




}