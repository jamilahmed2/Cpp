#include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}




// Constructors Parameters
#include <iostream>
using namespace std;

class Employee {        // The class
  public:               // Access specifier
    string name;        // Attribute
    string position;    // Attribute
    int age;            // Attribute
    Employee(string x, string y, int z) {  // Constructor with parameters
      name = x;
      position = y;
      age = z;
    }
};

int main() {
  // Create Employee objects and call the constructor with different values
  Employee EmployeeObj1("Jamil", "Programmer", 20);
  Employee EmployeeObj2("Ahmed", "Designer", 21);

  // Print values
  cout << EmployeeObj1.name << " " << EmployeeObj1.position << " " << EmployeeObj1.age << "\n";
  cout << EmployeeObj2.name << " " << EmployeeObj2.position << " " << EmployeeObj2.age << "\n";
  return 0;
}




// 