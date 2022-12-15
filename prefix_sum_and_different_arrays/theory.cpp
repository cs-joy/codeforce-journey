#include <iostream>
#include <vector>
#include <numeric> // partial_sum()

using namespace std;

void partial_Sum(); // prototype

vector<int> findPrefixSums(vector<int> a)
{
    int n = a.size();
    //cout << "n= " << n << endl;
    vector<int> b(n+1, 0);
    for(int i=0; i<=7; i++)
    {
        b[i+1] = b[i] + a[i];
    }

    return b;
}

vector<int> find_prefix_sums(vector<int>& array)
{
    int size = array.size();
    vector<int> prefixSums(size + 1, 0);
    for(int i=0; i<size; i++)
    {
        prefixSums[i+1] = prefixSums[i] + array[i];
    }

    return prefixSums;
}

void display(string str, vector<int> b)
{

    int n = b.size();
    cout << str << "=[ ";
    for(int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }

    cout << "]" << endl;
}


int main()
{
    vector<int> arr = { 5, 4, 7, 2, 2, -1, 8 };
    
    vector<int> b = findPrefixSums(arr);

    display("b", b);

    vector<int> pb = find_prefix_sums(arr);
    display("&b", pb);

    partial_Sum();
    
    return 0;
}


void partial_Sum()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int n = a.size();
    vector<int> prefix_SUMs(n+1, 0);
    partial_sum(a.begin(), a.end(), prefix_SUMs.begin() + 1);

    cout << "std::partial_sum()= ";
    for(int element: prefix_SUMs)
    {
        cout << element << " ";
    }
    cout << endl;
}