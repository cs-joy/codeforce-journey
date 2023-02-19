#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t>0)
    {
        t--;
        
        char user_char;
        cin >> user_char;
        bool isFound;
        
        switch(user_char)
        {
          case 'c':
            isFound = true;
            break;
          case 'o':
            isFound = true;
            break;
          case 'd':
            isFound = true;
            break;
          case 'e':
            isFound = true;
            break;
          case 'f':
            isFound = true;
            break;
          case 'r':
            isFound = true;
            break;
          case 's':
            isFound = true;
            break;
          default:
            isFound = false;
            break;
        }
        
        (isFound)? cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}
