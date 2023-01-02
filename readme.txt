C Standard Library Functions
This document explains the following functions from the C standard library:


isalpha
The isalpha  function checks if a character is an alphabetic character.
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
The isdigit function checks if a character is a digit.
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
The isalnum function checks if a character is an alphanumeric character.
The function takes a single argument, c, which is an int type.
It checks if c is an alphanumeric character by checking if it is an alphabetic character or a digit.

If c is an alphanumeric character, the function returns 1. Otherwise, it returns 0.

Here's how the function works in more detail:

The function first checks if c is a lowercase letter by using the expression (c >= 'a' && c <= 'z').
This checks if c is greater than or equal to the ASCII value of 'a' and less than or equal to the ASCII value of 'z'. If this expression is true, it means that c is a lowercase letter.
The function then checks if c is an uppercase letter by using the expression (c >= 'A' && c <= 'Z').
This checks if c is greater than or equal to the ASCII value of 'A' and less than or equal to the ASCII value of 'Z'. If this expression is true, it means that c is an uppercase letter.
The function then checks if c is a digit by using the expression (c >= '0' && c <= '9').
This checks if c is greater than or equal to the ASCII value of '0' and less than or equal to the ASCII value of '9'. If this expression is true, it means that c is a digit.

If any of the three expressions above is true, the function returns 1. Otherwise, it returns 0.

For example, if the function is called with the argument 'a', it will return 1 because 'a' is a lowercase letter.
If the function is called with the argument 'A', it will also return 1 because 'A' is an uppercase letter.
If the function is called with the argument '1', it will return 1 because '1' is a digit.
If the function is called with the argument '@', it will return 0 because '@' is not an alphanumeric character.
___

isascii
The isascii function checks if a character is an ASCII character.
The function takes a single argument, c, which is an int type.
It checks if c is an ASCII character by comparing it to the range of ASCII values, which are from 0 to 127.

If c is an ASCII character, the function returns 1. Otherwise, it returns 0.

Here's how the function works in more detail:

The function uses the expression (c >= 0 && c <= 127) to check if c is an ASCII character.
This checks if c is greater than or equal to 0 and less than or equal to 127.
If this expression is true, it means that c is an ASCII character.
If the expression above is true, the function returns 1. Otherwise, it returns 0.

ASCII includes 128 characters, which are represented by the integers 0 through 127.
These characters include the digits, the uppercase and lowercase letters of the alphabet, and various punctuation marks and other symbols.

For example, if the function is called with the argument 'a', it will return 1 because 'a' is an ASCII character with the ASCII value 97.
If the function is called with the argument 128, it will return 0 because 128 is not an ASCII value.
___

isprint
The isprint function checks if a character is a printable character.
The function takes a single argument, c, which is an int type.
It checks if c is a printable character by comparing it to the range of ASCII values for printable characters, which are from 32 to 126.

If c is a printable character, the function returns 1. Otherwise, it returns 0.

Here's how the function works in more detail:

The function uses the expression (c >= 32 && c <= 126) to check if c is a printable character.
This checks if c is greater than or equal to 32 and less than or equal to 126. If this expression is true, it means that c is a printable character.
If the expression above is true, the function returns 1. Otherwise, it returns 0.

ASCII includes 128 characters, which are represented by the integers 0 through 127.
Some of these characters, such as the digits, the uppercase and lowercase letters of the alphabet, and various punctuation marks and other symbols,
are considered printable characters because they can be printed or displayed on a screen.
These characters have ASCII values from 32 to 126.

For example, if the function is called with the argument 'a', it will return 1 because 'a' is a printable character with the ASCII value 97.
If the function is called with the argument 10, it will return 0 because 10 is not a printable ASCII value.
___

strlen
The strlen function calculates the length of a string.
The function takes a single argument, s, which is a pointer to a character.
It calculates the length of the string by iterating through the string until it reaches the null terminator character ('\0').

The function returns the length of the string as a size_t type.

Here's how the function works in more detail:

The function declares a variable strlen of type size_t and initializes it to 0.
This variable will be used to store the length of the string.
The function then enters a loop that iterates until the character pointed to by s is the null terminator character ('\0').

Inside the loop, the function increments the value of strlen by 1.
After the loop ends, the function returns the value of strlen as the result.

For example, if the function is called with the argument "hello", it will return 5 because the string "hello" has 5 characters.
If the function is called with the argument "", it will return 0 because the empty string has 0 characters.
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

The function declares a variable p of type unsigned char * and initializes it to the value of b.
p will be used to iterate through the memory block.

The function then enters a loop that iterates len times.

Inside the loop, the function assigns the value of c to the byte pointed to by p and increments p by 1.
After the loop ends, the function returns the value of b as the result.

For example, if the function is called with the arguments b pointing to a block of memory with 10 bytes, c equal to 0, and len equal to 5, it will fill the first 5 bytes of the memory block with 0.
If the function is called with the arguments b pointing to a block of memory with 10 bytes, c equal to 255, and len equal to 10, it will fill the entire memory block with 255.
___

bzero
The bzero function fills a block of memory with zeros.

The function takes two arguments:

