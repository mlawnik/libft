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
___

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
___

isalnum
The isalnum function that checks if a character is an alphanumeric character.

The function takes a single argument, c, which is an int type. It checks if c is an alphanumeric character by checking if it is an alphabetic character or a digit.

If c is an alphanumeric character, the function returns 1. Otherwise, it returns 0.

Here's how the function works in more detail:

The function first checks if c is a lowercase letter by using the expression (c >= 'a' && c <= 'z'). This checks if c is greater than or equal to the ASCII value of 'a' and less than or equal to the ASCII value of 'z'. If this expression is true, it means that c is a lowercase letter.

The function then checks if c is an uppercase letter by using the expression (c >= 'A' && c <= 'Z'). This checks if c is greater than or equal to the ASCII value of 'A' and less than or equal to the ASCII value of 'Z'. If this expression is true, it means that c is an uppercase letter.

The function then checks if c is a digit by using the expression (c >= '0' && c <= '9'). This checks if c is greater than or equal to the ASCII value of '0' and less than or equal to the ASCII value of '9'. If this expression is true, it means that c is a digit.

If any of the three expressions above is true, the function returns 1. Otherwise, it returns 0.

For example, if the function is called with the argument 'a', it will return 1 because 'a' is a lowercase letter. If the function is called with the argument 'A', it will also return 1 because 'A' is an uppercase letter. If the function is called with the argument '1', it will return 1 because '1' is a digit. If the function is called with the argument '@', it will return 0 because '@' is not an alphanumeric character.
___

isascii
The isascii function that checks if a character is an ASCII character.

The function takes a single argument, c, which is an int type. It checks if c is an ASCII character by comparing it to the range of ASCII values, which are from 0 to 127.

If c is an ASCII character, the function returns 1. Otherwise, it returns 0.

Here's how the function works in more detail:

The function uses the expression (c >= 0 && c <= 127) to check if c is an ASCII character. This checks if c is greater than or equal to 0 and less than or equal to 127. If this expression is true, it means that c is an ASCII character.

If the expression above is true, the function returns 1. Otherwise, it returns 0.

ASCII is a character encoding standard that represents characters using integers. It includes 128 characters, which are represented by the integers 0 through 127. These characters include the digits, the uppercase and lowercase letters of the alphabet, and various punctuation marks and other symbols.

For example, if the function is called with the argument 'a', it will return 1 because 'a' is an ASCII character with the ASCII value 97. If the function is called with the argument 128, it will return 0 because 128 is not an ASCII value.
___

isprint
The isprint function that checks if a character is a printable character.

The function takes a single argument, c, which is an int type. It checks if c is a printable character by comparing it to the range of ASCII values for printable characters, which are from 32 to 126.

If c is a printable character, the function returns 1. Otherwise, it returns 0.

Here's how the function works in more detail:

The function uses the expression (c >= 32 && c <= 126) to check if c is a printable character. This checks if c is greater than or equal to 32 and less than or equal to 126. If this expression is true, it means that c is a printable character.

If the expression above is true, the function returns 1. Otherwise, it returns 0.

ASCII (American Standard Code for Information Interchange) is a character encoding standard that represents characters using integers. It includes 128 characters, which are represented by the integers 0 through 127. Some of these characters, such as the digits, the uppercase and lowercase letters of the alphabet, and various punctuation marks and other symbols, are considered printable characters because they can be printed or displayed on a screen. These characters have ASCII values from 32 to 126.

For example, if the function is called with the argument 'a', it will return 1 because 'a' is a printable character with the ASCII value 97. If the function is called with the argument 10, it will return 0 because 10 is not a printable ASCII value.
___

strlen
The strlen function calculates the length of a string.

The function takes a single argument, s, which is a pointer to a character. It calculates the length of the string by iterating through the string until it reaches the null terminator character ('\0').

The function returns the length of the string as a size_t type.

Here's how the function works in more detail:

The function declares a variable strlen of type size_t and initializes it to 0. This variable will be used to store the length of the string.

The function then enters a loop that iterates until the character pointed to by s is the null terminator character ('\0').

Inside the loop, the function increments the value of strlen by 1.

After the loop ends, the function returns the value of strlen as the result.

For example, if the function is called with the argument "hello", it will return 5 because the string "hello" has 5 characters. If the function is called with the argument "", it will return 0 because the empty string has 0 characters.
___

memset
The memset function fills a block of memory with a specified value.

The function takes three arguments:

b is a pointer to the block of memory that will be filled with the specified value.
c is the value that will be used to fill the memory block.
len is the number of bytes to be filled.
The function fills the memory block by using a pointer to iterate through the block and assigning the value c to each byte.

The function returns a pointer to the memory block as a void pointer.

Here's how the function works in more detail:

The function declares a variable p of type unsigned char * and initializes it to the value of b. p will be used to iterate through the memory block.

The function then enters a loop that iterates len times.

Inside the loop, the function assigns the value of c to the byte pointed to by p and increments p by 1.

After the loop ends, the function returns the value of b as the result.

For example, if the function is called with the arguments b pointing to a block of memory with 10 bytes, c equal to 0, and len equal to 5, it will fill the first 5 bytes of the memory block with 0. If the function is called with the arguments b pointing to a block of memory with 10 bytes, c equal to 255, and len equal to 10, it will fill the entire memory block with 255.
___

bzero
The bzero function fills a block of memory with zeros.

The function takes two arguments:

b is a pointer to the block of memory that will be filled with zeros.
len is the number of bytes to be filled.
The function fills the memory block with zeros by calling the ft_memset function and passing it the arguments b, 0, and len. The ft_memset function fills a block of memory with a specified value, so by calling it with 0 as the value, the ft_bzero function is able to fill the memory block with zeros.

The ft_bzero function does not return a value.

For example, if the function is called with the arguments b pointing to a block of memory with 10 bytes and len equal to 5, it will fill the first 5 bytes of the memory block with 0. If the function is called with the arguments b pointing to a block of memory with 10 bytes and len equal to 10, it will fill the entire memory block with 0.
___

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
___

memmove
The memmove function copies a block of memory from one location to another.
The function takes three arguments:

"dst" is a pointer to the destination memory block where the copy will be placed.
"src" is a pointer to the source memory block that will be copied.
"n" is the number of bytes to be copied.
The function first checks if either "dst" or "src" is a null pointer. If either is null, the function returns 0.
Otherwise, the function proceeds to copy the memory block.

If "dst" is less than src, the function copies the memory block from the beginning of the source block to the beginning of the destination block.
This is done by iterating through the block with a loop and copying each byte one at a time.

If "dst" is greater than src, the function copies the memory block from the end of the source block to the end of the destination block.
This is done by iterating through the block with a loop and copying each byte one at a time, starting from the end of the block.

Finally, the function returns a pointer to the destination memory block.
___

strlcpy
This is a function that copies a null-terminated string from one location to another. The function takes three arguments:

dst is a pointer to the destination buffer where the string will be copied.
src is a pointer to the source string that will be copied.
size is the size of the destination buffer.
The function first determines the length of the source string using the ft_strlen function, which is defined in the libft.h header file. The ft_strlen function returns the length of a null-terminated string by counting the number of characters until it encounters a null terminator.

The function then proceeds to copy the string from the source to the destination, one character at a time, until it reaches the end of the source string or the size of the destination buffer, whichever comes first.

If the size of the destination buffer is greater than zero, the function copies the string and null-terminates the destination string. If the size of the destination buffer is zero, no characters are copied and the destination string is not null-terminated.

Finally, the function returns the length of the source string.
___
