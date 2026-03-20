# ECE3310_Project1_NumericalAnalysis

## Overview
This C++ project calculates the mean population across all U.S. states for the year 2020 using recursion. It was developed to demonstrate the practical application of an Array Abstract Data Type (ADT) and recursive algorithms.

The program reads state names and their corresponding 2020 populations from external text files, populates an array of structures, and recursively computes the national average.

**Author:** Mike Plata (@M1-K3)  
**Course:** ECE 3310 - Data Structures and Algorithms  

## Features
- **Custom Data Structures:** Uses a `State` struct to store each state's name and population.
- **Array ADT Implementation:** Manages an array of 51 state objects (including the District of Columbia) using a custom `UsaPopulations` class.
- **File I/O:** Dynamically reads data from `StateNames.txt` and `StatePopulations.txt`.
- **Recursive Processing:** Computes the population mean entirely through a recursive function rather than an iterative loop.
- **Formatted Output:** Displays a clean, formatted table of all states and their populations before presenting the final calculated mean.

## File Structure
- `PA-1_NumericalAnalysis.cpp`  
  Main driver file. Handles file ingestion, recursive calculation, and console output.

- `State.h`  
  Defines the `State` struct with:
  - `stateName` (string)
  - `statePopulation` (long)

- `UsaPopulations.h` / `UsaPopulations.cpp`  
  Declaration and implementation of the Array ADT class managing the collection of `State` objects.

- `StateNames.txt`  
  Plain text file containing all 50 U.S. states plus the District of Columbia.

- `StatePopulations.txt`  
  Plain text file containing corresponding population data for the year 2020.

## Technical Notes & Modifications
- **Data Types:**  
  Uses the `long` data type for population values to prevent scientific notation in output.

- **Assignment Adjustments:**  
  The `year` field was omitted from the `State` struct since all data corresponds exclusively to 2020.

## Compilation & Execution
To run this project:

1. Ensure all `.cpp`, `.h`, and `.txt` files are in the same directory.

2. Compile the program:
   ```bash
   g++ PA-1_NumericalAnalysis.cpp UsaPopulations.cpp -o numerical_analysis
   ```
3. Run the executable:
  ```bash
   ./numerical_analysis
  ```
4. The program will:
- Read input data from the text files
- Display a formatted table of states and populations
- Output the calculated mean population
