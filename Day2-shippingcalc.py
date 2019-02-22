# -*- coding: utf-8 -*-
"""
Created on Fri Feb 22 10:05:23 2019

@author: kpickrel

Shipping Cost Calculator

Feb 19, 2019
"""

def main():
    
    weight = int(input("Please enter the weight of your package:  "))
    
    
    
    if weight > 0 and weight <= 1:
        print "The shipping cost is $3.50\n\n"
        
    elif  weight > 1 and weight <= 3:
        print "The shipping cost is $5.50\n\n"
        
    elif  weight > 3 and weight <= 10:
        print "The shipping cost is $8.50\n\n"
        
    elif  weight > 10 and weight <= 20:
        print "The shipping cost is $10.50\n\n"
        
    elif  weight < 0 or weight > 20:
        print "Not a valid input\n\n"
        
    
    
    choice = str(raw_input("Enter another weight? (Y/N):  "))
    
    while (choice == 'y' or choice == 'Y'):
         if (choice == 'n' or choice == 'N'):
            break
         weight = int(input("Please enter the weight of your package:  "))
         if weight > 0 and weight <= 1:
             print "The shipping cost is $3.50\n\n"
        
         elif  weight > 1 and weight <= 3:
             print "The shipping cost is $5.50\n\n"
        
         elif  weight > 3 and weight <= 10:
             print "The shipping cost is $8.50\n\n"
        
         elif  weight > 10 and weight <= 20:
             print "The shipping cost is $10.50\n\n"
        
         elif  weight < 0 or weight > 20:
             print "Not a valid input\n\n"
         choice = str(raw_input("Enter another weight? (Y/N):  "))
         
        

        
      
    
    return "Have a nice day"

print(main())