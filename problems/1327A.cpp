#include<iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        if((n%2 == k%2) && (n >= k*k))
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}