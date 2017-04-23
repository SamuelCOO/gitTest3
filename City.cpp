#include <iostream>

using namespace std;

void makeMyYoung (int* age)
{
	cout << "I'm used to be " << *age << endl;
	*age = 18;
}

class Animal
{
private:
	string name;
public:
	Animal(string name){this -> name = name;};
	void setName(string);
	void getName();
};

void Animal::setName(string name)
{
	this->name = name;
}
void Animal::getName()
{
	cout << "the name of the animal is " << this->name << endl;
}

class Dog : public Animal{
private:
	string sounds = "woof";
public:
	void getSounds(){
		cout << sounds <<endl;
	}
	Dog(string, string);
	// void toString();

};
Dog::Dog(string name, string bark) : Animal(name){ // inhert from a mother class
	this->sounds = bark;
}


int main(int argc, char *argv[]) {
	// string yourName;
	// cout << "What is your name: ";
	// getline(cin, yourName);
	//
	// cout << "hello! " << yourName << endl;
	//
	// string wholeName = yourName.assign(yourName);
	// cout << wholeName << endl;
	//
	// string firstName = wholeName.assign(wholeName, 0,6);
	// cout << firstName << endl;
	//
	// int lastNameIndex = yourName.find("Chen", 0);
	// cout << "Index for last name: " << lastNameIndex << endl;
	//
	// yourName.insert(7, "Justin "); // insert is used to add string
	// cout << yourName << endl;
	//
	// yourName.erase(6,7); // erase is used to delete strings
	// cout << yourName << '\n';
	//
	// yourName.replace(7,6,"CHEN"); // repalce is uesd to replace
	// cout << yourName << '\n';

	// writer https://youtu.be/Rub-JsjMhWY?list=PLGLfVvz_LVvSX7fVd4OUFp_ODd86H0ZIY&t=2217

	int myAge = 20;
	int* agePtr = &myAge;
	cout << "Address of pointer " << agePtr << endl;
	cout << "Data at memory address " << *agePtr << endl;

	makeMyYoung(&myAge);
	cout << "I'm " << myAge << " years old now" << endl;

	int& ageRef = myAge;
	cout << "myAge :" << myAge << endl;
	ageRef++;
	cout << "myAge :" << myAge << endl;
	cout << ageRef;
	Dog d1("Sam", "bibi");
	d1.getName();

}
