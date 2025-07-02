#include<iostream>
#include<string>
class Human{
private:
    int age;
    std::string name;
public:
    Human(){
        age=0;
        std::cout<<"default constructor"<<std::endl;
    }
    Human(std::string humanName,int humanAge){
        age=humanAge;
        name=humanName;
        std::cout<<"Overload constructor"<<std::endl;
    }
};
int main(){
    Human human;
    Human human2("david",24);
    return 0;
}