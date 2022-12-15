#include<iostream>
#include <vector>

using namespace std;

vector<int> prefixSum_TO_originalArray(vector<int> arr)
{
    int n = arr.size();

    vector<int> originalArray(n-1, 0);

    for(int i=0; i<n; i++)
    {
        originalArray[i] = arr[i+1] - arr[i];
    }

    return originalArray;
}

void display(vector<int> orr)
{
    int n = orr.size();

    for(int i=0; i<n; i++)
    {
        cout << orr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {0, 1, 5, 3, 7, 7, -2, 1};

    vector<int> oarr = prefixSum_TO_originalArray(arr);
    display(oarr);

    return 0;
}