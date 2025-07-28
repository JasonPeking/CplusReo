#include<iostream>
    template <typename T1=int ,typename T2=double>
    class HoldsPair{
    private:
        T1 value1;
        T2 value2;
    public:
        HoldsPair(const T1& val1,const T2& val2):value1(val1),value2(val2){}
        const T1& GetFirstvalue1() const{
            return value1;
        }
        const T2& GetSecondvalue2() const{
            return value2;
        }
    };
    int main(){
        HoldsPair<> pairIntDbl(300,10.09);
        HoldsPair<short,const char*>pairShortStr(25,"Learn template,love C++");
        std::cout<<"The first object contains -"<<std::endl;
        std::cout<<"Value 1:"<<pairIntDbl.GetFirstvalue1()<<std::endl;
        std::cout<<"Value 2:"<<pairIntDbl.GetSecondvalue2()<<std::endl;
        std::cout<<"The second object contains -"<<std::endl;
        std::cout<<"Value 1: "<<pairShortStr.GetFirstvalue1()<<std::endl;
        std::cout<<"Value 2: "<<pairShortStr.GetSecondvalue2()<<std::endl;
        return 0;
    }