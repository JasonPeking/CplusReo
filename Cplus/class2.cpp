#include<iostream>
class Human{
private:
    int age;
public:
    int getAge(){
        if(age>30){
            return age-=2;
        }
        else
            return age;
    }
    void setAge(int humanage){
        age=humanage;
    }
};
int main(){
    Human human;
    human.setAge(30);
    std::cout<<"my age is "<<human.getAge()<<std::endl;
    return 0;
}