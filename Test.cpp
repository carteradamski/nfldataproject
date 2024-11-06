#include <iostream>	
#include <string>	
#include <fstream>	
#include <vector>	
#include "Team.h"
#include "DataSet.h"

using namespace std;	

int main() {
	Team TotalDataSet[NUMTEAMS][SEASONS];
	Team t;
	ifstream file("LionsWins.txt");
	if (!file) {
		cout << "File not found" << endl;
	}	

	t.set_name("Blah");
	cout << t.get_name() << endl;
	set_Total_Wins(TotalDataSet, file, 0);
	cout << TotalDataSet[0][12].get_wins() << endl;	
	file.close();
	
	return 0;	
}
