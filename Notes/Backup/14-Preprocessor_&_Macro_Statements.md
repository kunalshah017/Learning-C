### Pre-Procesor Statements

- Pre-processor statements are executed before compilation of program.
- Pre-processor statements are used to include header files, define macros, conditional compilation, etc.

#### Syntax

```c
#include <header_file>
#include "header_file"
```

### Macros

- Macros are the pre-processor directives which are used to define constants.
- Macros are defined using `#define` directive.

#### Syntax

```c
#define identifier value
```

### Example

```c
#include <stdio.h>

#define PI 3.14

int main() {
    float radius = 5.0;
    float area = PI * radius * radius;

    printf("Area of circle: %f", area);

    return 0;
}
```