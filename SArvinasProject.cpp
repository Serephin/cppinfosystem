#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
void menu(char*);
void welcome(char*);

class Medecine
{
private:
	string Name;
	int mID;
	//string mill;
	string mdate;
	double price;
	string info;
	int units;
public:

	//void medi_sale();
	void stock()
	{
		ifstream ifile;
		ifile.open("D://Medecine_Stock.txt", ios::app);
		string meline;
		while (!ifile.eof())
		{
			getline(ifile, meline);
			cout << meline << endl;
		}
	}
	void begstock()
	{
		cout << "We have these medecines. If you want to add, please press 1 ";
		cout << "ID: 0001" << endl;
		cout << "Name: Amoxicillin 500 mg" << endl;
		cout << "Information: is a penicillin antibiotic. It is used to treat bacterial infections, such as chest infections (including pneumonia) and dental abscesses." << endl;
		cout << "Units available: 500" << endl;
		cout << "Price: $20" << endl;
		cout << "ID:0002" << endl;
		cout << "Name: Vitamin D 50000 IU" << endl;
		cout << "Information: is used to treat and prevent bone disorders" << endl;
		cout << "Units available: 1000" << endl;
		cout << "Price: $40.12" << endl;
		cout << "ID:0003" << endl;
		cout << "Name: Ibuprofen 800 mg" << endl;
		cout << "Information: is an everyday painkiller for a range of achesand pains, including back pain, period pain, toothache." << endl;
		cout << "Units available: 2000" << endl;
		cout << "Price: $15" << endl;
		cout << "ID:0004" << endl;
		cout << "Name: Cetirizine hydrochloride 10 mg" << endl;
		cout << "Information: used to relieve allergy symptoms such as watery eyes, runny nose, itching eyes/nose, sneezing, hives, and itching." << endl;
		cout << "Units available: 1500" << endl;
		cout << "Price: $13.4" << endl;
		cout << "ID:0005" << endl;
		cout << "Name: Azithromycin 250 mg" << endl;
		cout << "Information: used to treat chest infections such as pneumonia, infections of the nose and throat such as sinus infection (sinusitis), skin infections, Lyme disease, and some sexually transmitted infections." << endl;
		cout << "Units available: 2000" << endl;
		cout << "Price: $33.5" << endl;
		cout << "ID:0006" << endl;
		cout << "Name: Amlodipine besylate 10 mg" << endl;
		cout << "Information: is used with or without other medications to treat high blood pressure." << endl;
		cout << "Units available: 1500" << endl;
		cout << "Price: $35.91" << endl;
		cout << "ID:0007" << endl;
		cout << "Name: Albuterol sulfate 108 mcg / act" << endl;
		cout << "Information: an inhalation aerosol." << endl;
		cout << "Units available: 500" << endl;
		cout << "Price: $30.2" << endl;
		cout << "ID:0008" << endl;
		cout << "Name: Cyclobenzaprine hydrochloride 10 mg" << endl;
		cout << "Information:  is used short-term to treat muscle spasms." << endl;
		cout << "Units available: 1300" << endl;
		cout << "Price: $10" << endl;
		cout << "ID:0009" << endl;
		cout << "Name: Cephalexin 500 mg" << endl;
		cout << "Information: is used to treat a wide variety of bacterial infections." << endl;
		cout << "Units available: 1000" << endl;
		cout << "Price: $55.3" << endl;
		cout << "ID:0010" << endl;
		cout << "Name: Hydrochlorothiazide 25 mg" << endl;
		cout << "Information: This helps your body get rid of extra salt and water.This medication also reduces extra fluid in the body (edema) caused by conditions such as heart failure, liver disease, or kidney disease. " << endl;
		cout << "Units available: 1230" << endl;
		cout << "Price: $20" << endl;
		cout << "ID:0011" << endl;
		cout << "Name: Lisinopril 20 mg" << endl;
		cout << "Information: is used to treat high blood pressure." << endl;
		cout << "Units available: 800" << endl;
		cout << "Price: $40.64" << endl;
		cout << "ID:0012" << endl;
		cout << "Name: Amphetamine / dextroamphetamine 20 mg" << endl;
		cout << "Information: is a combination medicine used to treat narcolepsy and attention deficit hyperactivity disorder" << endl;
		cout << "Units available: 100" << endl;
		cout << "Price: $75.7" << endl;
		cout << "ID:0013" << endl;
		cout << "Name: Loratadine 10 mg" << endl;
		cout << "Information: is an antihistamine that treats symptoms such as itching, runny nose, watery eyes, and sneezing from 'hay fever' and other allergies" << endl;
		cout << "Units available: 2000" << endl;
		cout << "Price: $10" << endl;
		cout << "ID:0014" << endl;
		cout << "Name: Amoxicillin - clavulanate potassium 875 - 125 mg" << endl;
		cout << "Information: is used to treat many different infections caused by bacteria, such as , pneumonia, ear infections" << endl;
		cout << "Units available: 1570" << endl;
		cout << "Price: 90" << endl;
		cout << "ID:0015" << endl;
		cout << "Name: Folic acid 1 mg" << endl;
		cout << "Information: is used for preventing and treating low blood levels of folate (folate deficiency) and high blood levels of homocysteine (hyperhomocysteinemia)." << endl;
		cout << "Units available: 630" << endl;
		cout << "Price: $4.8" << endl;
	}
	void defaultstock()
	{
		ofstream ofile;
		ofile.open("D://Medecine_Stock.txt", ios::app);
		ofile << "ID: 0001" << endl;
		ofile << "Name: Amoxicillin 500 mg" << endl;
		ofile << "Information: is a penicillin antibiotic. It is used to treat bacterial infections, such as chest infections (including pneumonia) and dental abscesses." << endl;
		ofile << "Units available: 500" << endl;
		ofile << "Price: $20" << endl;
		ofile << "ID:0002" << endl;
		ofile << "Name: Vitamin D 50000 IU" << endl;
		ofile << "Information: is used to treat and prevent bone disorders" << endl;
		ofile << "Units available: 1000" << endl;
		ofile << "Price: $40.12" << endl;
		ofile << "ID:0003" << endl;
		ofile << "Name: Ibuprofen 800 mg" << endl;
		ofile << "Information: is an everyday painkiller for a range of achesand pains, including back pain, period pain, toothache." << endl;
		ofile << "Units available: 2000" << endl;
		ofile << "Price: $15" << endl;
		ofile << "ID:0004" << endl;
		ofile << "Name: Cetirizine hydrochloride 10 mg" << endl;
		ofile << "Information: used to relieve allergy symptoms such as watery eyes, runny nose, itching eyes/nose, sneezing, hives, and itching." << endl;
		ofile << "Units available: 1500" << endl;
		ofile << "Price: $13.4" << endl;
		ofile << "ID:0005" << endl;
		ofile << "Name: Azithromycin 250 mg" << endl;
		ofile << "Information: used to treat chest infections such as pneumonia, infections of the nose and throat such as sinus infection (sinusitis), skin infections, Lyme disease, and some sexually transmitted infections." << endl;
		ofile << "Units available: 2000" << endl;
		ofile << "Price: $33.5" << endl;
		ofile << "ID:0006" << endl;
		ofile << "Name: Amlodipine besylate 10 mg" << endl;
		ofile << "Information: is used with or without other medications to treat high blood pressure." << endl;
		ofile << "Units available: 1500" << endl;
		ofile << "Price: $35.91" << endl;
		ofile << "ID:0007" << endl;
		ofile << "Name: Albuterol sulfate 108 mcg / act" << endl;
		ofile << "Information: an inhalation aerosol." << endl;
		ofile << "Units available: 500" << endl;
		ofile << "Price: $30.2" << endl;
		ofile << "ID:0008" << endl;
		ofile << "Name: Cyclobenzaprine hydrochloride 10 mg" << endl;
		ofile << "Information:  is used short-term to treat muscle spasms." << endl;
		ofile << "Units available: 1300" << endl;
		ofile << "Price: $10" << endl;
		ofile << "ID:0009" << endl;
		ofile << "Name: Cephalexin 500 mg" << endl;
		ofile << "Information: is used to treat a wide variety of bacterial infections." << endl;
		ofile << "Units available: 1000" << endl;
		ofile << "Price: $55.3" << endl;
		ofile << "ID:0010" << endl;
		ofile << "Name: Hydrochlorothiazide 25 mg" << endl;
		ofile << "Information: This helps your body get rid of extra salt and water.This medication also reduces extra fluid in the body (edema) caused by conditions such as heart failure, liver disease, or kidney disease. " << endl;
		ofile << "Units available: 1230" << endl;
		ofile << "Price: $20" << endl;
		ofile << "ID:0011" << endl;
		ofile << "Name: Lisinopril 20 mg" << endl;
		ofile << "Information: is used to treat high blood pressure." << endl;
		ofile << "Units available: 800" << endl;
		ofile << "Price: $40.64" << endl;
		ofile << "ID:0012" << endl;
		ofile << "Name: Amphetamine / dextroamphetamine 20 mg" << endl;
		ofile << "Information: is a combination medicine used to treat narcolepsy and attention deficit hyperactivity disorder" << endl;
		ofile << "Units available: 100" << endl;
		ofile << "Price: $75.7" << endl;
		ofile << "ID:0013" << endl;
		ofile << "Name: Loratadine 10 mg" << endl;
		ofile << "Information: is an antihistamine that treats symptoms such as itching, runny nose, watery eyes, and sneezing from 'hay fever' and other allergies" << endl;
		ofile << "Units available: 2000" << endl;
		ofile << "Price: $10" << endl;
		ofile << "ID:0014" << endl;
		ofile << "Name: Amoxicillin - clavulanate potassium 875 - 125 mg" << endl;
		ofile << "Information: is used to treat many different infections caused by bacteria, such as , pneumonia, ear infections" << endl;
		ofile << "Units available: 1570" << endl;
		ofile << "Price: 90" << endl;
		ofile << "ID:0015" << endl;
		ofile << "Name: Folic acid 1 mg" << endl;
		ofile << "Information: is used for preventing and treating low blood levels of folate (folate deficiency) and high blood levels of homocysteine (hyperhomocysteinemia)." << endl;
		ofile << "Units available: 630" << endl;
		ofile << "Price: $4.8" << endl;
		ofile << "ID: 0001" << endl;
		ofile << "Name: Amoxicillin 500 mg" << endl;
		ofile << "Information: is a penicillin antibiotic. It is used to treat bacterial infections, such as chest infections (including pneumonia) and dental abscesses." << endl;
		ofile << "Units available: 500" << endl;
		ofile << "Price: $20" << endl;
		ofile << "ID:0002" << endl;
		ofile << "Name: Vitamin D 50000 IU" << endl;
		ofile << "Information: is used to treat and prevent bone disorders" << endl;
		ofile << "Units available: 1000" << endl;
		ofile << "Price: $40.12" << endl;
		ofile << "ID:0003" << endl;
		ofile << "Name: Ibuprofen 800 mg" << endl;
		ofile << "Information: is an everyday painkiller for a range of achesand pains, including back pain, period pain, toothache." << endl;
		ofile << "Units available: 2000" << endl;
		ofile << "Price: $15" << endl;
		ofile << "ID:0004" << endl;
		ofile << "Name: Cetirizine hydrochloride 10 mg" << endl;
		ofile << "Information: used to relieve allergy symptoms such as watery eyes, runny nose, itching eyes/nose, sneezing, hives, and itching." << endl;
		ofile << "Units available: 1500" << endl;
		ofile << "Price: $13.4" << endl;
		ofile << "ID:0005" << endl;
		ofile << "Name: Azithromycin 250 mg" << endl;
		ofile << "Information: used to treat chest infections such as pneumonia, infections of the nose and throat such as sinus infection (sinusitis), skin infections, Lyme disease, and some sexually transmitted infections." << endl;
		ofile << "Units available: 2000" << endl;
		ofile << "Price: $33.5" << endl;
		ofile << "ID:0006" << endl;
		ofile << "Name: Amlodipine besylate 10 mg" << endl;
		ofile << "Information: is used with or without other medications to treat high blood pressure." << endl;
		ofile << "Units available: 1500" << endl;
		ofile << "Price: $35.91" << endl;
		ofile << "ID:0007" << endl;
		ofile << "Name: Albuterol sulfate 108 mcg / act" << endl;
		ofile << "Information: an inhalation aerosol." << endl;
		ofile << "Units available: 500" << endl;
		ofile << "Price: $30.2" << endl;
		ofile << "ID:0008" << endl;
		ofile << "Name: Cyclobenzaprine hydrochloride 10 mg" << endl;
		ofile << "Information:  is used short-term to treat muscle spasms." << endl;
		ofile << "Units available: 1300" << endl;
		ofile << "Price: $10" << endl;
		ofile << "ID:0009" << endl;
		ofile << "Name: Cephalexin 500 mg" << endl;
		ofile << "Information: is used to treat a wide variety of bacterial infections." << endl;
		ofile << "Units available: 1000" << endl;
		ofile << "Price: $55.3" << endl;
		ofile << "ID:0010" << endl;
		ofile << "Name: Hydrochlorothiazide 25 mg" << endl;
		ofile << "Information: This helps your body get rid of extra salt and water.This medication also reduces extra fluid in the body (edema) caused by conditions such as heart failure, liver disease, or kidney disease. " << endl;
		ofile << "Units available: 1230" << endl;
		ofile << "Price: $20" << endl;
		ofile << "ID:0011" << endl;
		ofile << "Name: Lisinopril 20 mg" << endl;
		ofile << "Information: is used to treat high blood pressure." << endl;
		ofile << "Units available: 800" << endl;
		ofile << "Price: $40.64" << endl;
		ofile << "ID:0012" << endl;
		ofile << "Name: Amphetamine / dextroamphetamine 20 mg" << endl;
		ofile << "Information: is a combination medicine used to treat narcolepsy and attention deficit hyperactivity disorder" << endl;
		ofile << "Units available: 100" << endl;
		ofile << "Price: $75.7" << endl;
		ofile << "ID:0013" << endl;
		ofile << "Name: Loratadine 10 mg" << endl;
		ofile << "Information: is an antihistamine that treats symptoms such as itching, runny nose, watery eyes, and sneezing from 'hay fever' and other allergies" << endl;
		ofile << "Units available: 2000" << endl;
		ofile << "Price: $10" << endl;
		ofile << "ID:0014" << endl;
		ofile << "Name: Amoxicillin - clavulanate potassium 875 - 125 mg" << endl;
		ofile << "Information: is used to treat many different infections caused by bacteria, such as , pneumonia, ear infections" << endl;
		ofile << "Units available: 1570" << endl;
		ofile << "Price: 90" << endl;
		ofile << "ID:0015" << endl;
		ofile << "Name: Folic acid 1 mg" << endl;
		ofile << "Information: is used for preventing and treating low blood levels of folate (folate deficiency) and high blood levels of homocysteine (hyperhomocysteinemia)." << endl;
		ofile << "Units available: 630" << endl;
		ofile << "Price: $4.8" << endl;
		ofile.close();


	}
	void medi_entry()
	{
		ofstream ofile;
		ofile.open("D://Medecine_Stock.txt", ios::app);
		cout << "New Medecine's data" << endl;
		cout << "The medecine ID" << endl;
		cin >> mID;
		cin.ignore();
		ofile << "ID: " << mID << endl;
		cout << "Name of the medecine,please" << endl;
		getline(cin, Name);

		ofile << "Name: " << Name << endl;

		cout << "Information about the medecine" << endl;
		getline(cin, info);

		ofile << "Information: " << info << endl;
		cout << "Available units" << endl;
		cin >> units;
		ofile << "Units available: " << units << endl;
		cout << "The price" << endl;
		cin >> price;
		ofile << "Price: " << price << endl;
		ofile << "@" << endl;

	}
	void medi_search()
	{
		ifstream ifile;
		ifile.open("D://Medecine_Stock.txt", ios::app);
		string meline;
		int n = 0;


		string medec;
		int medi;
		cout << "Using which criteria you want to search : using ID - press 'I', using Name- press 'N'" << endl;
		char search;
		cin >> search;
		if (search == 'I')
		{

			cout << "ID" << endl;
			cin >> medi;
			string medid = to_string(medi);

			string IDline = medid;
			
			while (!ifile.eof())
			{
				getline(ifile, meline);
				if (meline.find(IDline)!=string::npos)
				{
					cout << meline << endl;
					
					while (meline.find("@")!=string::npos)
					{
						cout << 1;
						getline(ifile, meline);
						cout << meline << endl;
					}

				}
				
			}
		}
		if (search == 'N')
		{

			cout << "Name" << endl;
			cin >> medec;
			cin.ignore();

			string Nameline;
			Nameline = medec;
			while (!ifile.eof())
			{
				getline(ifile, meline);
				if (meline.find(Nameline)!=string::npos)
				{
					cout << meline << endl;
					while (meline.find("@")!=string::npos)
					{
						getline(ifile, meline);
						cout << meline << endl;
					}
				}
				
			}
		}

	}
};
class Customer
{
private:
	int* n;
	string data;
	int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int* m = &months[1];
	int ID;
	int year, month, day;
	string name;
	int types;
	string* Titol;
	int* quantity;
	double* prices;
	double total;
	int num = 0;
	string line;
	string meline, * pstr = &meline;
	string liniar;
public:
	void newset();
	void check();
	double custup();
	void cread()
	{
		ifstream cifile;
		cifile.open("D://Customer.txt", ios::in | ios::app);

		while (!cifile.eof())
		{
			string clines;
			getline(cifile, clines);
			cout << clines << endl;
		}
		cifile.close();
	}
	void cust_search()
	{
		ifstream ifile;
		ifile.open("D://Customer.txt", ios::app);
		string meline;
		int n = 0;


		string medec;
		int medi;

		cout << "ID" << endl;
		cin >> medi;
		string medid = to_string(medi);
		string line = "ID: ";
		line = line.append(medid);

		while (!ifile.eof())
		{
			getline(ifile, meline);
			if (meline == line)
			{
				cout << meline << endl;
				//ifile.seekg( ios::cur,ios::cur);
				while (meline != "@")
				{
					getline(ifile, meline);
					cout << meline << endl;
				}
			}
			else
			{
				continue;
			}
		}
	}


};
void Customer::newset()
{

	fstream custfile;
	custfile.open("D://Customer.txt", ios::out | ios::app);
	ifstream infile;
	infile.open("D://Medecine_Stock.txt", ios::app);

	cout << "Enter ID of the customer" << endl;
	cin >> ID;
	cout << "Enter Name of the customer" << endl;
	cin >> name;

	cout << "The year of the transaction,please" << endl;
	cin >> year;
	if (year % 400 == 0)
	{
		*m = 29;
	}
	else if (year % 4 == 0)
	{
		*m = 29;
	}
	else
	{
		*m = 28;
	}
	do {
		cout << "Enter The month\n";
		cin >> month;

	} while (month > 12);
	int mun = month - 1;
	do {
		cout << "Enter The day\n";
		cin >> day;
	} while (day > months[mun]);
	string point = ".";
	data = to_string(day);
	string mes = to_string(month);
	string god = to_string(year);
	data.append(point);
	data.append(mes);
	data.append(point);
	data.append(god);
	cout << "How many different types of the product, the customer bought" << endl;
	cin >> types;
	cin.ignore();
	Titol = new string[types];
	quantity = new int[types];
	prices = new double[types];

	for (int i = 0; i < types; i++)
	{
		int number = 0, * numer;
		numer = &number;
		n = &i;
		cout << "The product " << i + 1 << " name";
		getline(cin, Titol[i]);
		line = Titol[i];

		while (!infile.eof())
		{

			getline(infile, meline);

			if (meline.find(line) != string::npos)
			{
				*numer = *numer + 1;
			}
			else
			{
				*numer = *numer;

			}


		}
		if (number > 0)
		{
			cout << "The product " << i + 1 << " quantity";
			cin >> quantity[i];
			cin.ignore();
			prices[i] = custup();

			total = total + quantity[i] * prices[i];
			num++;
			check();
			custfile << "Product: " << Titol[*n] << endl;
			custfile << "Quantity" << quantity[*n] << endl;
			custfile << "Price: $" << prices[*n] << endl;

		}
		if (number == 0)
		{
			num = num;
			cout << "We don't have this medecine, Sorry\n";
		}
	}
	if (num > 0)
	{
		custfile << "Total Sales of " << name << " during " << data << ": " << total << endl;
		custfile << "@" << endl;
	}
}
void Customer::check()
{
	ofstream custfile;
	custfile.open("D://Customer.txt", ios::out | ios::app);
	if (num == 1)
	{
		custfile << "ID: " << ID << endl;
		custfile << "Name: " << name << endl;
		custfile << "Date: " << data << endl;;
		//custfile << "Number of types of products: " << name << endl;

	}
}
double Customer::custup()
{
	fstream custfile;
	custfile.open("D://Customer.txt", ios::out | ios::app);
	ifstream infile;
	infile.open("D://Medecine_Stock.txt", ios::app);
	string nit;
	while (!infile.eof())
	{
		getline(infile, meline);

		if (meline.find("Mig") != string::npos)
		{
			while (meline != "@")
			{
				getline(infile, meline);

				if (meline.find("Price") != string::npos)
				{

					nit = meline;


				}

			}
		}

	}

	cout << nit;

	string nu = nit.substr(8, 2);
	
	double sam = stof(nu);
	return sam;

}
class Supplier
{
private:
	string date;
	int day, month, year;
	int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int* m = &months[1];
	int sID;
	string sname;
	int stypes;
	string* sTitol;
	int* squantity;
	double* prices;
	double total = 0;
public:
	void newput();
	void read()
	{
		ifstream ifile;
		ifile.open("D://Suppliers.txt", ios::in | ios::app);

		while (!ifile.eof())
		{
			string lines;
			getline(ifile, lines);
			cout << lines << endl;
		}
		ifile.close();
	}
	void sup_search()
	{
		ifstream ifile;
		ifile.open("D://Suppliers.txt", ios::app);
		string meline;
		int n = 0;
		string medec;
		int medi;
		cout << "Name" << endl;
		cin >> medec;
		cout << "ID" << endl;
		cin >> medi;
		string medid = to_string(medi);
		string line = "ID: ";
		line = line.append(medid);

		while (!ifile.eof())
		{
			getline(ifile, meline);
			if (meline == line)
			{
				cout << meline << endl;


				while (meline != "@")
				{
					getline(ifile, meline);
					cout << meline << endl;
				}

			}
			else
			{
				continue;
			}
		}
	}


};

