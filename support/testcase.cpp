#include <iostream>

using namespace std;


int sum(int a, int b)
{
    return a+b;
}

int main()
{
  int n, case_no=1;
  cin >> n;
  while(n>0)
  {
    n--;
    
    int a, b;
    cin >> a >> b;
    
      
    cout << "Case #" << case_no << ": " << sum(a, b) << endl;
    case_no++;
  }
  return 0;
}
