#include "Array.hpp"

int main(void){

    int normalArray[5] = {10,11,12,13,14};

    Array<int> myArray(5);

    std::cout << "myArray Size : "<<myArray.size() << std::endl;

    for(int i = 0; i < myArray.size(); i++){
        myArray[i] = normalArray[i];
    }
    for(int i = 0; i < myArray.size(); i++){
        std::cout << "OUTPUT : "<<myArray[i] << std::endl;
    }
    try{
        std::cout << "Print this index : " << myArray[4] << std::endl;
        std::cout << "Print this index : " << myArray[5] << std::endl;
    }catch(std::exception & e){
        std::cout << "Exception occured : "<<e.what()<<std::endl;
    }

    std::cout << "----------------" << std::endl;

    char text[5] = {'l','o','l','i','p'};

    Array<char> myArray2(5);

    std::cout << "myArray2 Size : "<< myArray2.size() << std::endl;
    for(int i = 0; i < myArray2.size(); i++){
        myArray2[i] = text[i];
    }
    for(int i = 0; i < myArray2.size(); i++){
        std::cout << "OUTPUT : "<<myArray2[i] << std::endl;
    }
    try{
        std::cout << "Print this index : " << myArray2[4] << std::endl;
        std::cout << "Print this index : " << myArray2[5] << std::endl;
    }catch(std::exception & e){
        std::cout << "Exception occured : "<<e.what()<<std::endl;
    }
    return (0);
}
