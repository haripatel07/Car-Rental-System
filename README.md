# Car Rental System (C++ Project)

This is a **Car Rental System** implemented in C++.  
It allows users to **sign up, log in, and book taxis** between major cities, while also supporting **driver and car registration**.  
The program uses **file handling** to save fare details, and applies **object-oriented programming concepts** such as classes, inheritance, and encapsulation.

---

## Features
- **User Management**: New user registration & login system  
- **Car & Driver Registration**: Drivers can register cars with details like license number, vehicle number, and service location  
- **Journey Booking**: Users can book a taxi between 7 major Indian cities  
- **Fare Calculation**: Distance-based fare with GST and service charge, stored in `rent.txt`  
- **File Handling**: Saves journey and fare details to a text file  

---

## Supported Cities
- Ahmedabad  
- Mumbai  
- Kolkata  
- Chennai  
- Delhi  
- Bangalore  
- Noida  

---

## Sample Workflow
1. Start the program  
2. Register as a new user and log in  
3. Register a car and driver (if driver option is enabled)  
4. Choose pickup and drop cities  
5. View calculated fare (also written to `rent.txt`)  

---

## Concepts Used
- **Object-Oriented Programming (OOP):** Classes (`USER`, `driver`, `car`, `book_taxi`)  
- **Inheritance:** `car` inherits from `driver`  
- **File Handling:** `ofstream` used to write rent details  
- **Vectors:** Dynamic storage of users, drivers, and cars  

