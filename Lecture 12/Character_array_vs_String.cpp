#include<iostream>
using  namespace std;

int length(char ch[]) {

	int count = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		count++;
	}
	return count;
}

void Concat(char ch[], char ch1[], char ch3[]) {
	int i;
	for (i = 0; ch[i] != '\0'; i++) {
		ch3[i] = ch[i];
	}

	for (int j = 0; ch1[j] != '\0'; j++) {
		ch3[i] = ch1[j];
		i++;
	}
	ch3[i] = '\0';

}



int main() {
	// char ch[100];
	// char ch1[100];
	// cin >> ch >> ch1;
	// cout << ch << " " << ch1 << endl;

	// cout << length(ch) << " " << length(ch1) << endl;

	// char ch3[100];
	// Concat(ch, ch1, ch3);


	string s, s1;
	cin >> s >> s1;
	cout << s.length() << endl;

	cout << s + s1 << endl;

	string s2 = s + s1;

	s2.push_back('z');
	cout << s2 << endl;
	s2 = s2 + 'z';

	s2 = s2 + "ZZZZZZZ";
	cout << s2 << endl;




}











