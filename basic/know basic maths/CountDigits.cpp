#include <iostream>
using namespace std;

// Method 1
void numberOfDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    cout << "Total Numbers : " << count << endl;
}

// Method 2
void numberOfDigit(int num)
{
    string str = to_string(num);

    cout << "Total Number method 2 : " << str.length() << endl;
}

int main()
{
    // method 1
    numberOfDigits(634);
    // method 2
    numberOfDigit(6874);
}