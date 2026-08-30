#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    cout << count;
    return 0;
}
