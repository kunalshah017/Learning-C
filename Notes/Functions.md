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
    

- Functions are code blocks that perform a specific task.
- In `C`, there are 2 types of functions:
    - Library Functions
    - User-defined Functions

### Library Functions

- Library functions are the functions which are already defined in `C` libraries.
- We can use these functions by including the header files in our program, eg `stdio.h`, `math.h`, etc.
- for example, `printf()` is a library function from `stdio.h` header file.
- We can also create our own library functions.

### User-defined Functions

- User-defined functions are the functions which are created by the user in the program.
- We can create our own functions according to our requirements.
- User-defined functions are used to divide a large program into small modules.
- To use a function, there are 3 main steps:
    - Function Declaration
    - Function Definition
    - Function Call
- Function also have return type & parameters.
- Return type is the data type of the value returned by the function.
- Parameters are the values passed to the function.

### Syntax

```
return_type function_name(data_type parameter1, data_type parameter2, ...)
{
    // statements
    return value;
}
```

- Function with Return Type & Parameters:

```
int add(int a, int b)
{
    return a + b;
}
```

- Function with Return Type & No Parameters:

```
int add()
{
    int a = 10, b = 20;
    return a + b;
}
```

- Function with No Return Type & Parameters:

```
void add(int a, int b)
{
    printf("%d", a + b);
}
```

- Function with No Return Type & No Parameters:

```
void add()
{
    int a = 10, b = 20;
    printf("%d", a + b);
}
```

  

- Example

```
\#include <stdio.h>

// Function Declaration
int add(int a, int b);

int main() {
    int a = 10, b = 20, sum;

    // Function Call
    sum = add(a, b);

    printf("Sum = %d", sum);

    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}
```

- Run Code

[https://replit.com/@kunalshah017/Functions](https://replit.com/@kunalshah017/Functions)

---

Back - [[String & More about I-O]]

Next - [[String Functions]]

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)