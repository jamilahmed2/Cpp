// do while
#include<iostream>

int main(){
  int sum=0,val=1;
  do{
    sum+=val;
    val++;
  }while(val<=10);
  std::cout<<"Sum of valueis: " << sum << std::endl;
  return 0;
}