b is a pointer to the block of memory that will be filled with zeros.
len is the number of bytes to be filled.
The function fills the memory block with zeros by calling the ft_memset function and passing it the arguments b, 0, and len.
The ft_memset function fills a block of memory with a specified value, so by calling it with 0 as the value, the ft_bzero function is able to fill the memory block with zeros.

The ft_bzero function does not return a value.

For example, if the function is called with the arguments b pointing to a block of memory with 10 bytes and len equal to 5, it will fill the first 5 bytes of the memory block with 0.
If the function is called with the arguments b pointing to a block of memory with 10 bytes and len equal to 10, it will fill the entire memory block with 0.
___

memcpy
The memcpy function copies a block of memory from a source location to a destination location.

The function takes three arguments:

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
The strlcpy function copies a string from a source buffer (src) to a destination buffer (dst).
The size_t type is an unsigned integer type used to represent the size of an object.

The function takes three arguments:

"dst" is a pointer to a character array that will receive the copied string.
"src" is a pointer to a null-terminated character array that contains the string to be copied.
"dstsize" is an integer value representing the size of the dst buffer.
The function first determines the length of the "src" string using the ft_strlen function, which calculates the length of a null-terminated string.
The length of the "src" string is stored in the "src_len" variable.

Next, the function checks if "dstsize" is greater than 0.
If it is, the function enters a loop that copies characters from the src string to the "dst" buffer, one character at a time,
until either the end of the "src" string is reached or "dstsize" - 1 characters have been copied (the -1 is necessary to leave room for the null terminator at the end of the string).

After the loop completes, the function adds a null terminator to the end of the "dst" string to mark the end of the string.
Finally, the function returns the length of the src string.
___

strlcat
The strlcat function concatenates (attaches/links) a string from a source buffer (src) to a destination buffer (dst).
The size_t type is an unsigned integer type used to represent the size of an object.

The function takes three arguments:

dst is a pointer to a character array that will receive the concatenated string.
src is a pointer to a null-terminated character array that contains the string to be concatenated.
dstsize is an integer value representing the size of the dst buffer.
The function first determines the lengths of the dst and src strings using the ft_strlen function, which calculates the length of a null-terminated string.
The lengths of the dst and src strings are stored in the dst_len and src_len variables, respectively.

Next, the function initializes the i_dst and i_src variables to the lengths of the dst and src strings, respectively.
These variables will be used to keep track of the current position in the dst and src buffers as the strings are concatenated.

The function then enters a loop that copies characters from the src string to the dst buffer, one character at a time,
until either the end of the src string is reached or dstsize - 1 characters have been copied (the -1 is necessary to leave room for the null terminator at the end of the string).
The loop also checks if the length of the dst string is less than dstsize, which ensures that the loop will not write beyond the end of the dst buffer.

After the loop completes, the function adds a null terminator to the end of the dst string to mark the end of the string.
Finally, the function checks if the dstsize is less than dst_len.
If it is, the function returns the sum of dstsize and src_len, which represents the total length of the concatenated string.
If dstsize is not less than dst_len, the function returns the sum of dst_len and src_len, which represents the total length of the concatenated string if it were possible to fit it in the dst buffer.
___

toupper
The toupper function converts a lowercase letter to uppercase. The function takes a single argument c, which is an integer representing a character in ASCII encoding.

The function first checks if c is a lowercase letter by checking if it falls within the range 'a' to 'z' (ASCII values 97 to 122). If c is a lowercase letter, the function returns the uppercase equivalent of c by subtracting 32 from its ASCII value. This is because the ASCII values of lowercase letters are 32 greater than the corresponding uppercase letters.

If c is not a lowercase letter, the function simply returns c without modifying it.

This function is similar to the standard C library function toupper, but it may have some differences in behavior. For example, toupper is defined in the standard C library header file ctype.h, whereas ft_toupper is not. Additionally, toupper may be implemented differently on different platforms or with different compiler options.
___

tolower
The tolower function converts an uppercase letter to lowercase. The function takes a single argument c, which is an integer representing a character in ASCII encoding.

The function first checks if c is an uppercase letter by checking if it falls within the range 'A' to 'Z' (ASCII values 65 to 90). If c is an uppercase letter, the function returns the lowercase equivalent of c by adding 32 to its ASCII value. This is because the ASCII values of uppercase letters are 32 less than the corresponding lowercase letters.

If c is not an uppercase letter, the function simply returns c without modifying it.

This function is similar to the standard C library function tolower, but it may have some differences in behavior. For example, tolower is defined in the standard C library header file ctype.h, whereas ft_tolower is not. Additionally, tolower may be implemented differently on different platforms or with different compiler options.
___

strchr
The strchr function  searches for the first occurrence of a given character in a string. The function takes two arguments: s, which is a pointer to a null-terminated string, and c, which is an integer representing a character in ASCII encoding.

The function first calls the ft_strlen function to get the length of the string s and stores the result in the s_len variable. It then initializes the i variable to 0.

The function then enters a loop that iterates over the elements of the s array. For each iteration, it checks if the current element is equal to c. If it is, the function converts the address of the current element to a char pointer and returns it as the result of the function. If no match is found, the function returns NULL.
___

