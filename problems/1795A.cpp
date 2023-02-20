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
        char chr;
        int ct=0;

        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (s[i] == s[j])
                {
                    ct++;
                    if (ct == 1)
                    {
                        t.push_back(s[i]);
                        break;
                    }
                    //chr = s[i];
                    /*
                    if (s[i] != t[m-1])
                    {
                        isBeautifull= true;
                    }
                    else
                    {
                        isBeautifull = false;
                    }*/
                }
            }
        }

        t.push_back(chr);

        char ch;
        int cnt=0;

        for (int i=0; i<m; i++)
        {
            for (int j=i+1; j<m; j++)
            {
                if (t[i] == t[j])
                {
                    cnt++;
                    if (cnt == 1)
                    {
                        s.push_back(t[i]);
                        break;
                    }

                    //ch = t[i];
                    /*
                    if (t[i] != s[n-1])
                    {
                        isBeautifull= true;
                    }
                    else
                    {
                        isBeautifull = false;
                    }*/
                }
            }
        }

        //s.push_back(ch);

        //(isBeautifull) ? cout << "YES\n" : cout << "NO\n";
        cout << "t= ";
        for (int i=0; i<t.size(); i++)
        {
            cout << t[i] << " ";
        }

        cout << "s= ";
        for (int i=0; i<s.size(); i++)
        {
            cout << s[i] << " ";
        }

    }

    return 0;
}
