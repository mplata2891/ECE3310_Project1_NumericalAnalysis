#include <iostream>
#include <string>
#include "UsaPopulations.h"
using namespace std;

///////////////////////////////////////////////////////////////////////////////
//========================== GETTERS AND SETTERS ============================//
///////////////////////////////////////////////////////////////////////////////

int UsaPopulations::getSize()
{
	return this->size;
}

//no "setSize()" for purposes of data integrity 

State UsaPopulations::getState(int index)
{
	return this->p_states[index];
}

void UsaPopulations::setStateName(int index, string name)
{
	this->p_states[index].stateName = name;
}

//no getStateName since name is a public member of State

void UsaPopulations::setStatePopulation(int index, long population)
{
	this->p_states[index].statePopulation = population;
}

//no getStatePopulation since population is a public member of State

///////////////////////////////////////////////////////////////////////////////
//============================ OTHER METHODS ================================//
///////////////////////////////////////////////////////////////////////////////

void UsaPopulations::resetPopulaions(int size)
{
	delete[] p_states;

	this->size = size;

	this->p_states = new State[size];
}

///////////////////////////////////////////////////////////////////////////////
//===================== TO-STRING AND DESTRUCTOR ============================//
///////////////////////////////////////////////////////////////////////////////

void UsaPopulations::toString()
{
	string adtArray_usPop = "Class: UsaPopulations\n"
		"ADT Array: StatePopulation[]\n"
		"Size: " + this->getSize();

	cout << adtArray_usPop << endl;
}


UsaPopulations::~UsaPopulations()
{	}

