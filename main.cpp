#include <iostream>


int main()
{
    int value {45};

    std::cout << "value is : "<< value << std::endl;

    std::cout<<std::endl;
    value +=5; // equivalent to value = value + 5
    std::cout << "value is (After +=5) : "<< value << std::endl; //50

    std::cout<<std::endl;
    value -=5; // equivalent to value = value - 5
    std::cout << "value is (After -=5) : "<< value << std::endl; //45
    
    std::cout<<std::endl;
    value *=2; // equivalent to value = value * 5
    std::cout << "value is (After *=5) : "<< value << std::endl; //90
    
    std::cout<<std::endl;
    value /=3; // equivalent to value = value / 5
    std::cout << "value is (After /=5) : "<< value << std::endl; //30
    
    std::cout<<std::endl;
    value %=11; // equivalent to value = 
    std::cout << "value is (After %=5) : "<< value << std::endl; //8


    
    return 0;
}