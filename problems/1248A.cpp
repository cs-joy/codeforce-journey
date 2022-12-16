#include<iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[2] = {0};
        while(n--)
        {
            ll x;
            cin >> x;

            ++a[x & 1];
        }

        ll m;
        cin >> m;
        ll b[2] = {0};
        while(m--)
        {
            ll x;
            cin >> x;

            ++b[x & 1];
        }

        
        
        ll answer = a[0] * b[0] + a[1] * b[1];
        cout << answer << endl;
    }

    return 0;
}


/*
input::
3
3
1 3 2
2
0 3
1
1
1
1
1
2
1
1


output::
3
1
0
*/