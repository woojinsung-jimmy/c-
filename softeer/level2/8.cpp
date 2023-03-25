#include <iostream>
#include <string>
using namespace std;



int main(void)
{
    string sa(8,' ');
    for (int i=0;i<8;i++){
        cin >>sa[i];
    }
        if (sa=="12345678"){
            cout << "ascending";
        }
        else if (sa=="87654321"){
            cout << "descending";
        }
        else{
            cout << "mixed";
        }
    
}