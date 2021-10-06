#include <iostream>
#include <string>
using namespace std;

/*class SamClass{
	public:
		string name;
};

int main()
{
	
	SamClass SC;
	SC.name = "Sam Branka";
	cout<< SC.name;

	return 0;	
}
*/

class SamClass
{
public:
	SamClass(string z)
	{
		setName(z);
	}
	void setName(string x)
	{
		name = x;
	}
	string getName()
	{
		return name;
	}

private:
	string name;
};

int main()
{
	SamClass SC("Sir Samual Jackson");
	cout << SC.getName();

	SamClass SC2("Sally McSalad");
	cout << SC2.getName();

	return 0;
}
