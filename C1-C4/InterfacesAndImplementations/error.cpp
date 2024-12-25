/*
* File:error.cpp
* --------------------------
* 
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "error.h"
using namespace std;

/*
* Implementation note: error
* -----------------------------------
* 
* 
*/

void error(string msg) {
	cerr << msg << endl;
	exit(EXIT_FAILURE);
}