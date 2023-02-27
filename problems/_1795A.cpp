#include <iostream>
#include <vector>

using namespace std;

void solution()
{
    int n, m;
    cin >> n >> m;

    vector<char> u;
    vector<char> s(n);
    vector<char> t(m);

    vector<char> a;
    vector<char> b;

    for (int i=0; i<n; i++)
    {
        cin >> s[i];
        u.push_back(s[i]);
    }

    for (int i=0; i<m; i++)
    {
        cin >> t[i];
    }

    for (int i=m-1; i>=0; i--)
    {
        u.push_back(t[i]);
    }

    if (n == 1 && m == 1)
    {
        cout << "YES\n";
        return;
    }
    bool isEqual = false;
    for (int i=1; i<n; i++)
    {
        if (s[i-1] == s[i])
        {
            isEqual = true;
            break;
        }
    }

    if (!isEqual)
    {
        for (int i=1; i<m; i++)
        {
            if(t[i-1] == t[i])
            {
                isEqual = true;
                break;
            }
        }
    }

    if (isEqual)
    {
        for (int i=u.size()-1; i>0; i--)
        {
            bool equality = false;

            if (u[i] != u[i-1])
            {
                a.push_back(u[i]);
            }
            else
            {
                equality = true;
                a.push_back(u[i]);
                for (int j=i-1; j>=0; j--)
                {
                    b.push_back(u[j]);
                }
            }

            if (equality) break;
        }

        bool isAsame = false, isBsame = false;
        for (int i=0; i<a.size()-1; i++)
        {
            if (a[i] == a[i+1])
            {
                isAsame = true;
                break;
            }
        }

        for (int i=0; i<b.size()-1; i++)
        {
        if (b[i] == b[i+1])
            {
                isBsame = true;
                break;
            }
        }

        if (!isAsame && !isBsame)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "YES\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}
