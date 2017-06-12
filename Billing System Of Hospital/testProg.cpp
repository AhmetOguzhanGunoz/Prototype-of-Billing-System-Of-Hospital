#include <iostream>
#include <string>

#include "personType.h"
#include "doctorType.h"
#include "patientType.h"
#include "billType.h"
#include "dateType.h"

using namespace std;

int main()
{
	billType bill;
	personType name;
	doctorType doctor;
	dateType DOBirth, a_date, d_date;
	patientType patient;
	int pID, pAge, m, d, y, m1, d1, y1, m2, d2, y2;
	float RoomCharge = 199.90, PharmacyCharge = 100.50, DoctorsFee;
	string first, last, first_, last_, speciality;

	cout << "Enter patient's ID: ";
	cin >> pID;

	cout << "" << endl;

	cout << "Enter patient's age: ";
	cin >> pAge;

	cout << "" << endl;

	cout << "Enter patient's date of birth in the form (mm-dd-yyyy): ";
	cin >> m >> d >> y;

	cout << "" << endl;

	cout << "Enter patient's first name: ";
	cin >> first;

	cout << "" << endl;

	cout << "Enter patient's last name: ";
	cin >> last;

	cout << "" << endl;

	cout << "Enter doctor's first name: ";
	cin >> first_;

	cout << "" << endl;

	cout << "Enter doctor's last name: ";
	cin >> last_;

	cout << "" << endl;

	cout << "Enter doctor's speciality: ";
	cin >> speciality;

	cout << "" << endl;

	cout << "Enter the patient's admit date in the form(mm-dd-yyyy): ";
	cin >> m1 >> d1 >> y1;

	cout << "" << endl;

	cout << "Enter the patient's discharge date in the form(mm-dd-yyyy): ";
    cin >> m2 >> d2 >> y2;

	if(speciality == "Psychiatric")
		DoctorsFee = 400.75;
	else
		DoctorsFee = 550.55;

	name.setName(first,last);

	doctor.setDoctor(first_,last_,speciality);

	DOBirth.setDate(m,d,y);

	a_date.setDate(m1,d1,y1);

	d_date.setDate(m2,d2,y2);

	patient.setpatientInfo(name, pID, pAge, DOBirth, a_date, d_date, doctor);

	cout << "" << endl;

	patient.printpatientInfo();

	d1 = (m1 * 30) - d1 - (y1 * 365);
	d2 = (m2 * 30) - d2 - (y2 * 365);

	d2 = d2 - d1;

	bill.setBill((PharmacyCharge * d2),(DoctorsFee * d2),(RoomCharge * d2),pID);
	bill.printBill();

	system("pause");

	return 0;
}