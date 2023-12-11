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
    

### Pointers

- A pointer is a variable that contains the address of another variable.
- Address of operator (&) is used to get the address of a variable.
- Indirection operator (*) is used to access the value of the variable whose address is stored in a pointer variable.
- Syntax:
    
    ```
    data_type *pointer_name;
    ```
    

### Double Pointers

- Double pointers are pointer variables that store memory address of a pointer
- double pointers are preceded with two asterisks (**)
- Syntax:

```
data_type **double_pointer_name;
```

### Storage class

|Properties|Memory|Default value|Scope|Life|
|---|---|---|---|---|
|auto|RAM|Garbage|Within block|Till program in block is executed|
|register|register|Garbage|Within block|Till program in block is executed|
|static|RAM|0|Within block|Till program in block is executed|
|extern|RAM|0|Global|Till Entire program is executed|

  

  

- Example

```
\#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **o = &p;
    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    printf("&p = %p\n", &p);
    printf("o = %p\n", o);
    printf("*o = %p\n", *o);
    printf("**o = %d\n", **o);
    printf("&o = %p\n", &o);
    return 0;
}
```

- Run Code

[https://replit.com/@kunalshah017/Pointers](https://replit.com/@kunalshah017/Pointers)

---

Back - [[Structures, Union & Enumarators]]

Next - [[Preprocessor & Macro Statements]]

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)