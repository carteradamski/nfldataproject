#ifndef TEAM_H
#define TEAM_H
#include <string>
using namespace std;

class Team {	
private:
	int wins;
	int losses;	
	int year;
	string name;

public:
	Team();
	void set_wins(int w);	
	void set_losses(int l);	
	void set_year(int y);	
	void set_name(string n);	
	int get_wins();	
	int get_losses();	
	int get_year();	
	string get_name();	
};	
#endif	