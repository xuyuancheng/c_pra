#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	int i=0;
	char a[100];
	while(argv[0][i] != '\0')
		a[i++]=tolower(argv[0][i]);
	a[i] = '\0';
	printf("%s",a);
}
