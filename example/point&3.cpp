#include<iostream>
int main(){
    int dogAge;
    int* pointdogAge=&dogAge;
    std::cin>>*dogAge;
    std::cout<<"The dog age is ."<<std::endl;
    if(*dogAge>5||*dogAge<20){
        std::cout<<"the dog is dead!"<<std::endl;
    }
    else if(*dogAge>0||*dogAge<5){
        std::cout<<"The dog is alive!"<<std::endl;
    }
    else{
        std::cout<<"Please input true type!"<<std::endl;
    }
    return 0;
}