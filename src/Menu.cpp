/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>
#include <stdio.h>
using namespace std;

void Menu::show()
{
	//TODO: Implement this method.
	cout<< "" <<endl;
	cout << "       Menu    " << endl;
	cout << "1-List of articles" << endl;
	cout << "2-Insert new " << endl;
	cout << "3-Delete" <<endl;
	cout << "4-Exit" << endl;
	cout << "choose an option ->" << endl; fflush(stdout);
}

Menu::Menu()
{

}

