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
    

### Structures

- A structure is a collection of one or more variables, possibly of different types, grouped together under a single name for convenient handling.
- A structure is a user-defined data type in C
- `struct` is the keyword used to define a structure.

### Syntax

```
struct structure_name {
    data_type member1;
    data_type member2;
};
```

  

### Nested Structure

- When a structure contains another structure as its member, it is called a nested structure.

### Syntax

```
struct structure_name {
    data_type member1;
    data_type member2;
    ...
    struct structure_name2 {
        data_type member1;
        data_type member2;
        ...
    } member_name;
};
```

  

### Unions

- A union is a special data type available in C that allows to store different data types in the same memory location.
- You can define a union with many members, but only one member can contain a value at any given time.
- Unions provide an efficient way of using the same memory location for multiple-purpose.
- `union` is the keyword used to define a union.

### Syntax

```
union union_name {
    data_type member1;
    data_type member2;
};
```

  

### Enumerators

- Enumerators are used to define named constants in C.
- Enumerators are used with structures and unions to give a simplified name to them.
- `typedef` is the keyword used to define enumerators.

### Syntax

```
typedef struct structure_name {
    data_type member1;
    data_type member2;
} enum_name;
```

  

- Example

```
\#include <stdio.h>

// Structure Declaration with enumarator
typedef struct student {
  int roll_no;
  char name[20];
  int age;
} st1;

// Union Declaration
union car {
  int no_of_seats;
  float mileage;
};

void main() {
  // Structure Initialization
  st1 s1;
  s1.roll_no = 101;
  s1.age = 20;
  strcpy(s1.name, "John");

  // Union Initialization
  union car c1;

  // Printing Structure
  printf("Structure:\n");
  printf("Roll No: %d\n", s1.roll_no);
  printf("Name: %s\n", s1.name);
  printf("Age: %d\n", s1.age);

  // Printing Union
  printf("\nUnion:\n");
  c1.no_of_seats = 4;
  printf("No of Seats: %d\n", c1.no_of_seats);

  c1.mileage = 51.27;
  printf("Mileage: %0.2f\n", c1.mileage);

  // The value in union should be accesed before using other variable in union else it will give garbage value for the first variable as it has got overwritten by second one
}
```

- Run Code

[https://replit.com/@kunalshah017/Structure-Union-and-Enum](https://replit.com/@kunalshah017/Structure-Union-and-Enum)

---

Back - [[String Functions]]

Next - [[Pointers & Storage Class]]

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)