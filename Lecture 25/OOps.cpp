#include<iostream>
#include<string>
using  namespace std;

//Design
class Car {
	//Access : Private Public
	//Properties
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

	void Print() {
		cout << "The price of the Car " << price << endl;
		cout << "The model_no of the Car is " << model_no << endl;
		cout << "The Condition of the Car is " << Condition << endl;
		cout << "The Company Name is " << Company << endl;
	}
};

int main() {
	Car c;
	c.set_price(20);
	c.model_no = 220;
	cout << c.get_price() << endl;

	c.Condition = "Very Good";
	c.Print();
}






