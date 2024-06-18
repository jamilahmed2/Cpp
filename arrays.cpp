#include<iostream>
int main(){
    int myArray[3]={1,2,3}; // Array with 3 elements
    std::cout<<myArray[0]; // This will print First Array

    return 0;
}

#include<iostream>
int main(){
    int myArray[3]={1,2,3}; // Array with 3 elements
    myArray[0]=10; // Assign 10 to the first element
    std::cout<<myArray[0]; // Print the first element

    return 0;
}