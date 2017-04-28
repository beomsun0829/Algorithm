#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int h, w, n;
		scanf("%d %d %d", &h, &w, &n);

		int cnt = 1;
		bool sw = false;
		for (int i = 1; i <= w; i++){
			for (int j = 1; j <= h; j++){
				if (cnt == n){
					if (i >= 10)
						printf("%d%d\n", j, i);
					else
						printf("%d0%d\n", j, i);
					sw = true;
					break;
				}
				cnt++;
			}
			if (sw) break;
		}
	}
}