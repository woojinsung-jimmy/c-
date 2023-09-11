#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string trans(8, ' ');

    for (int i = 0; i < 8; i++)
    {
        cin >> trans[i];
    }
    if (trans == "12345678")
    {
        cout << "ascending";
    }
    else if (trans == "87654321")
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }
}