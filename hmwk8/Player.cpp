// CS1300 Fall 2019
// Author: Matthew Zarifa
// Recitation: 112 - Behera
// Homework #8 Problem 2

#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
#include <string>
#include <vector>
#include "Player.h"


using namespace std;

Player::Player()
{
    name = ""; //global variables of blank name, and default of 0 for points value.
    points = 0;
}

Player::Player(string inputName, double value)
{
    name = inputName; //set the name variable to the inputted name
    points = value; //and set the inputted value to the points
}

string Player::getName() //function to get the name
{
    return name; //return the name
}

double Player::getPoints() //function to get the points
{
    return points; //return the points
}

void Player::setName(string input) //function to set the name to the inputted string
{
    name = input; //set the name variable to the inputted string.
}

void Player::setPoints(double inValue) //function to set the points to the inputted value (inValue)
{
    points = inValue; //set points to the inputted value. 
}