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
The isalpha function checks if a character is an alphabetic character. It returns a non-zero value (i.e., true) if the character is an alphabetic character, and 0 (i.e., false) if it is not.

#include <ctype.h>
int isalpha(int c);


isdigit
The isdigit function checks if a character is a decimal digit. It returns a non-zero value (i.e., true) if the character is a decimal digit, and 0 (i.e., false) if it is not.

#include <ctype.h>
int isdigit(int c);


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
``