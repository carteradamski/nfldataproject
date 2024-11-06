#
#include "Team.h"	
#include <string>	
#include <iostream>	

using namespace std;	
const int NUMTEAMS = 32;
const int SEASONS = 57;	


void set_Total_Wins(Team DataSet[NUMTEAMS][SEASONS], ifstream& file, int j);