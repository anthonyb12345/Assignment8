# Assignment8

# Employee Management System

This C++ project demonstrates an Employee Management System with various features of object-oriented programming. The system includes classes for `Employee`, `Engineer`, and `Manager`, and showcases the use of virtual inheritance, exception handling, passing by reference, and header files.

## Features

### Virtual Inheritance
Virtual inheritance ensures that when multiple inheritance is used, only one instance of the base class is inherited.

### Pass by Reference
Passing by reference allows functions to modify the actual arguments passed to them. In this project, the `swap_departments` method in the `Manager` class demonstrates passing by reference to swap departments between two `Manager` instances.

### Throwing Exceptions (Try and Catch)
Exceptions handle error conditions. The `set_speciality` method in the `Engineer` class and the `set_salary` method in the `Employee` class use exceptions to manage invalid inputs. This includes throwing and catching exceptions to handle specific error cases.

### Header Files
Header files (`.h` files) are used to declare the structure of classes and their methods, facilitating modular programming. They separate declarations from definitions, allowing for better organization and maintenance of code.

## Classes and Methods

### Class: `Employee`

- **`Employee::Employee`**
  - **Description**: Constructor that initializes the employee's name, employee ID, and salary.
  
- **`get_name`**
  - **Description**: Returns the employee's name.
  
- **`set_name`**
  - **Description**: Sets the employee's name.
  
- **`get_employeeID`**
  - **Description**: Returns the employee's ID.
  
- **`set_employeeID`**
  - **Description**: Sets the employee's ID.
  
- **`get_salary`**
  - **Description**: Returns the employee's salary.
  
- **`set_salary`**
  - **Description**: Sets the employee's salary. Throws an exception if the salary is negative.

- **`virtual void work() = 0`**
  - **Description**: Pure virtual function that makes the `Employee` class abstract. Derived classes must provide an implementation for this function.

### Class: `Engineer` (Inherits from `Employee`)

- **`Engineer::Engineer`**
  - **Description**: Constructor that initializes the employee's name, employee ID, salary, and speciality.
  
- **`set_speciality`**
  - **Description**: Sets the engineer's speciality. Throws an exception if "Software" is used and defaults to "General" if an exception occurs.
  
- **`get_speciality`**
  - **Description**: Returns the engineer's speciality.
  
- **`work`**
  - **Description**: Prints the engineer's name and speciality.

### Class: `Manager` (Inherits from `Employee`)

- **`Manager::Manager`**
  - **Description**: Constructor that initializes the employee's name, employee ID, salary, and department.
  
- **`set_department`**
  - **Description**: Sets the manager's department.
  
- **`get_department`**
  - **Description**: Returns the manager's department.
  
- **`work`**
  - **Description**: Prints the manager's name and department. 
  
- **`swap_departments`**
  - **Description**: Swaps departments between two `Manager` instances.