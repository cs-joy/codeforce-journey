#include <iostream>

using namespace std;

int main()
{
    string str1, str2;;


    int n, m;
    cin >> n >> m;
    cin >> str1 >> str2;
    int c=0;

    bool isEqual;
    bool isBeautiful=false;

    for (int i=0; i<(n-1); i++)
    {
        c++;

        if (str1[i] != str1[i+1])
        {
            if (str1[n-1] != str2[m-1])
            {
                isBeautiful = true;
            }
        }

        for (int j=0; j<(m-1); j++)
        {
            if (str2[j] == str2[j+1])
            {
                if (str2[m-1] != str1[n-1])
                {
                    isB
                }
            }
        }

        /*
        if (str[i] == str[i+1])
        {
            isEqual = true;
        }
        else
        {
            isEqual = false;
        }*/

    }
/*
    if (str1[n-1] == str2[m-1])
    {
        isBeautiful = false; // "NO"
    }*/
    (isBeautiful)?cout << "YES\n":cout << "NO\n";


    //cout << isEqual;
    //cout << endl << c;
    //cout << isBeautiful;

    return 0;
}
