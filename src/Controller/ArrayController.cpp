/*
 * ArrayProject.cpp
 *
 *  Created on: Feb 8, 2016
 *      Author: nhay7834
 */
#include<iostream>
#include "ArrayController.h"
using namespace std;



ArrayController :: ArrayController()
{
	double doubleArray[5] = {0,1,2,3,4};
	int intArray[2] = {0,1};
}

void ArrayController::Start()
{
	cout << doubleArray << endl;
	cout << intArray << endl;
}
