/* 
 * File:   Employee.h
 * Author: Andrew Kim
 * Created on June 11, 2014, 4:12 PM
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

class Employee{
   private:
       double Tax(float);
       char   MyName[20];
       char   JobTitle[20];
       float  HourlyRate;
       int    HoursWorked;
       float  GrossPay;
       float  NetPay;
   public:
       Employee(char[],char[],float);
       float  CalculatePay(float,int);
       float  getGrossPay(float,int);
       float  getNetPay(float);
       void   toString();
       int    setHoursWorked(int);
       float  setHourlyRate(float);

};



#endif	/* EMPLOYEE_H */

