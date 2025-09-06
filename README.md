# Calculator

This is a **C++ calculator project** that performs basic arithmetic operations.  
It includes a **Jenkinsfile** for automated build and testing using a CI/CD pipeline.

## ✨ Features
- Addition (+)
- Subtraction (-)
- Multiplication (×)
- Division (÷)
- Handles user input for numbers and operations
- Automated build and test with Jenkins

## 🛠️ Technologies Used
- C++
- Jenkins (CI/CD)
  
## 🚀 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/aybukecnz/calculator.git
   cd calculator
   ```
   
2. Compile the program:
  ```bash
g++ calculator.cpp -o calculator
```
3. Run the executable:
  ```bash
./calculator
```

## 📂 Project Structure
calculator/

 ├── calculator.cpp   # Main C++ source code
 
 ├── Jenkinsfile      # CI/CD pipeline configuration
 
 └── README.md        # Documentation

## 📈 CI/CD

Jenkinsfile automates compilation and testing whenever changes are pushed.
Ensures that the project builds correctly at all times.