void Supplier::newput()
{
	ofstream supfile;
	supfile.open("D://Suppliers.txt", ios::out | ios::app);

	cout << "New supplier's data" << endl;
	cout << "The supplier's ID" << endl;
	cin >> sID;
	supfile << "ID: " << sID << endl;
	cout << "The year of the transaction,please" << endl;
	cin >> year;
	if (year % 400 == 0)
	{
		*m = 29;
	}
	else if (year % 4 == 0)
	{
		*m = 29;
	}
	else
	{
		*m = 28;
	}
	do {
		cout << "Enter The month\n";
		cin >> month;

	} while (month > 12);
	int mun = month - 1;
	do {
		cout << "Enter The day\n";
		cin >> day;
	} while (day > months[mun]);
	string point = ".";
	string date = to_string(day);
	string mes = to_string(month);
	string god = to_string(year);
	date.append(point);
	date.append(mes);
	date.append(point);
	date.append(god);
	cout << date;
	supfile << "Date: " << date << endl;
	cout << "Name of the supplier,please" << endl;
	cin >> sname;
	supfile << "Name: " << sname << endl;
	cout << "How many different types of the product, the supplier delivered" << endl;
	cin >> stypes;
	cin.ignore();
	sTitol = new string[stypes];
	squantity = new int[stypes];
	prices = new double[stypes];
	for (int i = 0; i < stypes; i++)
	{
		cout << "The product " << i + 1 << " name";
		cin >> sTitol[i];

		cout << "The product " << i + 1 << " quantity";
		cin >> squantity[i];
		cout << "The product's price " << i + 1 << " price";
		cin >> prices[i];
		supfile << "Product type " << i + 1 << ": " << sTitol[i] << endl;
		supfile << "Quantity: " << squantity[i] << endl;
		supfile << "Price: $" << prices[i] << endl;
		total = total + squantity[i] * prices[i];

	}
	supfile << "Total Supplies Cost from  " << sname << "during " << date << ": " << total << endl;
	supfile << "@" << endl;
	supfile.close();
}
int main()
{

	char choice;
	welcome(&choice);


	return 0;
}
void welcome(char* CHOICE)
{
	do
	{
		cout << "Your purpose\n";
		cout << "Data on Customer-press C\n";
		cout << "Data on Supplier-press S\n";
		cout << "Data on Medecines-press M\n";
		cout << "Press E to exit\n";
		cout << "Enter a valid data" << endl;
		cin >> *CHOICE;

		switch (*CHOICE)
		{
		case 'C':

			menu(CHOICE);
			continue;
		case 'S':
			menu(CHOICE);
			continue;

		case 'M':
			cout << "Do you need a default txt file with some common drugs information and price list, if yes-Y if no -N. Please use either capital Y or N " << endl;
			char vibor;
			cin >> vibor;

			if (vibor == 'Y')
			{
				class Medecine M;
				M.defaultstock();
			}
			else
			{
				cout << "OK" << endl;
			}

			menu(CHOICE);


			continue;
		case 'E':
			cout << "Bye:(\n";
			break;
		default:
			cout << "Reenter, write a valid data:(\n";
		}
	} while (!(*CHOICE == 'E'));

}

