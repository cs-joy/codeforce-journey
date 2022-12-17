#include <iostream>
#include <vector>

using namespace std;

int getSum(int b[], int l, int r)
{
    return b[r] - b[l];
}

int main()
{
    int a[] = {2, 4, 6, 7, 8, 9, 1};

   
    cout << getSum(a, 2, 3);
    
    return 0;
}