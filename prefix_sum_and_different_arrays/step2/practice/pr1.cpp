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

ll display(vector<ll> a)
{
    ll n = a.size();
    
    int prefixSum = a[n-1];
    return prefixSum;
}


int main()
{
    ll n;
    cin >> n; // n contains one integer and this is the number of array elements.
    vector<ll> a(n, 0);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    /*
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    */

    ll request, l, r, sum=0;
    cin >> request;
    for(int i=0; i<request; i++)
    {
        cin >> l >> r;
        
        
    }

    return 0;
}