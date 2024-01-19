#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *createNewStr(int length)
{
	char *newStr;
	newStr = (char *)malloc((length + 1) * sizeof(char));
	return newStr;
}

char *uppercaseFirstLetter(char *str)
{
	if(str[0] >= 'a' || str[0] <= 'z'){
		str[0] = str[0] + ('A' - 'a');
	}
	return str;
}

char *insertNewLineStart(char *str)
{
	int i = 0;
	char *newStr = createNewStr(strlen(str) + 1);

	newStr[0] = '\n';
	while(str[i]){
		newStr[i + 1] = str[i];
		i++;
	}
	return newStr;
}

char *insertNewLineEnd(char *str)
{
	int i = 0;
	char *newStr = createNewStr(strlen(str) + 1);
	while(str[i]){
		newStr[i] = str[i];
		i++;
	}
	newStr[i] = '\n';
	return newStr;
}

void listFunctions()
{
	printf("%s",insertNewLineStart(insertNewLineEnd("upperCaseFirstLetter")));
}

int main()
{
	char name[6] = "yasin";
	printf("%s",uppercaseFirstLetter(name));

	listFunctions();
}
