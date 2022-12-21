C Standard Library Functions
This document explains the following functions from the C standard library:

isalpha
isdigit
isalnum
isascii
isprint
strlen
memset
bzero
memcpy
memmove
strlcpy
strlcat
toupper
tolower
strchr
strrchr
strncmp
memchr
memcmp
strnstr
atoi
calloc
strdup


isalpha
The isalpha  function that checks if a character is an alphabetic character.
The function takes a single argument, c, which is an int type. It checks if c is a lowercase or uppercase letter of the alphabet by comparing it to the ASCII values of the letters 'a' and 'z' for lowercase letters and 'A' and 'Z' for uppercase letters.
If c is an alphabetic character, the function returns 1. Otherwise, it returns 0.

Here's how the function works in more detail:

The function first checks if c is a lowercase letter by using the expression (c >= 'a' && c <= 'z'). This checks if c is greater than or equal to the ASCII value of 'a' and less than or equal to the ASCII value of 'z'.
If this expression is true, it means that c is a lowercase letter.
The function then checks if c is an uppercase letter by using the expression (c >= 'A' && c <= 'Z'). This checks if c is greater than or equal to the ASCII value of 'A' and less than or equal to the ASCII value of 'Z'.
If this expression is true, it means that c is an uppercase letter.
If either of the two expressions above is true, the function returns 1.
Otherwise, it returns 0.

For example, if the function is called with the argument 'a', it will return 1 because 'a' is a lowercase letter.
If the function is called with the argument 'A', it will also return 1 because 'A' is an uppercase letter.
If the function is called with the argument '1', it will return 0 because '1' is not an alphabetic character.


isdigit
The isdigit function that checks if a character is a digit.
The function takes a single argument, c, which is an int type. It checks if c is a digit by comparing it to the ASCII values of the digits '0' through '9'.

If c is a digit, the function returns 1. Otherwise, it returns 0.

Here's how the function works in more detail:

The function uses the expression (c >= '0' && c <= '9') to check if c is a digit.
This checks if c is greater than or equal to the ASCII value of '0' and less than or equal to the ASCII value of '9'.
If this expression is true, it means that c is a digit.
If the expression above is true, the function returns 1.
Otherwise, it returns 0.

For example, if the function is called with the argument '5', it will return 1 because '5' is a digit.
If the function is called with the argument 'a', it will return 0 because 'a' is not a digit.


isalnum
The isalnum function checks if a character is an alphabetic character or a decimal digit. It returns a non-zero value (i.e., true) if the character is an alphabetic character or a decimal digit, and 0 (i.e., false) if it is not.

#include <ctype.h>
int isalnum(int c);


isascii
The isascii function checks if a character is an ASCII character. It returns a non-zero value (i.e., true) if the character is an ASCII character, and 0 (i.e., false) if it is not. ASCII characters are those with values between 0 and 127.

#include <ctype.h>
int isascii(int c);


isprint
The isprint function checks if a character is a printable character. It returns a non-zero value (i.e., true) if the character is a printable character, and 0 (i.e., false) if it is not. Printable characters are those that can be displayed on the screen, including alphabetic characters, decimal digits, and various punctuation marks.

#include <ctype.h>
int isprint(int c);


strlen
The strlen function returns the length of a string. It takes a string as an argument and returns the number of characters in the string, not including the null terminator.

#include <string.h>
size_t strlen(const char *s);


memcpy
The memcpy function copies a block of memory from a source location to a destination location.
To do so it takes three arguments:

"dst" is a pointer to the destination location where the memory will be copied to.
"src" is a pointer to the source location where the memory will be copied from.
"n" is the number of bytes to be copied.

The function first checks if either "dst" or "src" is a null pointer.
If either of them is a null pointer, the function returns 0.

If "n" is greater than 0, the function copies "n" bytes from the source location to the destination location.
It does this by using two pointers: "ptr_dst" points to the destination location and "ptr_src" points to the source location.
The function then copies each byte one at a time using a loop that iterates "n" times.

Finally, the function returns the destination location as a void pointer.
