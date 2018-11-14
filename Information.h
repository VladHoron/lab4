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
	Film(string nameFilm, int minutesFilm, double ratingFilm, string actorFilm, string countryFilm, int budgetFilm, string genreFilm);
	int budget;
	string genre;

	void setName(string nameFilm);
	void setMinutes(int minutesFilm);
	void setRating(double ratingFilm);
	void setActor(string actorFilm);
	void setCountry(string countryFilm);
	void setBudget(int budgetFilm);
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

void Film::setName(string nameFilm)
{
	name = nameFilm;
}

void Film::setMinutes(int minutesFilm)
{
	minutes = minutesFilm;
}

void Film::setRating(double ratingFilm)
{
	rating = ratingFilm;
}

void Film::setActor(string actorFilm)
{
	actor = actorFilm;
}

void Film::setCountry(string countryFilm)
{
	country = countryFilm;
}

void Film::setBudget(int budgetFilm)
{
	budget = budgetFilm;
}

void Film::setGenre(string genreFilm)
{
	genre = genreFilm;
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