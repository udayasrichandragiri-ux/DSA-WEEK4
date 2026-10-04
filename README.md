# 🗺️ Data Structures – Graphs & Dynamic Programming

This repository contains implementations and assignments based on **Graphs, Graph Traversal Algorithms, Shortest Path Algorithms, and Dynamic Programming** using C++.

## 📚 Topics Covered

* 📊 Graph Representation

  * Adjacency List
  * Adjacency Matrix
* 🔎 Graph Traversal

  * Breadth-First Search (BFS)
  * Depth-First Search (DFS)
* 🛣️ Shortest Path

  * Dijkstra's Algorithm
* 🧠 Dynamic Programming Basics

  * Memoization
  * Tabulation
* 🎒 0/1 Knapsack Problem

## 📝 Assignments

### 1. BFS and DFS

Implement graph traversal algorithms in C++:

* **BFS (Breadth-First Search)**
* **DFS (Depth-First Search)**
* Represent graphs using adjacency lists or adjacency matrices.
* Visit and process graph vertices systematically.

### 2. Dijkstra's Algorithm

Find the **shortest path** between vertices in a weighted graph using Dijkstra's Algorithm.

The program demonstrates:

* Weighted graph representation
* Distance calculation
* Finding the shortest route
* Maintaining visited/unvisited vertices

### 3. Fibonacci Using Dynamic Programming

Solve the Fibonacci sequence using two Dynamic Programming techniques:

#### Memoization

* Top-down approach
* Uses recursion
* Stores previously calculated results to avoid repeated calculations

#### Tabulation

* Bottom-up approach
* Uses an array/table
* Builds the solution from smaller subproblems

### 4. 0/1 Knapsack Problem

Implement the **0/1 Knapsack** algorithm using Dynamic Programming.

The program determines the maximum value that can be obtained while keeping the total weight within the given capacity.

Each item can either be:

* ✅ Included once
* ❌ Not included

## 🚕 Mini Project – City Path Finder

### 🗺️ City Path Finder Using Graphs

A graph-based mini project that represents **cities as nodes** and **roads/routes as edges**.

The project finds the shortest route between two selected cities.

### Features

* 🏙️ Represent cities as graph nodes
* 🛣️ Represent roads as edges
* 📍 Store distances between cities
* 🔍 Select a starting city
* 🎯 Select a destination city
* 🧭 Find the shortest route
* 📏 Calculate the shortest distance

### Example

```text
        10
   A -------- B
   |          |
  15          5
   |          |
   C -------- D
        10
```

For example, the program can find the shortest route between two cities by applying **Dijkstra's Algorithm** when the roads have non-negative weights.

## 🛠️ Technologies Used

* **Language:** C++
* **IDE:** Visual Studio Code
* **Compiler:** GCC / MinGW / MSYS2 UCRT64
* **Version Control:** Git & GitHub

## 📂 Project Structure

```text
Graphs-Dynamic-Programming/
│
├── BFS.cpp
├── DFS.cpp
├── Dijkstra.cpp
├── Fibonacci_Memoization.cpp
├── Fibonacci_Tabulation.cpp
├── Knapsack.cpp
├── CityPathFinder.cpp
└── README.md
```

> File names may vary depending on how the programs are organized in the repository.

## ▶️ How to Run

### Using VS Code with MSYS2 UCRT64

Open the **MSYS2 UCRT64 terminal** and navigate to your project folder.

Compile a program:

```bash
g++ BFS.cpp -o BFS
```

Run it:

```bash
./BFS
```

For the City Path Finder:

```bash
g++ CityPathFinder.cpp -o CityPathFinder
./CityPathFinder
```

## 🎯 Learning Objectives

This repository demonstrates:

* Understanding graph data structures
* Representing graphs using adjacency lists and matrices
* Implementing BFS and DFS
* Finding shortest paths using Dijkstra's Algorithm
* Understanding Dynamic Programming
* Applying Memoization and Tabulation
* Solving the 0/1 Knapsack problem
* Applying graph algorithms to a real-world City Path Finder problem

 🚀 Mini Project Application

The **City Path Finder** demonstrates how graph algorithms can be applied to real-world navigation problems.

Cities are treated as **vertices**, roads are treated as **edges**, and road distances are used as **weights**. Dijkstra's Algorithm can then be used to determine the shortest route between two cities.

 👩‍💻 Author

**Udayasri Chandragiri**

This repository was created as part of learning and practicing **Data Structures and Algorithms in C++**.
