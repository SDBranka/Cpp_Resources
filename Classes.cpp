#include <iostream>
#include <string>
using namespace std;

class SamClass
{
public:
	string name;
};

int main()
{
	SamClass SC;
	SC.name = "Sam Branka";
	cout << SC.name;

	return 0;
}
