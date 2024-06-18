// If else Statement

// #include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter your marks: ";
    cin>>x;
    if(x>=60){
        cout<<"You are passed";
    }else{
        cout<<"Your are failed";
    }
    return 0;
}



// switch statement
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}