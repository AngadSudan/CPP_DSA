#include <iostream>
namespace Banking {

    namespace Shopping {
    int deductPrice(){
        return 1000;
    }
}

    int calculateInterest(){
        return 1000;
    }
}

// namespace alias
namespace RandomNumber{
    int generateNumber(){
        return 1;
    }
}

namespace random = RandomNumber;

//anonymous nampespace
namespace {
    int secretCode = 9210;
    void display(){
        std::cout<< secretCode << std::endl;
    }
}



int main(){
    std::cout<< Banking::Shopping::deductPrice()<<std::endl;
    std::cout<< random::generateNumber()<< std::endl;
    display();
}




