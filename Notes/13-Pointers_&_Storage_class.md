### Pointers

- A pointer is a variable that contains the address of another variable.

- Address of operator (&) is used to get the address of a variable.
  
- Indirection operator (*) is used to access the value of the variable whose address is stored in a pointer variable.

- Syntax:
  ```c
  data_type *pointer_name;
  ```

### Storage class

Properties | Memory | Default value | Scope | Life
--- | --- | --- | --- | ---
auto | RAM | Garbage | Within block | Till program in block is executed
register | register | Garbage | Within block | Till program in block is executed
static | RAM | 0 | within block | Till program in block is executed
extern | RAM | 0 | Global | Till program in block is executed

### Example

```c
#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    printf("Address of a: %p\n", &a);
    printf("Value of p: %p\n", p);
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *p);
    printf("Address of p: %p\n", &p);
    return 0;
}
```