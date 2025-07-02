#include<iostream>
int main(){
    int age=30;
    int *pointtoint=&age;
    std::cout<<"lcoation: "<<hex<<pointtoint<<std::endl;
    return 0;
}