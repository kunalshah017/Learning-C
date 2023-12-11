- All Content
    
    [[Learn C]]
    
    [[Data Types & Variables]]
    
    [[Operators]]
    
    [[Input & Output]]
    
    [[Decision Making]]
    
    [[Loops]]
    
    [[Break & Continue]]
    
    [[Array]]
    
    [[String & More about I-O]]
    
    [[Functions]]
    
    [[String Functions]]
    
    [[Structures, Union & Enumarators]]
    
    [[Pointers & Storage Class]]
    
    [[Preprocessor & Macro Statements]]
    

`C` Provides many functions related to `String` like

- `strlen()`, `strcpy()`, etc.
- To use these functions, we need to include `string.h` header file.
- There are special functions for Characters like `isalpha()`, `isdigit()`, etc.
- To use these functions, we need to include `ctype.h` header file.

### String Functions - `string.h` Header File

### `strlen()` Function

- `strlen()` function is used to find the length of a string.
- Syntax:
    
    ```
    int len = strlen(str);
    ```
    

  

### `strcpy()` Function

- `strcpy()` function is used to copy a string to another string.
- Syntax:
    
    ```
    strcpy(str1, str2);
    ```
    
    - `str1` is the destination string.
    - `str2` is the source string.
    
      
    

### `strcat()` Function

- `strcat()` function is used to concatenate(join) two strings.
- Syntax:
    
    ```
    strcat(str1, str2);
    ```
    
    - `str1` is the destination string.
    - `str2` is the source string.
    - `str1` will be the concatenated string.
    
      
    

### `strcmp()` Function

- `strcmp()` function is used to compare two strings.
- Comparison is done by ASCII values of the characters.
- Syntax:
    
    ```
    int res = strcmp(str1, str2);
    ```
    
    - `str1` is the first string.
    - `str2` is the second string.
    - `res` is the result of comparison.
        
        - `res` will be `0` if both strings are equal.
        - `res` will be `1` if `str1` is smaller than `str2`.
        - `res` will be `1` if `str1` is greater than `str2`.
        
          
        

### `strrev()` Function

- `strrev()` function is used to reverse a string.
- Syntax:
    
    ```
    strrev(str);
    ```
    
    - `str` is the string to be reversed.
    
      
    

### `strupr()`, `strlwr()` Function

- `strupr()` function is used to convert a string to uppercase.
- `strlwr()` function is used to convert a string to lowercase.
- Syntax:
    
    ```
    strupr(str);
    strlwr(str);
    ```
    

  

---

### Character Functions - `ctype.h` Header File

  

### `isalpha()` Function

- `isalpha()` function is used to check if a character is an alphabet or not.
- Syntax:
    
    ```
    int res = isalpha(ch);
    ```
    
    - `ch` is the character to be checked.
    - `res` will be `0` if `ch` is not an alphabet.
    - `res` will be `1` if `ch` is an alphabet.

  

### `isdigit()` Function

- `isdigit()` function is used to check if a character is a digit or not.
- Syntax:
    
    ```
    int res = isdigit(ch);
    ```
    

  

### `isalnum()` Function

- `isalnum()` function is used to check if a character is an alphabet or a digit.
- Syntax:
    
    ```
    int res = isalnum(ch);
    ```
    

  

### `isblank()` Function

- `isblank()` function is used to check if a character is a space or a tab.
- Syntax:
    
    ```
    int res = isblank(ch);
    ```
    

  

### `iscntrl()` Function

- `iscntrl()` function is used to check if a character is a control character or not.
- Syntax:
    
    ```
    int res = iscntrl(ch);
    ```
    
    - Control characters are non-printable characters like `\\n`, `\\t`, etc.
    
      
    

### `isuuper()` & `islower()` Function

- `isupper()` & `islower()` function is used to check if a character is uppercase or lowercase.
- Syntax:
    
    ```
    int res = isupper(ch);
    int res = islower(ch);
    ```
    

  

### `toupper()` & `tolower()` Function

- `toupper()` & `tolower()` function is used to convert a character to uppercase or lowercase.
- Syntax:
    
    ```
    char ch = toupper(ch);
    char ch = tolower(ch);
    ```
    
    - `ch` is the character to be converted.

  

- Example

```
\#include <ctype.h>
\#include <stdio.h>
\#include <string.h>

int main() {
  // String functions from string.h
  char str1[] = "Hello";
  char str2[] = "World";
  int res = strcmp(str1, str2);
  printf("strcmp result: %d\n", res);

  char str3[100];        // Allocate enough space
  strcpy(str3, "Hello"); // Initialize str3 with "Hello"
  strcat(str3, str2);
  printf("strcat result: %s\n", str3);

  int len = strlen(str2);
  printf("strlen result: %d\n", len);

  return 0;
}
```

  

- Run Code

[https://replit.com/@kunalshah017/String-Functions](https://replit.com/@kunalshah017/String-Functions)

  

---

Back - [[Functions]]

Next - [[Structures, Union & Enumarators]]

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)