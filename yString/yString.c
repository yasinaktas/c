#include <stdio.h>

char *uppercaseFirstLetter(char *str)
{
	if(str[0] >= 'a' || str[0] <= 'z'){
		str[0] = str[0] + ('A' - 'a');
	}
	return str;
}

int main()
{
	char name[6] = "yasin";
	printf("%s\n",uppercaseFirstLetter(name));
}
