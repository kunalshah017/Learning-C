### Data Types

- Data types are used to specify the type of data that a variable can store.
  
- There are 4 types of data types in `C`:
  - `int`
  - `float`
  - `char`
  - `double`

#### `int` - Integer
- `int` is used to store integer values like `1`, `2`, `3`, etc.
- `int` can store both positive & negative values.
- `int` can store values from `-32768` to `32767`.

#### `float` - Floating Point
- `float` is used to store decimal values like `1.2`, `3.14`, `2.5`, etc.
- `float` can store both positive & negative values.
- `float` can store values from `-3.4e38` to `3.4e38`.

#### `char` - Character
- `char` is used to store single character like `'a'`, `'b'`, `'c'`, etc.

#### `double` - Double
- `double` is used to store decimal values like `1.2`, `3.14`, `2.5`, etc.

#### `String` - Character Array
- `String` is used to store multiple characters like `"Hello"`, `"World"`, `"C"`, etc.
  
- `String` is not a data type in `C`. It is a array of characters.

#### Format Specifiers of Data Types

Format Specifiers are used to refer to a particular data type in `C`.

It is used in `printf()` & `scanf()` functions.

| Data Type | Format Specifier |
| :---: | :---: |
| `int` | `%d` |
| `float` | `%f` |
| `char` | `%c` |
| `double` | `%lf` |
| `String` | `%s` |


---

### Variables

- Variables are basically like containers which are used to store data.
  
- Variables are used to store data temporarily in the memory.

- Variables are used to store different types of data like `int`, `float`, `char`, etc.
  
- Variables are declared using a data type & a name.

- Syntax:
  ```c
  data_type variable_name;
  ```

#### Rules for naming a variable

- Variable name can contain alphabets, digits & underscore(`_`).

- Variable name cannot start with a digit.

- Variable name cannot contain spaces.

- Variable name cannot contain special characters like `!`, `@`, `#`, `$`, etc.
  
- Variable name cannot be a reserved keyword.

#### Constant Variables

- Constant variables are variables whose value cannot be changed.
- Constant variables are declared using `const` keyword.
- If we try to change the value of a constant variable, then it will give an error.

- Syntax:
  ```c
  const data_type variable_name;
  ```

- Example:
  ```c
  #include<stdio.h>

  void main()
  {

    int a=10; // Integer Variable Declaration
    printf("\n%d",a);

    float b=3.14; // Floating Point Variable Declaration
    printf("\n%f",b);

    char c='A'; // Character Variable Declaration
    printf("\n%c",c);

    double d=3.14; // Double Variable Declaration
    printf("\n%lf",d);

    char e[]="Hello"; // String Variable Declaration
    printf("\n%s",e);

    }
    ```
