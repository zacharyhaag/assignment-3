#include "person.h"


void Person::setFirstName(string fName){
  fName = firstName;
}
string Person::getFirstName() {
    return firstName;

}
void Person::setLastName(string lName){
  lName = lastName;
}
string Person::getLastName()
{
    return lastName;
}

void Person::setEmployeeId(int id)
{
  id = employeeID;
}
 int Person::getEmployeeId(){
   return employeeID;
 }
 void Person::setCompanyName(string coName){
   coName = companyName;
 }

string Person::getCompanyName(){
  return companyName;
}
void Person::setPayRate(float rate){
  rate = payRate;
}
float Person::getPayRate()
{
  return payRate;
}

void Person::setHoursWorked(float hours){
  hours = hoursWorked;
}
float Person::getHoursWorked(){
  return hoursWorked;
}

float Person::totalPay(){
  float totalPay;

   totalPay = hoursWorked * payRate;

}
string Person::fullName(){
  string fullName;
  fullName = firstName + lastName; 
}
