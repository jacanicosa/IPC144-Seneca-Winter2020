//==============================================
// Name:          Albert Joshua Canicosa
// Student Number: 144404191
// Email:          ajcanicosa@myseneca.ca
// Section:        NKK
// Date:           9 March 2020
//==============================================
// Assignment:     1
// Milestone:      3
//==============================================

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code from Milestone #2 here...
struct Address
{
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
// Place your code from Milestone #2 here...
struct Numbers
{
	char cell[11];
	char home[11];
	char business[11];
};

// Structure type Contact declaration
// Place your code here...
struct Contact
{
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};