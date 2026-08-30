// LEETCODE QUESTION NO. 7

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, N = 0;
    cout << "Enter an integer = ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        if ((N > INT_MAX / 10) || (N < INT_MIN / 10))
            break;
        N = ((N * 10) + r);
        n /= 10;
    }
    cout << "Reversed Number = " << N;
    return 0;
}