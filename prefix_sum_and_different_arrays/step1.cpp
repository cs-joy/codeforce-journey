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
    cout << "[ ";
    for(int i=0; i<n; i++)
    {
        cout << orr[i] << " ";
    }
    cout << "]"<< endl;
}

int main()
{
    vector<int> arr = {0, 1, 5, 3, 7, 7, -2, 1}; // output:: [ 1 4 -2 4 0 -9 3 ]
    //vector<int> brr = { 0, 5, 9, 16, 18, 20, 19, 27 }; // output :: [ 5 4 7 2 2 -1 8 ]

    vector<int> oarr = prefixSum_TO_originalArray(arr);
    display(oarr);

    return 0;
}


// source:: https://codeforces.com/edu/course/3/lesson/10/1