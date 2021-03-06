/*
 * NodeStat.h
 *
 *  Created on: 2011-03-14
 *      Author: Team Cougar
 */

#ifndef NODESTAT_H_
#define NODESTAT_H_

#include <vector>
#include "NodeData.h"
#include <string>

using namespace std;

class NodeStat{
public:
	//constructor
	NodeStat(string Name, vector<NodeData> nodeVector);

	//accessors
	string getName();
	double getFrequency();
	int getCount();

private:
	string name;  //keyword
	double frequency;
	int count;

};

#endif /* NODESTAT_H_ */
