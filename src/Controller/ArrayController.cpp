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
	//this is how to build an array with the pointers
	doubleArray = new double[5];
	doubleArray[0] = 54665.58455;
	intArray = new int[2];
	intArray[2] = 55555;
}

void ArrayController::Start()
{
	cout << *doubleArray << endl;
	cout << *intArray << endl;

	//This creates and uses instantly
	double askldj[8] = {5514,5454,564654,56454};
	cout << askldj[2] << endl;
}
