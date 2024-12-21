#include <iostream>
using namespace std;

int square(int number)
{
    return number * number;
}

int main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    int result = square(number);
    cout << "The Square is: " << result << "\n";
    return 0;
}