#include <iostream>
using namespace std;
const double PI = 3.14;
double areaOfCircle(double radius)
{
    int area;
    area = PI * radius;
    return area;
}

int main()
{
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    int result = areaOfCircle(radius);
    cout << "The Area of a circle is: " << result;
    return 0;
}