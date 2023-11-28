### User Input & Output

#### User Input
- `printf()` is used to print something on the screen.

- syntax:
  ```c
  printf("Hello World");
  ```

#### User Output
- `scanf()` is used to take input from the user.
  
- syntax:
  ```c
  scanf("%d", &a);
  ```
  - in `scanf()` function, `%d` is a format specifier which is used to refer type of data. which user will enter.
  
  - `&` is used to refer to the address of the variable in which user input will be stored.

### Escape Sequence Characters

- `C` provides a set of escape sequence characters which are used to format the output.
- Escape Sequence Characters are used in `printf()` function.
- Escape Sequence Characters are always preceded by a backslash `\`.
- Each Escape Sequence Character has a special meaning.

| Escape Sequence Character | Description |
| :---: | :---: |
| `\n` | New Line |
| `\t` | Horizontal Tab |
| `\b` | Backspace |
| `\'` | Inserts Single Quote |
| `\"` | Inserts Double Quote |
| `\\` | Inserts Backslash |

### Example

```c
#include<stdio.h>

void main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("You entered: %d\n", a);

    printf("Hello \t World\n");
    printf("Hello World\b \n");
    printf("\' Hello World\' \n");
    printf("\" Hello World \" \n");
    printf("\\ Hello World \\ \n");
}
```