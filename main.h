#pragma once
// # = preprocessor directive
//include - add directive library
// "iostream" => current directory then std lib
// <iostream> => find in std lib
#include <iostream>     //for console output
#include <fstream>      //file handling
#include <string>       //string in C++
#include <iomanip>      //use for format output setw()
#include <sstream>		//string stream to convert type 
#include <time.h> //added for the random number generator seed
#include <cstdlib>//added to use the rand function

#define _USE_MATH_DEFINES
#pragma once
#include <cmath>//arithmetric opertaion
#ifndef M_PI
namespace
{
    const double M_PI = std::acos(-1.0);
}
#endif


#include <stdio.h>  //scanf

//list all avaliable function
void happy();
int nothappy();

//definition
void happy() {

}
int nothappy() {
    return 0;;
}