PROJECT 7

NAME: Varadraj Kulkarni
ROLL NO: 127 (PRN: B25CE1127)
CLASS: FY CE 2
BATCH: C

AIM: Create a C program to perform various file operations, including reading
from a file, writing to a file, and displaying the contents of a file. The
program should provide options for the user to select the desired operation
from a menu. Upon selecting an operation, the program should execute the
corresponding functionality using appropriate file handling techniques.
Additionally, the program should handle errors such as file not found or
permission issues gracefully and provide informative messages to the user.


RESEARCH:
In the real world, almost every digital service requires user authentication — mobile apps, websites, banking portals, OTT platforms, and even basic offline software.
Behind these systems lies a simple idea: store user information and check it during login. Before modern databases existed, early software stored usernames and passwords in simple text files. Even today, prototypes, mini-projects, and small offline tools still use basic file handling for:
Saving user details
Loading user information
Comparing login credentials
Maintaining logs or history
Understanding file handling in C gives beginners a foundation for:
User authentication logic
Reading and writing structured data


Working with files safely
Understanding how larger systems (like SQL databases) evolved
SOURCES:
Let Us C – Yashavant Kanetkar
GeeksforGeeks – file handling basics
TutorialsPoint – C programming fundamentals

PROJECT: Simple File-Based Login System

ANALYSIS:
To achieve a working login/registration system, the program was analyzed with focus on:

1. File Operations:
The program needs to:
Write username and password into a file
Read stored data line by line
Validate user input using comparisons
Two file modes are mainly used:
"a" : to append new registration data
"r" : to read stored login details

2. Registration Logic:
A user enters a username and password.
Both are written into the file on separate lines.
This ensures that login reading is predictable and simple.
3. Login Logic:
During login:
The file is opened for reading
The program scans each stored username–password pair
strcmp() is used to compare user input with file data
If a match is found, login succeeds
Otherwise, the program reports failure
This replicates how early authentication systems worked — searching linearly through stored credentials.
A beginner-friendly menu is used:
1. Login
2. Register
3. Exit
It allows users to choose what they want to do without complexity.

IDEATE:
Before choosing a Login System, several file-operation project ideas were considered:
1. Note Pad Simulator – write notes into a file, read them back
2. Simple Banking Record System – deposit/withdraw with updates saved
4. Mini Phonebook – save and search contacts
5. Daily Expense Logger – append and display transactions

The Login System was selected because:
It uses both reading and writing operations
It immediately feels practical and relatable
It demonstrates how authentication is built at a basic level
It allows multiple concepts (strings, loops, file I/O, comparison) to work together
It is a strong real-life example of how file handling supports user-based applications.

BUILD:
The project was built step-by-step as follows:
1. File Setup:
2. Registration Module:
3. Login Module:
4. Menu Loop:

TESTING:



Output-
1. Login
2. Register
3. Exit
2
Username: karan
Password: 123456
Registered.

1. Login
2. Register
3. Exit
2
Username: varadraj
Password: 23456
Registered.

1. Login
2. Register
3. Exit
1
Enter username: varadraj
Enter password: 23456
Login successful!
Welcome, varadraj!


IMPLIMENTATION:
Github link:  


CONCLUSION:
This project successfully demonstrates how file handling can be used to build a simple authentication system.
It covers:
Writing data into files
Reading data line by line
Using string comparison for validation
Implementing a menu-driven structure
Storing multiple user accounts
It is a practical beginner project that mirrors real-world login mechanisms in a very simplified form.


  

