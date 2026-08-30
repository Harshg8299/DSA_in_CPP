// LEETCODE QUESTION NO. 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, N = 0;
    cout << "Enter a Number = ";
    cin >> x;
    bool b = false;
    while (x > 0)
    {
        int r = x % 10;
        N = (N * 10) + r;
        x = x / 10;
    }
    if (N == x)
        b = true;
    if (b)
        cout << "The Number is a Palindrome." << endl;
    else
        cout << "The Number is not a Palindrome." << endl;
    return 0;
}