// Community Course » Prefix sums and difference arrays » Step 1 » Practice
// https://codeforces.com/edu/course/3/lesson/10/1/practice/contest/324365/problem/A

// https://codeforces.com/edu/course/3?locale=ru

#include <iostream>
#include <vector>
//#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> findPrefixSums(vector<ll> a)
{
    ll n = a.size();
    vector<ll> b(n+1, 0);
    for(int i=0; i<n; i++)
    {
        b[i+1] = b[i] + a[i];
    }

    return b;
}

void display(vector<ll> b)
{

    ll n = b.size();
    for(int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }
}




int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n, 0);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    vector<ll> b = findPrefixSums(a);
    display(b);
    
    return 0;
}