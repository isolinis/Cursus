// C program to demonstrate working of Libft
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

/// my memset function
/*
void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main(void)
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
	char str1[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
    printf("\nBefore ft_memset(): %s\n", str1);
  
    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8*sizeof(char));
	ft_memset(str1 + 13, '.', 8*sizeof(char));
  
    printf("\nAfter memset():  %s\n", str);
	printf("\nAfter ft_memset():  %s\n", str1);

	int n = 10;
    int arr[n];
	int arr1[n];

    // Fill whole array with 0.
    memset(arr, 0, n*sizeof(arr[0]));
    printf("\nArray after memset()\n");
    printArray(arr, n);

	ft_memset(arr1, 0, n*sizeof(arr1[0]));
	printf("\nArray after ft_memset()\n");
	printArray(arr1, n);
    return (0);
}
*/

///my bzero function
/*
int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	char str1[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore bzero(): %s\n", str);
	printf("\nBefore ft_bzero(): %s\n", str1);

	bzero(str + 8, 4 * sizeof(char));
	ft_bzero(str1 + 8, 4 * sizeof(char));

	printf("\nAfter bzero(): %s\n", str);
	printf("\nAfter ft_bzero(): %s\n", str1);
	return (0);
}
*/

///my memcpy function
/*
int main (void)
{
  char	str1[] = "Geeks";
  char	str2[] = "Quiz";
  char	str3[] = "Geeks";
  char	str4[] = "Quiz";

  puts("\nstr1 before memcpy ");
  puts(str1);

  puts("\nstr3 before memcpy ");
  puts(str3);

  // Copies contents of str2 to str1
  memcpy (str1, str2, sizeof(str2));

  // Copies contents of str4 to str3 
  ft_memcpy (str3, str4, sizeof(str4));

  puts("\nstr1 after memcpy ");
  puts(str1);

  puts("\nstr3 after ft_memcpy ");
  puts(str3);

  return (0);
}
*/


/// my memccpy function
/*
int main (void)
{
	char *src = "test basic !";
	char dest[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char *src1 = "test basic !";
	char dest1[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char *ptr;
	char *ptr1;
	ptr = (char *) memccpy(dest, src, ' ', strlen(src));
	if (ptr)
	{
		*ptr = '\0';
		printf("The character was found: %s\n", dest);
	}
	else
		printf("The character wasn't found\n");
	ptr1 = (char *) ft_memccpy(dest1, src1, ' ', strlen(src1));
	if (ptr1)
	{
		*ptr1 = '\0';
		printf("The character was found: %s\n", dest1);
	}
	else 
		printf("The character wasn't found\n");
	return (0);
}
*/

/// my memmove function
/*
int main (void)
{
	char *src = "Hola";
    char dest[] = "caracola";
    char *src1 = "Hola";
    char dest1[] = "caracola";
    char *str = memmove(dest, src, 3);
	char *str1 = ft_memmove(dest1, src1, 3);
	printf("%s", str);
	printf("%s", str1);
	return (0);
}
*/

/// my memchr function
/*
int main (void)
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	const char str1[] = "http://www.tutorialspoint.com";
	const char ch1 = '.';
	char *ret;
	char *ret1;
	
	ret = memchr(str, ch, strlen(str));
	ret1 = ft_memchr(str1, ch1, strlen(str1));
	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("String after |%c| is - |%s|\n", ch1, ret1);
	return (0);
}
*/

/// my memcmp function
/*
int main () {
   char str1[15];
   char str2[15];
   char str3[15];
   char str4[15];
   int ret;
   int ret1;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);
   memcpy(str3, "abcdef", 6);
   memcpy(str4, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);
   ret1 = ft_memcmp(str3, str4, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   if(ret1 > 0) {
      printf("str2 is less than str1");
   } else if(ret1 < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}
*/

/// my strlen function
/*
int main(void)
{
	char *str;
	char *str1;

	str = "Hola";
	str1 = "Hola";
	strlen(str);
	ft_strlen(str1);
	return (0);
}
*/

