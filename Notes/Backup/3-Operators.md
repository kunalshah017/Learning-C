### Operators
- Special symbols that perform specific operations on one, two, or three operands, and then return a result in the form of a value.
  
- Operators are used to perform operations on variables and values.
  
- There are 5 types of operators in `C`:
  - Arithmetic Operators
  - Relational Operators
  - Logical Operators
  - Bitwise Operators
  - Assignment Operators
  - Conditional Operators

#### Arithmetic Operators
- Arithmetic Operators are used to perform arithmetic operations on variables and values.
  
Operator | Name | Description
:---: | :---: | :---:
`+` | Addition | Adds two operands
`-` | Subtraction | Subtracts second operand from the first
`*` | Multiplication | Multiplies both operands
`/` | Division | Divides numerator by denominator
`%` | Modulus | Returns the remainder of the division

#### Relational Operators
- Relational Operators are used to compare two values.
  
Operator | Name | Description
:---: | :---: | :---:
`==` | Equal to | Checks if the values of two operands are equal or not. If yes, then the condition becomes true.
`!=` | Not equal to | Checks if the values of two operands are equal or not. If values are not equal, then the condition becomes true.
`>` | Greater than | Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.
`<` | Less than | Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.
`>=` | Greater than or equal to | Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.
`<=` | Less than or equal to | Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.

#### Logical Operators
- Logical Operators are used to combine conditional statements.
  
Operator | Name | Description
:---: | :---: | :---:
`&&` | Logical AND | If both the operands are non-zero, then the condition becomes true.
`\|\|` | Logical OR | If any of the two operands are non-zero, then the condition becomes true.
`!` | Logical NOT | Reverses the logical state of its operand. If a condition is true, then the Logical NOT operator will make it false.

#### Bitwise Operators
- Bitwise Operators are used to perform bit-level operations on variables and values.

Operator | Name | Description
:---: | :---: | :---:
`&` | Bitwise AND | Sets each bit to 1 if both bits are 1.
`\|` | Bitwise OR | Sets each bit to 1 if one of two bits is 1.
`^` | Bitwise XOR | Sets each bit to 1 if only one of two bits is 1.
`~` | Bitwise NOT | Inverts all the bits.
`<<` | Left Shift | Shifts left by pushing zeros in from the right and let the leftmost bits fall off.
`>>` | Right Shift | Shifts right by pushing copies of the leftmost bit in from the left, and let the rightmost bits fall off.

#### Assignment Operators
- Assignment Operators are used to assign values to variables.

Operator | Example | Description
:---: | :---: | :---:
`=` | `x = 5` | Assigns values from right side operands to left side operand
`+=` | `x += 5` | It adds the right operand to the left operand and assigns the result to the left operand
`-=` | `x -= 5` | It subtracts the right operand from the left operand and assigns the result to the left operand
`*=` | `x *= 5` | It multiplies the right operand with the left operand and assigns the result to the left operand
`/=` | `x /= 5` | It divides the left operand with the right operand and assigns the result to the left operand
`%=` | `x %= 5` | It takes modulus using two operands and assigns the result to the left operand
`<<=` | `x <<= 5` | It performs left shift on the left operand and assigns the result to the left operand
`>>=` | `x >>= 5` | It performs right shift on the left operand and assigns the result to the left operand
`&=` | `x &= 5` | It performs Bitwise AND on the left operand and assigns the result to the left operand
`\|=` | `x \|= 5` | It performs Bitwise OR on the left operand and assigns the result to the left operand
`^=` | `x ^= 5` | It performs Bitwise XOR on the left operand and assigns the result to the left operand

#### Conditional Operators

Operator | Name | Description
:---: | :---: | :---:
`?:` | Conditional Operator | It is used to evaluate a condition. If the condition is true, then the first value is returned. If the condition is false, then the second value is returned.

Example:

```c
int a = 5, b = 2;

// Conditional Operator
printf("Conditional Operator\n");
printf("%d > %d = %s", a, b, a > b ? "true" : "false");
printf("\n");
```

Output:

```c
Conditional Operator
5
```


#### Example

```c
#include<stdio.h>

void main()
{
    int a = 5, b = 2;

    // Arithmetic Operators
    printf("Arithmetic Operators\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("\n");

    // Relational Operators
    printf("Relational Operators\n");
    printf("%d == %d = %d\n", a, b, a == b);
    printf("\n");

    // Logical Operators
    printf("Logical Operators\n");
    printf("%d && %d = %d\n", a, b, a && b);
    printf("\n");

    // Bitwise Operators
    printf("Bitwise Operators\n");
    printf("%d & %d = %d\n", a, b, a & b);
    printf("\n");

    // Assignment Operators
    printf("Assignment Operators\n");
    printf("%d += %d = %d\n", a, b, a += b);
    printf("\n");

    // Conditional Operator
    printf("Conditional Operator\n");
    printf("%d > %d = %s", a, b, a > b ? "true" : "false");
    printf("\n");
}
```