#include <iostream>
using namespace std;

int main()
{
    int a, int_a, int_b, int_c, int_d;
    double b, dub_a, dub_b, dub_c, dub_d;
    float c, float_a, float_b, float_c, float_d;

    cout << "Enter your numbers for the int division:";
    cin >> int_c >> int_d;
    a = int_c / int_d;
    b = int_c / int_d;
    c = int_c / int_d;
    cout << "\n\n\nInt = " << a << endl
        << "Double = " << b << endl
        << "Float = " << c << endl;

    cout << "Enter your numbers for the double division:";
    cin >> dub_c >> dub_d;
    a = dub_c / dub_d;
    b = dub_c / dub_d;
    c = dub_c / dub_d;
    cout << "\n\n\nInt = " << a << endl
        << "Double = " << b << endl
        << "Float = " << c << endl;

    cout << "Enter your numbers for the float division:";
    cin >> float_c >> float_d;
    a = float_c / float_d;
    b = float_c / float_d;
    c = float_c / float_d;
    cout << "\n\n\nInt = " << a << endl
        << "Double = " << b << endl
        << "Float = " << c << endl;

    cout << "Enter your numbers for the int modulus:";
    cin >> int_a >> int_b;
    a = int_a % int_b;
    b = int_a % int_b;
    c = int_a % int_b;
    cout << "\n\n\nInt = " << a << endl
        << "Double = " << b << endl
        << "Float = " << c << endl;

    cout << "\n\n\nanswer wont work for double modulus and float modulus\n\n\n";
    /*cin>> dub_a >> dub_b;
    a=dub_a%dub_b;
    b=dub_a%dub_b;
    c=dub_a%dub_b;
    cout<< "\n\n\nInt = " << a << endl
        << "Double = " << b << endl
        << "Float = " << c << endl;


    cout<< "Enter your numbers for the float modulus:";
    cin>> float_a >> float_b;
    a=float_a%float_b;
    b=float_a%float_b;
    c=float_a%float_b;
    cout<< "\n\n\nInt = " << a << endl
        << "Double = " << b << endl
        << "Float = " << c << endl;
   */

    return 0;
}
