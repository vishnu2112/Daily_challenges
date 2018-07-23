#include <stdio.h>
#include <string.h>

int main(void) {
	
	char s[100];
    int l;
    scanf("%s",s);
    l = strlen(s);
    int a = 26*(l+1)-l;
    printf("%d\n",a);
	return 0;
}
