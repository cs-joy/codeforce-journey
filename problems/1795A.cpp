#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        t--;

        int n, m;
        cin >> n >> m;

        vector<char> s(n);

        for (int i=0; i<n; i++)
        {
            cin >> s[i];
        }

        vector<char> t(m);
        for (int j=0; j<m; j++)
        {
            cin >> t[j];
        }

        bool isBeautifull;

        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (s[i] == s[j])
                {
                    if (s[i] != t[m-1])
                    {
                        isBeautifull= true;
                    }
                    else
                    {
                        isBeautifull = false;
                    }
                }
            }
        }

        for (int i=0; i<m; i++)
        {
            for (int j=i+1; j<m; j++)
            {
                if (t[i] == t[j])
                {
                    if (t[i] != s[n-1])
                    {
                        isBeautifull= true;
                    }
                    else
                    {
                        isBeautifull = false;
                    }
                }
            }
        }

        (isBeautifull) ? cout << "YES\n" : cout << "NO\n";

    }

    return 0;
}
