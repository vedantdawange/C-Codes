#include <conio.h>
#include <stdio.h>
int len(char string1[])
{
	int i, leng = 0;
	for (i = 0; string1[i] != '\0'; i++)
	{
		leng = leng + 1;
	}
	return leng;
}
int len2(char string2[])
{
	int i, leng = 0;
	for (i = 0; string2[i] != '\0'; i++)
	{
		leng = leng + 1;
	}
	return leng;
}

void copy(char string1[])
{
	int i;
	char string3[20];
	for (i = 0; string1[i] != '\0'; i++)
	{
		string3[i] = string1[i];
	}
	printf("\nCopied string is %s ", string3);
}
void reverse(char string1[])
{

	int i, l = 0;
	char string3[20], string4[20];
	l = len(string1);
	for (i = 0; i <= l - 1; i++)
	{
		string3[l - 1 - i] = string1[i];
	}
	printf("\nReversed string is %s ", string3);
}
void concatenate(char string1[], char string2[])
{
	int i = 0, l = 0, l2 = 0;
	char string3[20];
	l = len(string1);
	l2 = len2(string2);
	string3[l + l2];
	for (i = 0; i < l; i++)
	{
		string3[i] = string1[i];
	}
	for (i = 0; i < l2; i++)
	{
		string3[l + i] = string2[i];
	}
	printf("\nConcatenated string is %s: ", string3);
}
void compare(char string1[], char string2[])
{
	int l, l1;
	l = len(string1);
	l1 = len2(string2);
	if (l == l1)
	{
		printf("\nBoth the strings are equal");
	}
	else if (l < l1)
	{
		printf("\nString 1 is less than String 2");
	}
	else
	{
		printf("\nString 1 is greater than String 2");
	}
}
void palindrome(char string1[])
{
	int i, l, k, j;
	char string3[20];
	l = len(string1);
	for (i = 0; i <= l; i++)
	{
		string3[l - i - 1] = string1[i];
	}
	string3[i] = '/0';
	printf("\n");
	printf("%s", string3);
	for (k = 0; k <= l; k++)
	{
		if (string1[k] == string3[k])
		{
			j = 0;
			break;
		}
		if (string1[k] != string3[k])
		{
			j = 1;
			break;
		}
	}
	if (j == 0)
	{
		printf("\n String 1 is palindrome");
	}
	if (j == 1)
	{
		printf("\n String 1 is not palindrome");
	}
}

void main()
{

	char string1[20], string2[20];
	clrscr();
	printf("\nEnter the string1: ");
	scanf("%s", &string1);
	printf("\nEnter the string2: ");
	scanf("%s", &string2);
	printf("\nLength of the string is %d \n", len(string1));
	copy(string1);
	reverse(string1);
	concatenate(string1, string2);
	compare(string1, string2);
	palindrome(string1);
	getch();
}
