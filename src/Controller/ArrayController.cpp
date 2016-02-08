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
	doubleArray = new double[5];
	doubleArray[0] = 54665.58455;
	//intArray = {0,1};
}

void ArrayController::Start()
{
	cout << *doubleArray << endl;
//	cout << *intArray << endl;

	double askldj[8] = {5514,5454,564654,56454};
	cout << askldj[2] << endl;
}
