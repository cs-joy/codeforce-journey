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

        // copy second tower
        vector<char> t2(m);
        for (int j=0; j<m; j++)
        {
            t2[j] = t[j];
        }

        int c;
        char ch, pos;

        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (s[i] == s[j])
                {
                    c=1;
                    ch = s[i];
                    pos = i;
                }
                else
                {
                    c=0;
                }
            }
        }

        if (c == 1)
        {
            t.push_back(ch);
            s.pop_back();
        }

        bool f_beautifull = false;
        if (s[s.size() - 1] != s[s.size() - 2])
        {
            f_beautifull = true;
        }

        bool t_beautifull = false;
        if (t[t.size() - 1] != t[t.size() - 2])
        {
            t_beautifull = true;
        }

        if (f_beautifull == true && t_beautifull == true)
        {
            /*
            if (t_beautifull)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }*/
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
/*
        if (t_beautifull)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            */

    }
    return 0;
}

