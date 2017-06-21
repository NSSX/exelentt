#include <iostream>

template<typename T>
void result(T val){
    std::cout << "OUTPUT : " << val << std::endl;
}


template<typename T, typename L, typename F>
void iter(T *myArray, L length, F myFunction){
    L index = 0;
    while(index < length){
        myFunction(myArray[index]);
        index++;
    }
}

int main( void ) {
    
    std::string chaine = "ma chaine de caractere";
    int length = chaine.length();
    ::iter(chaine.c_str(), length, result<char>);

    int tabInt[5] = {12,13,14,15,16};
    int length2 = 5;
    ::iter(tabInt, length2, result<int>);

	return 0;
}
