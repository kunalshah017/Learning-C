### String

- `String` is not a data type in `C`. It is a array of characters.
- `String` is a collection of characters enclosed in double quotes(`"`).

- length of a `String` can be decided during declaration or can be left blank.

Syntax:
```c
char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
char str2[] = "Hello";
```
In the above example, `str1` is a `String` of length `6` & `str2` doesn't have a length specified, however, it will be automatically calculated by the compiler.

### More Input & Output Functions for `String` and `Character`

#### `getchar()`
- It is used to get a single character from the user.
  Syntax:
  ```c
    char ch = getchar();
    ```

#### `putchar()`
- It is used to print a single character to the screen.
  Syntax:
  ```c
    putchar(ch);
    ```
#### `gets()`
- It is used to get a `String` from the user.
  Syntax:
  ```c
    char str[20];
    gets(str);
    ```

#### `puts()`
- It is used to print a `String` to the screen.
  Syntax:
  ```c
    char str[20] = "Hello";
    puts(str);
    ```

    Extra: `gets()` also takes input of `String` with spaces, but `scanf()` doesn't.

### Example
    
```c
#include <stdio.h>

int main() {
    char ch;
    char str[20];

    // Using getchar()
    printf("Using getchar():\n");
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);

    // Using gets()
    printf("\n\nUsing gets():\n");
    printf("Enter a String: ");
    gets(str);
    printf("You entered: ");
    puts(str);

    return 0;
}
```
