
#include <cstdio>

int arr[1000001]; //전역 변수 선언시 자동으로 0으로 초기화.

void findPrimeNum(int m, int n)
{
	//0과 1은 소수가 아니기에 1로 체크해준다.
	arr[0] = 1;
	arr[1] = 1;

	//n이하이기 때문에 n+1임.
	for (int i = 2; i < n+1; i++) { 
		/* 배수의 시작은 4부터이다. 즉, 숫자 3이하까지는 소수에 해당하는 부분이기 때문에 2*i부터 시작해도 상관이 없다.
		j+=i는 i만큼 더해지는데, 처음에는 2씩, 다음에는 3씩 더해진다. 즉, 배수의 역할을 하고 있다.
		ex) i가 2이면 2의배수, 3이면 3의 배수의 역할 */
		for (int j = 2*i; j < n+1; j += i) {
			if (arr[j] == 0) {
				arr[j] = 1; //배수는 배열에서 1로 체크된다.
			}
		}
	}

	for (int i = m; i < n+1; i++) {
		if (arr[i] == 0) printf("%d\n", i);
	}
}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);

	findPrimeNum(m, n);

	return 0;
}