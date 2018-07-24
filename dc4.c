#include <stdio.h>
#include <string.h>

int main(void) {
	
	char s[1000000];
    int n,count=0;
    scanf("%d",&n);
    scanf("%s",s);
    
    if(strlen(s)>26)
    {
	count = -1;
	}
    else
    {
    for(int i=0;i<n;i++)
    {
		for(int j=i+1;j<n;j++)
		
		if(s[i]==s[j])
		{
			count++;
			break;
		}
	}
}

    printf("%d",count);
	return 0;
}
