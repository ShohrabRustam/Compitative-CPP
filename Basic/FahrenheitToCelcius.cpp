/*
 * C++ Program to Perform Fahrenheit to Celsius Conversion
 */
 #include <iostream>
 using namespace std;
 int main()
 {
     double fahrenheit;
 
     cout << "Enter temperature in fahrenheit (in degrees) ";
     cin  >> fahrenheit;
     double celsius;
     celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
     
     cout << "Temperature in Celsius (in degrees) = "<< celsius << endl;
 }
