// C++ Program to print a matrix spirally
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define R 4
#define C 4

void spiralPrint(int m, int n, int a[R][C])
{
    int i, r = 0, c = 0;
    while (r < m && c < n)
    {
        for (i = c; i < n; ++i)
        {
            cout << a[r][i] << " ";
        }
        r++;
        for (i = r; i < m; ++i)
        {
            cout << a[i][n - 1] << " ";
        }
        n--;
        if (r<m)
        {
            for (i = (n-1); i >= c; --i)
            {
                cout<<a[m-1][i]<<" ";
            }
            m--;
        }
        if (c<n)
        {
            for ( i =m-1; i >= r; --i)
            {
                cout<<a[i][c]<<" ";
            }
            c++;
        }   
    }
}
int main()
{
    int a[R][C] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
    spiralPrint(R, C, a);
    return 0;
}
