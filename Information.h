#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Film
{
private:
	string name;
	int minutes;
	double rating;
protected:
	string actor;
	string country;
public:
	Film();
	Film(string nameIn, int minutesIn, double ratingIn, string actorIn, string countryIn, int budgetIn, string genreIn);
	int budget;
	string genre;

	void setName(string nameIn);
	void setMinutes(int minutesIn);
	void setRating(double ratingIn);
	void setActor(string actorIn);
	void setCountry(string countryIn);
	void setBudget(int budgerIn);
	void setGenre(string genreIn);

	string getName();
	int getMinutes();
	double getRating();
	string getActor();
	string getCountry();
	int getBudget();
	string getGenre();
	void print();
	~Film();
};

Film::Film()
{
	cout << "Defining..." << endl;
	name = "Van Helsing";
	minutes = 132;
	rating = 6.1;
	actor = "Hu Jeckman";
	country = "USA";
	budget = 150000000;
	genre = "action";

};

Film::~Film()
{
	cout << "CLearing data..." << "\n" << endl;
}

void Film::setName(string nameIn)
{
	name = nameIn;
}

void Film::setMinutes(int minutesIn)
{
	minutes = minutesIn;
}

void Film::setRating(double ratingIn)
{
	rating = ratingIn;
}

void Film::setActor(string actorIn)
{
	actor = actorIn;
}

void Film::setCountry(string countryIn)
{
	country = countryIn;
}

void Film::setBudget(int budgetIn)
{
	budget = budgetIn;
}

void Film::setGenre(string genreIn)
{
	genre = genreIn;
}

string Film::getName()
{
	return name;
}

int Film::getMinutes()
{
	return minutes;
}

double Film::getRating()
{
	return rating;
}

string Film::getActor()
{
	return actor;
}

string Film::getCountry()
{
	return country;
}

int Film::getBudget()
{
	return budget;
}

string Film::getGenre()
{
	return genre;
}

Film::Film(string name, int minutes, double rating, string actor, string country, int budget, string genre)
{
	setName(name);
	setMinutes(minutes);
	setRating(rating);
	setActor(actor);
	setCountry(country);
	setBudget(budget);
	setGenre(genre);
}

void Film::print()
{
	cout << "Name" << name << endl;
	cout << "Minutes" << minutes << endl;
	cout << "Rating" << rating << endl;
	cout << "Actor" << actor << endl;
	cout << "Country" << country << endl;
	cout << "Budget" << budget << endl;
	cout << "Genre" << genre << endl;

	system("pause");
}