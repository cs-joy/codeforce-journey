#include<iostream>
#include <vector>

#include "hover.hpp"

using namespace std;

typedef long long ll;

ll feedback()
{
    int n = 10;

    vector<int>a(n, 0);
    int incre = 0;
    
    for(int i = 0; i<n; i++)
    {
        a[i] = incre;
        incre++;
    }
    
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int x = a[n-1];
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            sum = a[i] + a[j];
        }
    }


    return sum;
}


vector<int> pRs(vector<int> b)
{
    int n = b.size();
    vector<int> a(n+1, 0);
    for(int i=0; i<=n; i++)
    {
        a[i+1] = a[i] + b[i];
    }

    ll x = a[n-1];

    return a;
}

int disyplay(vector<int> a)
{
    int n = a.size();
    
    int last = a[n-1];
    return last;
}

int main()
{
    /*
    int ar[] = {3, 5, 6, 7};
    int n = sizeof(ar)/sizeof(ar[0]);
    int sum = 0;
    for(int i=0; i<=n-2; i++)
    {
        sum += ar[i];
    }

    cout << sum << endl;
    cout << ar[n-2];
    */
   /*
    vector<int> a = {-1, -2, 3, 0, 4};
    int res = disyplay(pRs(a));
    cout << res;
    */

     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
     int n = sizeof(a) / sizeof(a[0]);

     int left, right;

     cin >> left >> right;

     int lpos = n - left;
     int rpos = n - right;
     int sum=0;

     for(int i=left; i<=right; i++)
     {
        for(int j=left+1; j<=right; j++)
        {
            cout << a[j] << " ";
        }
     }
     cout <<  endl;

    //cout << feedback();


    Hover::coutln("Hello World!"); // this line connect with the header file `#include "hover.hpp"` only for understand the return comment process for dev. nothing more.!

   return 0;
}