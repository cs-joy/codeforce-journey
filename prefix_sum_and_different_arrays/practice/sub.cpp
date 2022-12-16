#include <bits/stdc++.h>

using namespace std;

void display(vector<int> b)
{

    int n = b.size();
    for(int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int size = sizeof(a) / sizeof(a[0]);
    vector<int> b(size+1, 0);

    for(int i=0; i<size; i++)
    {
        b[i+1] = b[i] + a[i];
    }

    display(b);

    return 0;
}