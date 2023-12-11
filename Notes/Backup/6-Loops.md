- In a program when we want to repeat a task multiple times, we use loops.
- Loops can execute a block of code as long as a specified condition is reached.

In C programming, there are three types of loops:

- `for` loop
- `while` loop
- `do...while` loop

and if we use a loop inside another loop, it is called a nested loop.

### For Loop
- `for` loop consists of three parts:
  - initialization
  - condition
  - increment/decrement

#### Syntax
```c
for (initialization; condition; increment/decrement)
{
    // statements
}
```

### While Loop
- `while` loop executes a block of code as long as the condition is true.
- `while` loop is used when we do not know the number of iterations in advance.

#### Syntax
```c
while (condition)
{
    // statements
}
```

### Do...While Loop
- `do...while` loop is similar to `while` loop, except that it is guaranteed to execute at least one time.

- Condition is checked after executing the statements.

#### Syntax
```c
do
{
    // statements
}while (condition);
```

### Nested Loops
- We can use one or more loops inside any another while, for or do...while loop.
- Nested loops are useful when we want to perform a task repeatedly inside another task.

#### Syntax
```c
for (initialization; condition; increment/decrement)
{
    // statements
    for (initialization; condition; increment/decrement)
    {
        // statements
    }
}
```

### Example
```c
#include <stdio.h>

int main()
{
    int i, j;

    // for loop
    printf("\nfor loop:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }

    // while loop
    printf("\nwhile loop:\n");
    i = 0;
    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    // do...while loop
    printf("\ndo...while loop:\n");
    i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    }while (i < 5);

    // nested loop
    printf("\nnested loop:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}
```
