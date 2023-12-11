Input, Output & Escape Sequence

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
    

### User Input & Output

### User Input

- `printf()` is used to print something on the screen.
- syntax:

```
printf("Hello World");
```

### User Output

- `scanf()` is used to take input from the user.
- syntax:

```
scanf("%d", &a);
```

  

- in `scanf()` function, `%d` is a format specifier which is used to refer type of data. which user will enter.
- `&` is used to refer to the address of the variable in which user input will be stored.

### Escape Sequence Characters

- `C` provides a set of escape sequence characters which are used to format the output.
- Escape Sequence Characters are used in `printf()` function.
- Escape Sequence Characters are always preceded by a backslash `\\`.
- Each Escape Sequence Character has a special meaning.

  

|Escape Sequence Character|Description|
|---|---|
|`\\n`|New Line|
|`\\t`|Horizontal Tab|
|`\\b`|Backspace|
|`\\'`|Inserts Single Quote|
|`\\"`|Inserts Double Quote|
|`\\\\`|Inserts Backslash|

  

- Example

```
\#include<stdio.h>

void main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("You entered: %d\n", a);

    printf("\nHello \t World\n");
    printf("Hello World\b \n");
    printf("\' Hello World\' \n");
    printf("\" Hello World \" \n");
    printf("\\ Hello World \\ \n");
}
```

- Run Code

[https://replit.com/@kunalshah017/IO-and-Esc-Seq](https://replit.com/@kunalshah017/IO-and-Esc-Seq)

  

---

Back - [[Operators]]

Next - [[Decision Making]]

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)