#include<iostream>
#include<string>
#include<cstring>
using  namespace std;

//Constructor
//Copy Constructor
//Copy Assignment Operator
//Destructor

//2. Copy Constructor

class Car {

private:
	int price = 100;
public:
	int model_no = 110;
	string Condition = "Good";
	char Company[100] = "BMW";//Static Array
	char* Engine;//Dynamic Array

	//Member Functions

	//Setter
	void set_price(int x) {
		if (x < 60) {
			price = 60;
		} else {
			price = x;
		}
	}

	//Getter
	int get_price() {
		return price;
	}
	//Default Constructor with no parameters
	Car() {
		cout << "Inside My Own Default Constructor" << endl;
	}

	//Parameterised Constructor
	Car(int p, int m, string c, char* n, char* e) {
		cout << "Inside my Own Parameterised Constructor" << endl;
		if (p < 60) {
			price = 60;
		} else {
			price = p;
		}

		model_no = m;
		Condition = c;
		strcpy(Company, n);
		Engine = new char[(strlen(e)) + 1];
		strcpy(Engine, e);

	}

	//Copy Own Constructor

	Car(Car &d) {
		cout << "Inside My Own Copy Constructor " << endl;
		price = d.price;
		model_no = d.model_no;
		Condition = d.Condition;
		strcpy(Company, d.Company);
		Engine = new char[strlen(d.Engine) + 1];
		strcpy(Engine, d.Engine);
	}

	void Print() {
		cout << "The price of the Car " << price << endl;
		cout << "The model_no of the Car is " << model_no << endl;
		cout << "The Condition of the Car is " << Condition << endl;
		cout << "The Company Name is " << Company << endl;
	}
};

int main() {
	Car c;

	Car d(25, 007, "Bad", "Maruti", "Petrol");
	d.Print();

	int x = 10;
	int y = x;

	Car e(d);//Default Copy Constructor

	cout << endl << endl;

	e.Print();


}


















