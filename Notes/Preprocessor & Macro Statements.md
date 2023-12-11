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
    

### Pre-Procesor Statements

- Pre-processor statements are executed before compilation of program.
- Pre-processor statements are used to include header files, define macros, conditional compilation, etc.

### Syntax

```
\#include <header_file>
\#include "header_file
```

### Macros

- Macros are the pre-processor directives which are used to define constants.
- Macros are defined using `\#define` directive.

### Syntax

```
\#define identifier value
```

  

- Example

```
\#include <stdio.h>

\#define PI 3.14

int main() {
    float radius = 5.0;
    float area = PI * radius * radius;

    printf("Area of circle: %f", area);

    return 0;
}
```

- Run Code

[https://replit.com/@kunalshah017/Pre-Processor-and-Macro-Statements](https://replit.com/@kunalshah017/Pre-Processor-and-Macro-Statements)

---

Back - [[Pointers & Storage Class]]

Next - [[Recusive Functions & Type Casting]]

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)