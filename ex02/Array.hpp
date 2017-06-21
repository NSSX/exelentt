#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array{

public:
    T *myArray;
    int msize;

    Array(void){
        msize = 0;
        myArray = new T[0];
    }
    Array(unsigned int n){
            msize = n;
			myArray= new T[n];
			return;
	}
    Array & operator=(Array & rhs){
        delete [] myArray;
        myArray = new T[rhs.msize];
        msize = rhs.msize;
        for(int i = 0; i < rhs.msize; i++){
            myArray[i] = rhs.myArray[i];
        }
        return *this;
    }

    Array(Array & src){
    	*this = src;
    	return;
    }
    ~Array(void){
		delete [] myArray;
		return;
	}

    int size(void) const{
		return msize;
	}

    T	&operator[](int index){
        if(index < msize){
            return myArray[index];
        }
        throw std::exception();
	}
};
#endif
