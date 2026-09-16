// temprature calculator
// made by dyaln eifert
// intakes a temprature in fahrenheit celsius or kelvin and converts it to the other 2
//inputs (input_temp_type, input_temp_value) 
// outputs (kelvin, celsius, fahrenheit)

#include <iostream>
using namespace std;

double calculate_kelvin(char input_temp_type, double input_temp_value);
double calculate_celsius(char input_temp_type, double input_temp_value);
double calculate_fahrenheit(char input_temp_type, double input_temp_value);

char input_temp_type[30]; //will store the input temprature type the array is so we can acount for a veriery of user inputs
double input_temp_value; //will store the input temprature value

int main()
{
   cout << "hello, and welcome to dylan's temprature calculator!" << endl
		<< "please select a input temprature to convert" << endl
	    << "c for celsius" << endl
	    << "f for fahrenheit" << endl
	    << "k for kelvin" << endl;

   cin.getline(input_temp_type, 30); //we take the input temprature type as a string so we can account for a variety of user inputs, use input_temp_type[0] to determin type

   cout << "input the temprature youd like to convert, numbers only please: ";
   cin >> input_temp_value; //we take the value to be convirted

   double kelvin = calculate_kelvin(input_temp_type[0], input_temp_value); //calls each function to display all diffrent tempratures to the user
   double celsius = calculate_celsius(input_temp_type[0], input_temp_value);
   double fahrenhit = calculate_fahrenheit(input_temp_type[0], input_temp_value);

   cout << endl
	   << "the temprature you inputted in kelvin: " << kelvin << endl
	   << "the temprature you inputted in celsius: " << celsius << endl
	   << "the temprature you inputted in fahrenheit: " << fahrenhit << endl;

	return 0;
}

double calculate_kelvin(char input_temp_type, double input_temp_value) //converts input into kelvin
{
	double k = 0; //will store the result to be returned later

	if (input_temp_type == 'c' || input_temp_type == 'C') //caluclation for celsius
	{
		k = input_temp_value + 273.15; //converts celsius to kelvin
	}
	else if (input_temp_type == 'f' || input_temp_type == 'F') //calculation for fahrenheit
	{
		k = ((input_temp_value - 32)/1.8) + 273.15; //converts fahrenheit to kelvin
	}
	else if (input_temp_type == 'k' || input_temp_type == 'K') //calculation for kelvin
	{
		k = input_temp_value; //no change needed
	}
	else //else condition for invalid inputs
	{
		cout << "invalid temprature type, please try again" << endl;
		exit(0);
	}

	return k;
}

double calculate_celsius(char input_temp_type, double input_temp_value) //converts input into celsius
{
	double c = 0; //will store the result to be returned later

	if (input_temp_type == 'c' || input_temp_type == 'C') //caluclation for celsius
	{
		c = input_temp_value; //no change needed
	}
	else if (input_temp_type == 'f' || input_temp_type == 'F') //calculation for fahrenheit
	{
		c = (input_temp_value - 32)/1.8; //converts fahrenheit to celsius
	}
	else if (input_temp_type == 'k' || input_temp_type == 'K') //calculation for kelvin
	{
		c = input_temp_value - 273.15; //converts kelvin to celsius
	}
	else //else condition for invalid inputs
	{
		cout << "invalid temprature type, please try again" << endl;
		exit(0);
	}

	return c;
}

double calculate_fahrenheit(char input_temp_type, double input_temp_value) //converts input into fahrenheite
{
	double f = 0; //will store the result to be returned later

	if (input_temp_type == 'c' || input_temp_type == 'C') //caluclation for celsius
	{
		f=(input_temp_value*1.8)+32; //converts celsius to fahrenheit
	}
	else if (input_temp_type == 'f' || input_temp_type == 'F') //calculation for fahrenheit
	{
		f = input_temp_value; //no change needed
	}
	else if (input_temp_type == 'k' || input_temp_type == 'K') //calculation for kelvin
	{
		f = ((input_temp_value-273.15)*1.8)+32; //converts kelvin to fahrenheit
	}
	else //else condition for invalid inputs
	{
		cout << "invalid temprature type, please try again" << endl;
		exit(0);
	}

	return f;
}

