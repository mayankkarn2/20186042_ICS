#include<stdio.h>
int main() {
	char str[] = "Mayank";
	for(int i = 0; i < (sizeof(str))/2;i++) {
		char temp = str[i];
		str[i] = str[(sizeof(str)-1)-i];
		str[(sizeof(str)-1)-i]=temp;
	}
	for(int i = 1; i < sizeof(str);i++) {
		printf("%c",str[i]);
	}
}
