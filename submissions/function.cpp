#include <bits/stdc++.h>
using namespace std;

int sumOf(int n)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
        res += i;
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << sumOf(n);

    return 0;
}