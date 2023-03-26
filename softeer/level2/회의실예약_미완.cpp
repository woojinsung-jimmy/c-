#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int n,m;
map<string,int> room;
int schedule[51][19];
vector<string> answer[51];


int main()
{
    cin>>n>>m;

    for (int i = 0; i < n; i++) {
		string car;
		cin >> car;
		room[car] = i;
	}
    
}