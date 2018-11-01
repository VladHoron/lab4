#include"Information.h"
#include<stdio.h>
#include <iostream>
#include <string>


int main()
{
	Film standart;
	standart.print();

	cout << "..." << endl;

	Film The_Nun("The_Nun", 80, 5.7, "Alizabet Watson", "USA", 100000000, "horror");
	cout << "Name: " << The_Nun.getName() << endl;
	cout << "Minutes: " << The_Nun.getMinutes() << endl;
	cout << "Rating: " << The_Nun.getRating() << endl;
	cout << "Actor: " << The_Nun.getActor() << endl;
	cout << "Country: " << The_Nun.getCountry() << endl;
	cout << "Budget: " << The_Nun.getBudget() << "$" << endl;
	cout << "Genre: " << The_Nun.getGenre() << endl;
	cout << "..." << endl;

	Film The_Amityville_Horror("The_Amityville_Horror", 90, 6.0, "Rayan Reynolds", "USA", 9000000, "horror");
	cout << "Name: " << The_Amityville_Horror.getName() << endl;
	cout << "Minutes: " << The_Amityville_Horror.getMinutes() << endl;
	cout << "Rating: " << The_Amityville_Horror.getRating() << endl;
	cout << "Actor: " << The_Amityville_Horror.getActor() << endl;
	cout << "Country: " << The_Amityville_Horror.getCountry() << endl;
	cout << "Budget: " << The_Amityville_Horror.getBudget()<< "$" << endl;
	cout << "Genre: " << The_Amityville_Horror.getGenre()<< endl;
	cout << "..." << endl;

	Film Deadpool("Deadpool", 108, 8.0, "Rayan Reynolds", "USA", 200000000, "comedy");
	cout << "Name: " << Deadpool.getName() << endl;
	cout << "Minutes: " << Deadpool.getMinutes() << endl;
	cout << "Rating: " << Deadpool.getRating() << endl;
	cout << "Actor: " << Deadpool.getActor() << endl;
	cout << "Country: " << Deadpool.getCountry() << endl;
	cout << "Budget: " << Deadpool.getBudget() << "$" << endl;
	cout << "Genre: " << Deadpool.getGenre() << endl;

	cout << "..." << endl;

	system("pause");
}
