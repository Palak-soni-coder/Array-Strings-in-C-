# Experiment 7
# Name: Palak Soni
# PRN: 24070123069 
# Title: Array and Strings in C++.



---

## THEORY

## Introduction

This repositry provides an overview of the fundamental concepts and theory behind **arrays** and **strings**, two essential data structures used in programming.

---

### What is an Array?

An array is a data structure that can store a fixed-size sequential collection of elements of the same type. Arrays are used to store multiple values in a single variable instead of declaring separate variables for each value. In C++, arrays are declared with a specified size, and elements are accessed using indices starting from 0.

**Key Features:**

- Stores elements in contiguous memory locations.
- Elements can be accessed randomly using indices.
- Can hold primitive data types or user-defined data types.

### Types of Arrays
- **One-dimensional array**: Linear collection of elements.
- **Multi-dimensional array**: Arrays of arrays (e.g., 2D arrays representing matrices).

### Operations on Arrays
- Accessing elements: `arr[index]`
- Insertion and deletion (can be expensive due to shifting elements)
- Traversal (iterating over elements)
- Searching and sorting

  ### Applications
- Used for storing data collections
- Implementing other data structures like lists, stacks, queues, etc.

---

### Programs on Array
### Program 1: Input and Display Array

**Problem Statement:** Write a code to take input from user and store it in an array.

**Algorithm:**

1. Declare an array of fixed size.
2. Use a loop to take input values from the user.
3. Store each input value into the array.
4. Use another loop to print the array elements.

**Code Output:**

```
The marks of student are:
99
89
78
58
68
85
99 89 78 58 68 85 
```

**Explanation:**

- The program reads 6 integers into an array `marks[]`.
- It then prints all values using a loop.

---

### Program 2: Find Maximum and Minimum in Array

**Problem Statement:** Write a code to find the maximum and minimum value in the array.

**Algorithm:**

1. Take the number of elements from the user.
2. Input the elements into an array.
3. Initialize two variables `max` and `min` with the first array element.
4. Loop through the array and update `max` and `min` accordingly.
5. Display the results.

**Code Output:**

```
Enter number of elements: 6
Enter 6 elements:
12 65 2 78 90 34
Maximum element is: 90
Minimum element is: 2
```

**Explanation:**

- Program scans the array once to track the largest and smallest values.
- Uses two variables `max` and `min`.

---

### Program 3: Reverse an Array

**Problem Statement:** Write a code to reverse a array and display it.

**Code Output:**

```
The numbers of array are:
1
2
3
4
5
6
1 2 3 4 5 6 
Reversed array is:6 5 4 3 2 1
```

**Explanation:**

- First array is printed in order.
- Then reversed by looping backward from last index to 0.

---

### Program 4: Sum and Average of Array Elements

**Problem Statement:** Write a code to calculate sum and average of array elements.

**Code Output:**

```
The numbers of array are:
12
24
21
28
32
20
12 24 21 28 32 20 
The sum of elements of array are:
137
The average of elements of array are:
22
```

**Explanation:**

- Loop accumulates sum of all array elements.
- Average is calculated by dividing sum by 6.

---

### Program 5: Search for a Key in Array

**Problem Statement:** Write a code to store marks in an array and find key location after defining a key.

**Code Output:**

```
The marks of student are:
89
98
70
99
66
76
89 98 70 99 66 76 
key found at location:4
```

**Explanation:**

- Program scans array to find hardcoded key (99).
- If found, prints its position (1-indexed).

---

## STRINGS

### What is a String?
A **string** is a sequence of characters, usually stored as an array of characters, terminated by a special character (like `\0` in C) or managed as an object in higher-level languages.

### Key Characteristics
- Immutable in some languages (e.g., Python, Java)
- Mutable in others (e.g., C with character arrays)
- Often implemented as arrays of characters internally

### Common Operations
- Concatenation (joining two strings)
- Substring extraction
- Searching (finding a character or substring)
- Comparison
- Length calculation


### Program 1: String Input and Display

**Problem Statement:** Write a code which takes a string as input from user and display it out.

**Algorithm:**

1. Declare a string variable.
2. Prompt the user to enter a string.
3. Read the string using `cin`.
4. Print the string.

**Code Output:**

```
These are the  various ways in which we can display a string
Enter the string:
Palak
Palak
```

**Explanation:**

- Uses `cin` to take single-word input and displays it.

---

### Program 2: String Concatenation

**Problem Statement:** Write a code to take two strings and concatenate them.

**Algorithm:**

1. Declare two string variables.
2. Take input for both strings using `cin`.
3. Concatenate the strings using `+` operator.
4. Display the concatenated result.

**Code Output:**

```
Enter the string:
Palak
Enter the string:
Soni
The concatenated string is: Palak Soni
```

**Explanation:**

- Takes two strings and joins them using `+` operator.

---

### Program 3: Reverse a String

**Problem Statement:** Write a code which reverses a string.

**Code Output:**

```
Enter a string:
coding_in_C++
++C_ni_gnidoc
```

**Explanation:**

- Traverses the string backward using loop to reverse.

---

### Program 4: Palindrome Check

**Problem Statement:** Write a code to check whether a string is palindrome or not.

**Code Output:**

```
Enter the string:
racecar
racecar is a palindrome.
```

**Explanation:**

- Compares characters from both ends inward.
- If mismatch occurs, it breaks and reports it's not a palindrome.

---
## CONCLUSION

In this experiment, we explored the concepts of arrays and strings in C++ through various hands-on programs. Arrays help in managing fixed-size data collections, and we implemented functionalities like input/output, reversal, summation, and searching. Strings provide a flexible way to handle character data, where we applied operations such as input/output, concatenation, reversal, and palindrome checking. Understanding and implementing these basic operations build a strong foundation for handling more complex data structures and algorithms in future programming challenges.

---
