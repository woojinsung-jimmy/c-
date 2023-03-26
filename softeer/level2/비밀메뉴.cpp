#include<iostream>

using namespace std;

int M, N, K;
int secret[101];
int button[101];
string answer = "normal";

int main(int argc, char** argv)
{
	cin >> M >> N >> K;

	for (int i = 0; i < M; i++) {
		cin >> secret[i];
	}

	for (int i = 0; i < N; i++) {
		cin >> button[i];	
	}

	if (M <= N) {
		int left = 0;
		while (left < N-M+1) {

			int flag = 0;
			for (int i = 0; i < M; i++) {
				if (secret[i] != button[left+i]) flag = 1;
			}

			if (flag == 0) {
				answer = "secret";
				break;
			}

			left++;
		}
	}

	cout << answer;

	return 0;
}