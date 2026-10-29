# Linked List File Reader (C++)

A simple C++ program that reads integers from a text file, stores them sequentially in a **dynamically allocated Linked List**, and prints them to the standard output.

## 🚀 Features
* **Dynamic Memory:** Utilizes a custom linked list structure (`struct newList`).
* **File I/O:** Parses space- or newline-separated integers from an external file.
* **Sequential Traversal:** Iterates through the list to display the stored elements.

## 📋 Requirements
* A C++ compiler supporting at least **C++11** (e.g., `g++`, `clang++`, or MSVC).
* An input file named `nums.txt` placed in the same directory as the executable.

## 🛠️ Installation & Running

1. **Clone the repository** (or copy the source code).
2. **Create the input file** named `nums.txt` and populate it with numbers:
   ```text
   10 20 30 40 50
   ```
3. **Compile the code** using a terminal:
   ```bash
   g++ -o list_reader main.cpp
   ```
4. **Run the executable**:
   ```bash
   ./list_reader
   ```

## 🔍 Code Overview

The program implements a basic singly linked list node structure:
```cpp
struct newList {
    int id;
    struct newList *next;
};
```

### Key Workflow:
1. **Initialization:** Initializes a dummy head node `L` with a default value (`7`).
2. **File Processing:** Opens `nums.txt` and appends each integer read as a new node to the tail of the list.
3. **Output:** Traverses the linked list starting from the first actual data node (`L->next`) and prints each `id` on a new line.

> [!NOTE]
> The dummy head node's value (`7`) is skipped during traversal and will not appear in the final printed output.