void menu(char* point)
{

	int opt;
	do {

		cout << "If you want to enter some new records, press 1\n";
		cout << "To display all existing records, press2\n";
		cout << "To search data using its ID\n";
		cout << "Make Payments\n";
		cout << " Summary of Total Sales\n";
		cout << "Enter 4 to Quite\n";
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			if (*point == 'C')
			{
				class Customer C;
				C.newset();
			}
			if (*point == 'S')
			{
				class Supplier S;
				S.newput();
			}
			if (*point == 'M')
			{

				class Medecine M;

				cout << "You want to add new medecine data-here you are:)\n";
				M.medi_entry();

			}
			continue;
		}

		case 2:
		{
			if (*point == 'C')

			{
				class Customer C;
				C.cread();

			}
			else if (*point == 'S')
			{
				class Supplier S;
				S.read();
			}

			else if (*point == 'M')
			{

				class Medecine M;
				M.begstock();
				M.stock();
			}
			break;
		}

		case 3:
		{
			if (*point == 'C')
			{
				class Customer C;
				C.cust_search();
			}
			else if (*point == 'S')
			{
				class Supplier S;
				S.sup_search();
			}
			else if (*point == 'M')
			{
				class Medecine M;
				M.medi_search();
			}
			break;


		}

		case 4:
		{
			cout << "Bye:(\n";
			break; }
		default:

			cout << "Reenter, write a valid data:(\n";

		}
	} while (opt != 4);
}

