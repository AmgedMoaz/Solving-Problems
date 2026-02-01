#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string Name;
        cin >> Name;
        bool flage = false;
    for ( int i = 0 ; i < (Name.size()-2) ; i++)
      {
        if ( (Name[i] == '0' && Name[i+1] == '1' && Name[i+2] == '0') ||
         (Name[i] == '1' && Name[i+1] == '0' && Name[i+2] == '1') )
        {
            cout << "Good\n";
            flage = true;
            break;
        }

      }
      if(flage == false)
      {
         cout << "Bad\n";
      }
    }            

    return 0;
}