#include <iostream>
#include <vector>

using namespace std;

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
    display("pb", pb);
    
    return 0;
}