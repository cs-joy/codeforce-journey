#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    bool isEqualTower1 = false;
    bool isEqualTower2 = false;
    bool topSame = false;

    while (t)
    {
        t--;

        int n, m;
        cin >> n >> m;

        string tower_1;
        string tower_2;
        cin >> tower_1 >> tower_2;

        for (int i=0; i<n && i<m; i++)
        {
            if (tower_1[i] == tower_1[i+1])
            {
                isEqualTower1 = true;
            }

            if (tower_2[i] == tower_2[i+1])
            {
                isEqualTower2 = true;
            }

            if (tower_1[n-1] == tower_2[m-1])
            {
                topSame = true;
            }
        }

    }

    (isEqualTower1)?cout << "YES\n" : cout << "NO\n";
    (isEqualTower2)?cout << "YES\n" : cout << "NO\n";
    (topSame)?cout << "Same\n" : cout << "not same\n";

    return 0;
}
