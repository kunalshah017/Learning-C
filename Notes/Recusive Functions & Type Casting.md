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
    
    [[Recusive Functions & Type Casting]]
    

### Recursion

- Recursion or recursive function is a function that calls itself.
- In the function, we have to specify the base case, which is the condition that will stop the recursion and the recursive case, which is the condition that will continue the recursion.
- Recursion is useful when we have to solve a problem that can be broken down into smaller problems of the same type. or doing the same thing over and over again without looping.
- syntax:

```
void recursive_function(int n){
    // base case
    if(n == 0){
        return;
    }
    // recursive case
    else{
        printf("%d\n", n);
        recursive_function(n-1);
    }
}
```

- Example: Factorial of a number using recursion

```
\#include <stdio.h>

int factorial(int n){
    // base case
    if(n == 0){
        return 1;
    }
    // recursive case
    else{
        return n * factorial(n-1);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
```

- Run Code

[https://replit.com/@kunalshah017/Recursion](https://replit.com/@kunalshah017/Recursion)

### Type Casting

- Type casting is a way to convert a variable from one data type to another data type.
- in `C`, typecasting can be done in two ways:
    - Implicit Type Casting
    - Explicit Type Casting

### Implicit Type Casting

- Implicit type casting is done automatically by the compiler.
- In implicit type casting, the compiler automatically converts the data type of the operand to the data type of the other operand if they are not of the same type.
- Example:

```
int a = 10;
float b = 20.5;
float c = a + b; // a is implicitly converted to float
```

### Explicit Type Casting

- Explicit type casting is done by the programmer.
- In explicit type casting, the programmer converts the data type of the operand to the data type of the other operand if they are not of the same type.
- Explicit type casting is done by placing the data type in parentheses before the operand.
- Example:

```
int a = 10;
float b = 20.5;
int c = (int) b + a; // b is explicitly converted to int
```

- Example of type casting in `C`:

```
\#include <stdio.h>

int main(){
    int a = 10;
    float b = 20.5;
    float c = a + b; // a is implicitly converted to float
    printf("c = %f\n", c);

    int d = 10;
    float e = 20.5;
    int f = (int) e + d; // e is explicitly converted to int
    printf("f = %d\n", f);
    return 0;
}
```

- Run Code

[https://replit.com/@kunalshah017/Type-Casting](https://replit.com/@kunalshah017/Type-Casting)

  

---

Back - [[Preprocessor & Macro Statements]]

Next - Done :)

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)