#include<stdio.h>

int main() {
	char str[] = "I love my      India       :)";
	char a[sizeof(str)];
	int i,j = 0;
	while(str[i]!='\0') {
		if(str[i] == ' ') {
			if(str[i-1] == ' ') {
				int k = i+1;
				while(str[k] == ' ') {
					k++;
				}
				i = k;
				a[j] = str[i];
			}
		}
		a[j] = str[i];
		i++;
		j++;
	}
	for(int k = 0; k < j;k++) {
		printf("%c",a[k]);
	}
}
