`C` Provides Decision Making Functions like
- `if` statement
- `if...else` statement
- `if...else` ladder statement
- `nested if` statement
- `switch` statement

### If Statements
- `if` statement is used to execute a block of code if a condition is true.
- `else` statement is used to execute a block of code if the same condition is false.

#### Syntax
```c
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
  
#### Syntax
```c
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

#### Syntax
```c
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

#### Syntax
```c
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

#### Example

```c
#include <stdio.h>

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

