#include<iostream>
int main(){
    int age=10;
    const double Pi=3.1415;
    std::cout<<"location &age 0x: "<<&age<<std::endl;
    std::cout<<"location &Pi 0x: "<<&Pi<<std::endl;
    return 0;
}