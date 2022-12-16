#include <iostream>
#include <vector>

using namespace std;

vector<int> findPrefixSums(vector<int> a)
{
    int64_t n = a.size();
    vector<int> b(n+1, 0);
    for(int i=0; i<n; i++)
    {
        b[i+1] = b[i] + a[i];
    }

    return b;
}

void display(vector<int> b)
{

    int n = b.size();
    for(int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n, 0);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    vector<int> b = findPrefixSums(a);
    display(b);
    
    return 0;
}