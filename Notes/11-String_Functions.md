`C` Provides many functions related to `String` like
- `strlen()`, `strcpy()`, etc.

- To use these functions, we need to include `string.h` header file.

- There are special functions for Characters like `isalpha()`, `isdigit()`, etc.

- To use these functions, we need to include `ctype.h` header file.

### String Functions - `string.h` Header File

#### `strlen()` Function

- `strlen()` function is used to find the length of a string.
- Syntax:
  ```c
  int len = strlen(str);
  ```

#### `strcpy()` Function

- `strcpy()` function is used to copy a string to another string.
- Syntax:
  ```c
  strcpy(str1, str2);
  ```
    - `str1` is the destination string.
    - `str2` is the source string.

#### `strcat()` Function

- `strcat()` function is used to concatenate(join) two strings.
- Syntax:
  ```c
  strcat(str1, str2);
  ```
    - `str1` is the destination string.
    - `str2` is the source string.
    - `str1` will be the concatenated string.

#### `strcmp()` Function

- `strcmp()` function is used to compare two strings.
- Comparison is done by ASCII values of the characters.
  
- Syntax:
  ```c
  int res = strcmp(str1, str2);
  ```
    - `str1` is the first string.
    - `str2` is the second string.
    - `res` is the result of comparison.
      - `res` will be `0` if both strings are equal.
      - `res` will be `-1` if `str1` is smaller than `str2`.
      - `res` will be `1` if `str1` is greater than `str2`.

#### `strrev()` Function

- `strrev()` function is used to reverse a string.
- Syntax:
  ```c
  strrev(str);
  ```
    - `str` is the string to be reversed.

#### `strupr()`, `strlwr()` Function

- `strupr()` function is used to convert a string to uppercase.
- `strlwr()` function is used to convert a string to lowercase.
- Syntax:
  ```c
  strupr(str);
  strlwr(str);
  ```


### Character Functions - `ctype.h` Header File

#### `isalpha()` Function

- `isalpha()` function is used to check if a character is an alphabet or not.

- Syntax:
  ```c
  int res = isalpha(ch);
  ```
    - `ch` is the character to be checked.
    - `res` will be `0` if `ch` is not an alphabet.
    - `res` will be `1` if `ch` is an alphabet.

#### `isdigit()` Function

- `isdigit()` function is used to check if a character is a digit or not.
- Syntax:
  ```c
  int res = isdigit(ch);
  ```


#### `isalnum()` Function

- `isalnum()` function is used to check if a character is an alphabet or a digit.
- Syntax:
  ```c
  int res = isalnum(ch);
  ```

#### `isblank()` Function

- `isblank()` function is used to check if a character is a space or a tab.
- Syntax:
  ```c
  int res = isblank(ch);
  ```

#### `iscntrl()` Function

- `iscntrl()` function is used to check if a character is a control character or not.
- Syntax:
  ```c
  int res = iscntrl(ch);
  ```
    - Control characters are non-printable characters like `\n`, `\t`, etc.

#### `isuuper()` & `islower()` Function

- `isupper()`  & `islower()` function is used to check if a character is uppercase or lowercase.

- Syntax:
  ```c
  int res = isupper(ch);
  int res = islower(ch);
  ```

  #### `toupper()` & `tolower()` Function

- `toupper()` & `tolower()` function is used to convert a character to uppercase or lowercase.

- Syntax:
  ```c
  char ch = toupper(ch);
  char ch = tolower(ch);
  ```
    - `ch` is the character to be converted.

### Example

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // String functions from string.h
    char str1[] = "Hello";
    char str2[] = "World";
    int res = strcmp(str1, str2);
    printf("strcmp result: %d\n", res);

    char str5[] = "Hello";
    char str6[] = "World";
    strcat(str5, str6);
    printf("strcat result: %s\n", str5);

    char str9[] = "Hello";
    char str10[] = "World";
    int len = strlen(str9);
    printf("strlen result: %d\n", len);

    char str13[] = "Hello";
    printf("strrev result: %s\n", strrev(str13));

    char str17[] = "Hello";
    printf("strupr result: %s\n", strupr(str17));
    

    // Character functions from ctype.h
    char ch1 = 'A';
    int isAlpha = isalpha(ch1);
    printf("isalpha result: %d\n", isAlpha);

    char ch2 = '5';
    int isDigit = isdigit(ch2);
    printf("isdigit result: %d\n", isDigit);

    char ch3 = ' ';
    int isBlank = isblank(ch3);
    printf("isblank result: %d\n", isBlank);

    char ch4 = '\n';
    int isControl = iscntrl(ch4);
    printf("iscntrl result: %d\n", isControl);

    char ch5 = 'a';
    int isUpper = isupper(ch5);
    printf("isupper result: %d\n", isUpper);

    char ch8 = 'A';
    char lowerCh = tolower(ch8);
    printf("tolower result: %c\n", lowerCh);

    return 0;
}
```
