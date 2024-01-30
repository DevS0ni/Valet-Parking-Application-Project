# Valet Parking Application Project

*Project Description:* Parking Management System
This project implements a simple Parking Management System in C++. The system allows users to manage a parking lot where they can park and retrieve vehicles. It supports two types of vehicles: Cars and Motorcycles. 
The program provides a console-based interface for users to interact with the system.

*TechStack:*
- C++ (Object Oriented Approach) Programming Language

*Components:*

*Vehicle Class (Base Class):*
Represents a general vehicle with common attributes like license plate and make/model.
Defines methods for reading and writing vehicle information.
Serves as a base class for specific vehicle types.

*Car Class (Derived from Vehicle):*
Represents a car, inheriting from the Vehicle class.
Includes additional attributes such as whether the car has had a car wash.
Overrides methods for reading and writing car-specific information.

*Motorcycle Class (Derived from Vehicle):*
Represents a motorcycle, inheriting from the Vehicle class.
Includes additional attributes such as whether the motorcycle has a sidecar.
Overrides methods for reading and writing motorcycle-specific information.

*Menu Class:*
Manages a menu system with options for different actions within the Parking Management System.
Allows users to interactively choose actions such as parking a vehicle, returning a vehicle, listing parked vehicles, finding a vehicle, closing the parking lot, and exiting the program.

*Parking Class:*
Main class representing the Parking Management System.
Manages the parking lot, including storing vehicles, retrieving vehicles, displaying information, and handling user interactions.
Uses dynamic memory allocation for the vehicles stored in the parking lot.
Provides functionality to load and save data to a file.

*Utils Module:*
Contains utility functions for string manipulation, input validation, and other common operations used throughout the project.

# How to Run:

*Compile the Code:*
Use a C++ compiler to compile the source code files: Car.cpp, Motorcycle.cpp, Menu.cpp, Parking.cpp, and Utils.cpp. Also, include a main function that initializes and runs the Parking Management System.

*Set Up the Development Environment:*
Ensure you have a C++ development environment set up on your system, including a compiler and IDE if needed.

*Include Utils Module:*
Make sure the Utils.cpp module is included in your project, as it provides essential utility functions used throughout the program.

*Compile and Run:*
Compile the project, ensuring all source files are included.
Run the compiled executable.

*Interact with the Parking Management System:*
Follow the prompts and menu options displayed in the console to perform actions such as parking a vehicle, returning a vehicle, listing parked vehicles, finding a vehicle, closing the parking lot, and exiting the program.

*Review Output:*
The program will display information about parked vehicles, parking tickets, and relevant details based on user interactions.

*Handle Errors:*
If any errors occur during execution, review the error messages in the console to identify and address the issues.

*Note:* Ensure that the Utils module is properly implemented and accessible to the main program.
Verify that the program behaves as expected and handles edge cases appropriately.
