Jahinova is a custom programming language developed as part of a Compiler Lab project. 
It introduces a futuristic syntax system where traditional programming constructs are 
reimagined using Nova-based keywords.

The project focuses on demonstrating core compiler design principles such as:
- Token structure
- Syntax design
- Control flow handling
- Function mapping

Jahinova emphasizes readability, creativity, and structured logic while maintaining 
the fundamental behavior of modern programming languages.

#  Jahinova Language Interpreter (C++)

A mini custom programming language built using C++.
Jahinova is a command-based interpreter that supports arithmetic, logical operations, arrays, and utility functions.

---

##  Features

* ✅ 25+ Built-in Functions
* ✅ Arithmetic Operations (Add, Sub, Mul, Div, Mod, Pow, Root)
* ✅ Logical Operations (AND, OR, NOT)
* ✅ Comparison Operations (Max, Min, Eq, Greater, Less)
* ✅ Array Handling (Average, Reverse, List)
* ✅ Utility Functions (Loop sum, Increment, Decrement, Print)
* ✅ Interactive CLI (Command Line Interface)

---

##  Supported Commands

###  Arithmetic

```
NovaAdd a b
NovaSub a b
NovaMul a b
NovaDiv a b
NovaMod a b
NovaPow a b
NovaRoot a
NovaAbs a
```

### 📊 Array Operations

```
NovaAvg n elements...
NovaReverse n elements...
NovaList n elements...
```

###  Logical

```
NovaAnd a b
NovaOr a b
NovaNot a
```

###  Comparison

```
NovaMax a b
NovaMin a b
NovaEq a b
NovaNeq a b
NovaGreater a b
NovaLess a b
```

###  Utility

```
NovaInc a
NovaDec a
NovaLoop n
NovaReturn a
NovaPrint a
```

---

##  How to Compile & Run

###  Step 1: Compile

```bash
g++ main.cpp Compiler_Project.cpp -o nova
```

###  Step 2: Run

```bash
./nova
```

---

##  Example Usage

```
>> NovaAdd 2 3
5

>> NovaMul 4 5
20

>> NovaAnd 1 0
0

>> NovaAvg 5 1 2 3 4 5
3

>> NovaReverse 4 1 2 3 4
Reversed: 4 3 2 1

>> EXIT
```

---

##  Project Structure

```
📦 Jahinova-Language
 ┣ 📜 main.cpp                 # Interpreter (CLI)
 ┣ 📜 Compiler_Project.cpp    # Function Implementations
 ┣ 📜 Compiler_Project.h      # Function Declarations
 ┗ 📜 nova.exe                # Compiled Output (optional)
```

---

##  Technologies Used

* C++
* STL (Standard Template Library)
* CLI-based Interaction

---

##  Future Improvements

* 🔹 Support for `NovaAdd(2,3)` syntax
* 🔹 Variables (`let x = 10`)
* 🔹 Conditional Statements (`if-else`)
* 🔹 Loops inside language
* 🔹 File execution (`.nova` scripts)
* 🔹 Full compiler design (Lexer + Parser + AST)

---

##  Author

**Sumiya Tabassum**
CSE Student | Cybersecurity Enthusiast

---

##  Contribute

Feel free to fork, improve, and submit pull requests!

---

## 📜 License

This project is open-source and available under the MIT License.
