# Setting Up

This repository contains my implementation of the "Setting Up" project for Epitech.

## 📋 Project Overview

"Setting Up" is a C programming project focused on finding the largest possible square on a board while avoiding obstacles. The core challenge involves implementing an efficient algorithm to analyze a map and identify the optimal placement for a square.

## 🎯 Objectives

The program must:
- Find the largest possible square on a board
- Handle obstacles marked as 'o'
- Replace empty spaces ('.') with 'x' to represent the found square
- In case of multiple solutions, prioritize the highest square
- If still tied, choose the leftmost square

## 🔍 Features

The program supports two input methods:
1. **File-based input**: Reading a map from a file provided as an argument
2. **Generation-based input**: Creating a map based on size and pattern parameters

## 🛠️ Technical Details

- **Language**: C
- **Compilation**: Via Makefile (including re, clean, and fclean rules)
- **Authorized Functions**: open, read, write, close, malloc, free, stat
- **Error Handling**: All error messages are written to the error output with exit code 84

## 💻 Usage

### File-based Execution
```
./setting_up [map_file]
```

### Map Generation
```
./setting_up [size] [pattern]
```

## 🗺️ Map Format

A valid map file must follow these rules:
- First line contains only the number of lines on the board
- All other lines contain only '.' (empty space) and 'o' (obstacle)
- All lines must have the same length (except the first one)
- The file must contain at least one line
- Each line must end with a newline character

## 📊 Algorithm

This project implements a dynamic programming approach to find the largest square. The solution:
- Creates a matrix to track potential square sizes
- Processes the map to identify valid positions
- Determines the maximum possible square size at each position
- Identifies the optimal position based on project requirements

## 🧪 Examples

### Input Example
```
9
.............................
....o.......................
............o...............
.............................
....o.......................
..............o..............
.............................
......o..............o.....
..o.......o................
```

### Output Example
```
.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxxo...............
.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxx...o............
.....xxxxxxx................
......o..............o.....
..o.......o................
```

## 📚 Learning Objectives

This project helped me develop skills in:
- Dynamic programming
- Efficient algorithm implementation
- File I/O operations in C
- Memory management
- Input validation and error handling
