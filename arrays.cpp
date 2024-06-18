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


// loop through an array
#include<iostream>
int main(){
    std::string cars[3]={"Volvo","BMW","Audi"};
    for(int i =0; i<3;i++){
        std::cout<< i << "=" << cars[i]<<std::endl;
    }
    return 0;
}

// output
// 0=Volvo
// 1=BMW
// 2=Audi