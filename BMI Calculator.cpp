/*https://www.youtube.com/watch?v=b9wialxvcVA*/

#include <iostream>
#include <string>
using namespace std;

//header file
class BMI
{
public:
	BMI();

	BMI(string, int, double);

	~BMI();
	cs
		string
		getName() const;
	int getHeight() const;
	double getWeight const;

private: //member variables
	string newName;
	int newHeight;
	double newWeight;
};

int main()
{
	string name;
	int height;
	double weight;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your height in inches: ";
	cin << height;
	cout << "Enter your weight in pounds: ";
	cin >> weight;

	BMI.BMI()
	{
		newHeight = 0;
		newWeight = 0.0;
	}
	BMI student_1(name, height, weight)

		return 0;
}
