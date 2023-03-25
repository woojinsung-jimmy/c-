#include<iostream>
#include<string>

using namespace std;

int numArr[10][8] = {
	{0, 1, 1, 1, 0, 1, 1, 1}, // 0
	{0, 0, 0, 1, 0, 0, 1, 0}, // 1
	{0, 1, 0, 1, 1, 1, 0, 1}, // 2
	{0, 1, 0, 1, 1, 0, 1, 1}, // 3
	{0, 0, 1, 1, 1, 0, 1, 0}, // 4
	{0, 1, 1, 0, 1, 0, 1, 1}, // 5
	{0, 1, 1, 0, 1, 1, 1, 1}, // 6
	{0, 1, 1, 1, 0, 0, 1, 0}, // 7
	{0, 1, 1, 1, 1, 1, 1, 1}, // 8
	{0, 1, 1, 1, 1, 0, 1, 1}, // 9
};

int numCnt[10] = {6, 2, 5, 5, 4, 5, 6, 4, 7, 6};
string A, B;

int main(int argc, char** argv)
{
	int T;
	cin >> T;

	for (int tc = 0; tc < T; tc++) {
		cin >> A >> B;
		int answer = 0;

		// A와 B의 크기가 다를 경우
		if (A.size() != B.size()) {
			if (A.size() > B.size()) {
				for (int i = 0; i < A.size()-B.size(); i++) {
					answer += numCnt[A[i] - 48];
				}
				A = A.substr(A.size()-B.size(), A.size());
			}
			else {
				for (int i = 0; i < B.size()-A.size(); i++) {
					answer += numCnt[B[i] - 48];
				}
				B = B.substr(B.size()-A.size(), B.size());
			}
		}

		for (int i = 0; i < A.size(); i++) {
			for (int j = 0; j < 8; j++) {
				// numArr 겹치는 부분이라면 continue
				if (numArr[A[i]-48][j] == numArr[B[i]-48][j]) continue;
				else answer += 1;
			}
		}
		cout << answer << '\n';
	}
	
	return 0;
}
