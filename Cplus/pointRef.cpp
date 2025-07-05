//引用相应变量的别名
#include<iostream>
int main(){
    int original=30;
    std::cout<<"original="<<original<<std::endl;
    std::cout<<"original is at address: "<<&original<<std::endl;
    int& ref1=original;
    std::cout<<"ref1 is at address: "<<&ref1<<std::endl;
    int& ref2=ref1;
    std::cout<<"ref2 is at address: "<<&ref2<<std::endl;
    return 0;
}