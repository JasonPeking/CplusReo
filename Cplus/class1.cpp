#include<iostream>
#include<string>
//Work
class Human{
public:
    int age;
    std::string name;
    void DisplayData(){
        std::cout<<"I am "<<name<<" and ";
        std::cout<<"my age is "<<age<<std::endl;
    }
};
int main(){
    Human human;
    human.name="David";
    human.age=24;
    human.DisplayData();
    return 0;
}