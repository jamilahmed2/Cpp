// Inside method
// #include<iostream>
// using namespace std;

//     class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod() {  // Method/function defined inside the class
//       cout << "Hello World!";
//     }
// };

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }



// outside 
// #include <iostream>
// using namespace std;

// class MyClass {         // The class
//   public:               // Access specifier
//     void myMethod();    // Method/function declaration
// };

// // Method/function definition outside the class
// void MyClass::myMethod() {
//   cout << "Hello World!";
// }

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }



// Parameters
#include <iostream>
using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj; // Create an object of Car
  cout << myObj.speed(10); // Call the method with an argument
  return 0;
}
