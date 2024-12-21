#include <iostream>
using namespace std;
float calculatePercentage(float om, float tm)
{
    float percentage = (om / tm) * 100;
    return percentage;
}
int main()
{
    float om, tm;
    cout << "Enter the obtained marks: ";
    cin >> om;
    cout << "Enter the total marks: ";
    cin >> tm;
    float result = calculatePercentage(om, tm);
    cout << "The percentage is: " << result << "%" << endl;
    return 0;
}