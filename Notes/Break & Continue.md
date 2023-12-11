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
    

### Break Statement

- `break` statement is used to terminate the loop.
- `break` statement is used inside `switch` statement & loops.
- it exits the loop & executes the next statement after the loop.

### Syntax

```
break;
```

### Continue Statement

- `continue` statement is used to skip the current iteration & continue with the next iteration.
- `continue` statement is used inside loops.

### Syntax

```
continue;
```

  

- Example

```
\#include<stdio.h>

int main() {
    int i;

    // Using break statement
    printf("Using break statement:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        printf("%d\n", i);
    }

    // Using continue statement
    printf("\nUsing continue statement:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
```

- Run Code

[https://replit.com/@kunalshah017/Break-and-Continue](https://replit.com/@kunalshah017/Break-and-Continue)

  

---

Back - [[Loops]]

Next - [[Array]]

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)