/// my ft_isalpha & ft_isdigit functions
/*
int main(void)
{
	char str[] = "12abc12";
	char str1[] = "12abc12";
	int alphabet = 0, number = 0, i;
	int alphabet1 = 0, number1 = 0, j;
	for (i = 0; str[i] != '\0'; i++)
	{
		// check for alphabets
		if (isalpha(str[i]) != 0)
			alphabet++;
		// check for decimal digits
		else if (isdigit(str[i]) != 0)
			number++;
	}
	for (j = 0; str1[j] != '\0'; j++)
	{
		if (ft_isalpha(str1[j]) != 0)
			alphabet1++;
		else if (ft_isdigit(str1[j]) != 0)
			number1++;
	}
	printf("Alphabetic_letters = %d, "
			"Decimal_digits = %d\n",
			alphabet, number);
	printf("Alphabetic_letters = %d, "
			"Decimal_digits = %d\n",
			alphabet1, number1);
	return (0);
}
*/

/// my ft_isalnum function
/*
int main()
{
	char c = 'a';

	// checking is it alphanumeric or not?
	if (isalnum(c))
		printf("\nEntered character is alphanumeric\n");
	else
		printf("\nEntered character is not alphanumeric\n");
	if (ft_isalnum(c))
		printf("\nEntered character is alphanumeric\n");
	else
		printf("\nEntered character is not alphanumeric\n");
	return (0);
}
*/

/// my ft_isascii function
/*
int main()
{
	int ch;
	int c;

	for (ch = 0x7c; ch <= 0x82; ch++)
	{
		printf("%#04x    ", ch);
		if (isascii(ch))
			printf("The character is %c\n", ch);
		else
			printf("Cannot be represented by an ASCII character\n");
	}
	for (c = 0x7c; c <= 0x82; c++)
	{
		printf("%#04x    ", c);
		if (ft_isascii(c))
			printf("The character is %c\n", c);
		else
			printf("Cannot be represented by an ASCII character\n");
	}
	return (0);
}
*/

/// my ft_isprint function
/*
int main(void)
{
	int var1 = 'k';
	int var2 = '8';
	int var3 = '\t';
	int var4 = ' ';

	if( isprint(var1) )
		printf("var1 = |%c| can be printed\n", var1 );
	else
		printf("var1 = |%c| can't be printed\n", var1 );

	if( isprint(var2) )
		printf("var2 = |%c| can be printed\n", var2 );
	else
		printf("var2 = |%c| can't be printed\n", var2 );

	if( isprint(var3) )
		printf("var3 = |%c| can be printed\n", var3 );
	else
		printf("var3 = |%c| can't be printed\n", var3 );

	if( isprint(var4) )
		printf("var4 = |%c| can be printed\n", var4 );
	else
		printf("var4 = |%c| can't be printed\n", var4 );

	if( ft_isprint(var1) )
		printf("var1 = |%c| can be printed\n", var1 );
	else
		printf("var1 = |%c| can't be printed\n", var1 );

	if( ft_isprint(var2) )
		printf("var2 = |%c| can be printed\n", var2 );
	else
		printf("var2 = |%c| can't be printed\n", var2 );

    if( ft_isprint(var3) )
		printf("var3 = |%c| can be printed\n", var3 );
	else
		printf("var3 = |%c| can't be printed\n", var3 );

    if( isprint(var4) )
		printf("var4 = |%c| can be printed\n", var4 );
	else
		printf("var4 = |%c| can't be printed\n", var4 );
	return (0);
}
*/

/// my ft_toupper & ft_tolower functions
/*
int main(void)
{
	char *s1 = "Hola CaraCola";
	char *s2 = "hOLA cARAcOLA";
	int size1 = strlen(s1);
	int size2 = strlen(s2);

	for (int i = 0; i < size1; i++)
	{
		printf("\n%c", (char) ft_toupper(s1[i]));
	}
	for (int j = 0; j < size2; j++)
	{
		printf("\n%c", (char) ft_tolower(s2[j]));
	}
	return (0);
}
*/

/// my ft_strchr function
/*
int main(void)
{
	
}
*/
