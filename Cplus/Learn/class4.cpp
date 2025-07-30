#include<iostream>
#include<string>
class Human{
private:
    int age;
    std::string name;
public:
    Human(std::string humanName,int humanAge)
    :name(humanName),age(humanAge){
        std::cout<<"Constructed a men name called "<<name;
        std::cout<<","<<age<<"years old"<<std::endl;
    }
};
int main(){
    //Human human;
    Human human2("david",23);
    return 0;
}