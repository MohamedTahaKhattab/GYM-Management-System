# GYM Management System
A comprehensive gym management application developed as the final project for the Object-Oriented Analysis and Design course at the Egyptian Chinese University. This C++ application demonstrates object-oriented programming principles through a real-world business management scenario.

## Overview

The GYM Management System is a console-based application that facilitates the management of gym operations by providing distinct interfaces for three types of users: managers, coaches, and trainees. The system handles user authentication, account management, messaging between users, and maintains records for gym members and staff.

## Features

### Manager Capabilities
The manager serves as the system administrator with comprehensive access to all system functions:
- View detailed information about any coach or trainee by their ID
- Receive and read messages from both coaches and trainees
- Create new accounts for coaches and trainees
- Delete existing accounts with reason documentation
- Modify personal credentials (username and password)
- Access complete staff and member statistics

### Coach Capabilities
Coaches have access to features relevant to their role:
- View personal profile information including salary, working hours, and client count
- Send messages directly to the manager
- Access trainee information for their assigned clients
- Update personal password for security
- View work schedule and client assignments

### Trainee Capabilities
Trainees can manage their membership through the following features:
- View complete profile including subscription details and training plan
- Communicate with management through the messaging system
- Update account password
- Process membership cancellation with automatic refund calculation (75% refund policy)
- View assigned coach and training schedule

## Technical Architecture

### Class Structure

The application follows object-oriented design principles with a clear inheritance hierarchy:

**Person Class** - Base class containing common attributes:
- Personal information (name, email, phone number)
- Physical attributes (age, weight, height)
- Authentication credentials
- Messaging functionality

**Coach Class** (inherits from Person):
- Employee ID and salary information
- Client management (number of clients)
- Work schedule (days and hours)
- Specialized display methods

**Trainee Class** (inherits from Person):
- Member ID and subscription details
- Training plan and coach assignment
- Payment records and supplement recommendations
- Unsubscribe functionality with refund calculation

**Manager Class** - Standalone administrative class:
- System authentication
- User account management
- Message handling system
- Administrative controls

### Data Management

The system utilizes dynamic memory allocation through C++ vectors to manage variable numbers of users. Initial capacity supports 4 coaches and 20 trainees, with automatic expansion as needed. Pre-populated demo data provides immediate testing capabilities upon launch.

## Installation and Setup

### Prerequisites
- C++ compiler with C++11 support or higher
- Standard C++ libraries
- Console/terminal environment

### Compilation Instructions

Navigate to the Source Code directory and compile all source files:

```bash
g++ -o GymManagement Source.cpp Person.cpp Coach.cpp Trainee.cpp Manager.cpp
```

For Windows users with Visual Studio:
```bash
cl /EHsc Source.cpp Person.cpp Coach.cpp Trainee.cpp Manager.cpp
```

### Running the Application

Execute the compiled binary:
```bash
./GymManagement
```

On Windows:
```bash
GymManagement.exe
```

## Usage Guide

### Default Credentials

**Manager Account:**
- Username: Manager
- Password: 12345

**Demo Coach Account:**
- ID: 1
- Password: jnji656

**Demo Trainee Account:**
- ID: 1
- Password: 126126

### Navigation

Upon launching the application, users are presented with a main menu offering three login options plus exit. After successful authentication, role-specific menus provide access to available features. The system uses numeric input for menu navigation, ensuring ease of use.

### Important Operations

**Creating New Accounts (Manager Only):**
The manager can create new accounts by selecting option 7 from the manager menu. The system prompts for all required information and automatically assigns the next available ID.

**Sending Messages:**
Both coaches and trainees can send messages to the manager through their respective menu options. Messages include sender identification automatically.

**Account Deletion:**
When deleting accounts, the system requires confirmation and a reason for the deletion. This maintains an audit trail for administrative purposes.

## Project Structure

```
GYM-Management-System/
├── README.md
└── Source Code/
    ├── Person.h        - Base class header
    ├── Person.cpp      - Base class implementation
    ├── Coach.h         - Coach class header
    ├── Coach.cpp       - Coach class implementation
    ├── Trainee.h       - Trainee class header
    ├── Trainee.cpp     - Trainee class implementation
    ├── Manager.h       - Manager class header
    ├── Manager.cpp     - Manager class implementation
    └── Source.cpp      - Main program entry point
```

## Key Design Decisions

The system implements several important design patterns and practices:

**Inheritance Hierarchy:** The Person base class eliminates code duplication by providing common functionality to both Coach and Trainee classes.

**Encapsulation:** All class members are private with public getter and setter methods, ensuring data integrity and controlled access.

**Dynamic Memory Management:** Vector containers provide flexible user capacity while maintaining memory efficiency.

**Separation of Concerns:** Each class handles its specific responsibilities, promoting maintainability and extensibility.

## Future Enhancements

Potential improvements for future versions include:
- Persistent data storage using file I/O or database integration
- Graphical user interface for improved user experience
- Automated scheduling system for training sessions
- Financial reporting and payment tracking
- Equipment and facility management modules
- Member attendance tracking
- Performance analytics and reporting

## Academic Context

This project was developed as the final assignment for the Object-Oriented Analysis and Design course at the Egyptian Chinese University. It demonstrates practical application of object-oriented programming concepts including inheritance, encapsulation, polymorphism, and dynamic memory management in C++.

## License

This project is part of academic coursework at the Egyptian Chinese University. Please refer to your institution's policies regarding code sharing and academic integrity when using this repository.

