// LEETCODE QUESTION NO. 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter the Number: ";
    cin >> x;
    int s = 0, n = x;
    bool b = false;
    while (n > 0)
    {
        if (s < pow(-2, 31) / 10 || s > (pow(2, 31) - 1) / 10)
            return 0;
        s = s * 10 + (n % 10);
        n = n / 10;
    }
    if (s == x)
        b = true;
    if (b)
        cout << "The Number is a Palindrome." << endl;
    else
        cout << "The Number is not a Palindrome." << endl;
    return 0;
}