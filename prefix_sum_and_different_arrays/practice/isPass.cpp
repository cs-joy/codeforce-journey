#include <iostream>
#include <vector>

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