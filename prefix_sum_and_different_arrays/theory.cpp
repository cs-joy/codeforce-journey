#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> b);

vector<int> findPrefixSums(vector<int> a)
{
    int n = a.size();
    //cout << "n= " << n << endl;
    vector<int> b(n+1, 0);
    for(int i=0; i<=7; i++)
    {
        b[i+1] = b[i] + a[i];
        //cout << b[i] << " ";
    }
    //cout << endl;
    display(b);
    return b;

}

void display(vector<int> b)
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
    vector<int> arr = { 5, 4, 7, 2, 2, -1, 8 };
    
    findPrefixSums(arr);


    return 0;
}