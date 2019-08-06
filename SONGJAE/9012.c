#include<stdio.h>

int main() {
	int n;
	char c[51];
	char s[10000];
	
	
	scanf("%d", &n);
	
	for (int j = 0;j < n;j++) {
		
		int count = 0;
		scanf("%s", c);

		for (int i = 0;i < 50;i++) {

			if (c[i] == '\0') {
				break;
			}
			if (c[i] == '(') {
				count++;
				
			}
			else if(c[i]==')'&&count>0) {
				count--;
				
			}
			else if (c[i] == ')'&&count <= 0) {
				count--;
				break;
			}
		}

		if (count == 0) {
			s[j]='Y';
		}
		else {
			s[j]='N';
		}
	}

	for (int k = 0;k < n;k++) {
		if (s[k] == 'Y')
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
