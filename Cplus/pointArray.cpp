#include<iostream>
#include<string>
int main(){
    std::cout<<"enter a number you want to new: ."<<std::endl;
    int number=0;
    std::cin>>number;
    int* poitoint=new int[number];
    std::cout<<"memory allocated at:0x"<<number<<std::endl;
    delete[] poitoint;
    return 0;
}