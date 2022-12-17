#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> b, int l, int r)
{
    return b[r] - b[l];
}

vector<int> pRs(vector<int> b)
{
    int n = b.size();
    vector<int> a(n+1, 0);
    for(int i=0; i<n; i++)
    {
        a[i+1] = a[i] + b[i];
    }

    return a;
}

void dis(vector<int> b)
{
    int n = b.size();
    for(int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a = {2, 4, 6, 7, 8, 9, 1};


    dis(pRs(a));
     
    int left = 2;
    int right = 6;
    

    cout << getSum(pRs(a), left, right);
    
    return 0;
}