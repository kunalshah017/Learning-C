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
    

- An array is a collection of similar data items stored at contiguous memory locations.
- Every element in an array is located using its index number.
- The index number starts from `0` & ends at `n-1`, where `n` is the size of the array.

  

In `C`, There are 2 types of arrays:

- One Dimensional Array
- Multi-Dimensional Array

  

### One Dimensional Array

- One-dimensional array is a collection of similar data items stored at contiguous memory locations.
- It is also called a linear array.

### Syntax

```
data_type array_name[size];
```

### Multi-Dimensional Array

- If we have to store data in more than one dimension, we use multi dimensional array.
- It is also called a matrix.

### Syntax

```
data_type array_name[size1][size2];
```

Above syntax shows an example of a 2D array.

  

- Example

```
\#include <stdio.h>

int main() {
    int i;

    // One Dimensional Array
    int arr1[5] = {1, 2, 3, 4, 5};

    // Multi Dimensional Array
    int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Printing One Dimensional Array
    printf("One Dimensional Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", arr1[i]);
    }

    // Printing Multi Dimensional Array
    printf("\nMulti Dimensional Array:\n");
    for (i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

- Run Code

[https://replit.com/@kunalshah017/Array](https://replit.com/@kunalshah017/Array)

  

---

Back - [[Break & Continue]]

Next - [[String & More about I-O]]

---

==**©️**== [**Kunal Shah (kunalshah017) - 2023**](https://kunalshah017.vercel.app/)