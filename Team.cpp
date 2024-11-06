
#include "Team.h"
#include <string>	
#include <iostream>	
using namespace std;	


Team::Team() {
	wins = 0;
	losses = 0;
	year = 0;
	name = "";
}
void Team::set_wins(int w) {
	wins = w;
}	
void Team::set_losses(int l) {
	losses = l;
}	
void Team::set_year(int y) {
	year = y;
}	
void Team::set_name(string n) {
	name = n;
}	
int Team::get_wins() {
	return wins;
}	
int Team::get_losses() {
	return losses;
}	
int Team::get_year() {
	return year;
}	
string Team::get_name() {
	return name;
}	
