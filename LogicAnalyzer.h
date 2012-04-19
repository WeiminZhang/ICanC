/*
 * LogicAnalyzer.h
 *
 *  Created on: Feb 4, 2011
 *      Author: Team Cougar
 */

#ifndef LogicAnalyzer_H_
#define LogicAnalyzer_H_


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <sys/param.h>
#include <vector>
#include <sstream>
#include "NodeData.h"

using namespace std;
class LogicAnalyzer {
public:

	LogicAnalyzer(vector<NodeData> nodeVector, string graphOutDir);
	int countEdges(vector< vector<int> > DirectedVector);
	int countNodes(vector< vector<int> > DirectedVector);
	void writeDotFile(vector< vector<int> > DirectedVector);
	vector< vector<int> > createAdjacencyMatrix();
	void printArray(vector< vector<int> > printable2dArray);
	void parseIfStatements(ofstream& graphFile, vector< vector<int> > DirectedVector, int i, int j);
	void parseWhileStatements(ofstream& graphFile, vector< vector<int> > DirectedVector, int i, int j);
	void parseElseStatements(ofstream& graphFile, vector< vector<int> > DirectedVector, int i, int j);
	void parseElseIfStatements(ofstream& graphFile, vector< vector<int> > DirectedVector, int i, int j);
private:
	int arraysize;
	vector<NodeData> NodeDataVector;
	vector<string> decisionStatements;
	string graphWriteDir;
};

#endif /* LogicAnalyzer_H_ */
