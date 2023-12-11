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
    

`C` Provides Decision Making Functions like

- `if` statement
- `if...else` statement
- `if...else` ladder statement
- `nested if` statement
- `switch` statement

### If Statements

- `if` statement is used to execute a block of code if a condition is true.
- `else` statement is used to execute a block of code if the same condition is false.

### Syntax

```
if (condition)
{
    // statements
}
else
{
    // statements
}
```

  

### If...Else Ladder

- `if...else` ladder statement executes one condition from multiple statements.
- `else if` statement is used to execute multiple statements.

### Syntax

```
if (condition)
{
    // statements
}
else if (condition)
{
    // statements
}
else if (condition)
{
    // statements
}
else
{
    // statements
}
```

  

### Nested If Statements

- `nested if` statement is like if statement inside another if statement.
- `if` statement is executed only when outer `if` statement is true.

### Syntax

```
if (condition)
{
    // statements
    if (condition)
    {
        // statements
    }
}
```

  

### Switch Statements

- `switch` statement is used to execute one statement from multiple conditions.
- `switch` statement is executed only when `case` statement is true.

### Syntax

```
switch (expression)
{
    case constant-expression:
        // statements
        break;
    case constant-expression:
        // statements
        break;
    default:
        // statements
}
```

  

- Example

```
\#include <stdio.h>

void main() {
    int num = 10;

    // if statement
    if (num > 0) {
        printf("Number is positive\n");
    }

    // if...else statement
    if (num % 2 == 0) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }

    // if...else ladder statement
    if (num < 0) {
        printf("Number is negative\n");
    } else if (num == 0) {
        printf("Number is zero\n");
    } else {
        printf("Number is positive\n");
    }

    // nested if statement
    if (num > 0) {
        if (num % 2 == 0) {
            printf("Number is positive and even\n");
        } else {
            printf("Number is positive and odd\n");
        }
    }

    // switch statement
    switch (num) {
        case 0:
            printf("Number is zero\n");
            break;
        case 1:
            printf("Number is one\n");
            break;
        default:
            printf("Number is neither zero nor one\n");
            break;
    }

}
```

- Run Code

[https://replit.com/@kunalshah017/Decision-Making](https://replit.com/@kunalshah017/Decision-Making)

  

  

---

Back - [[Input & Output]]

Next - [[Loops]]

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)