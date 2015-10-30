![logo](https://raw.githubusercontent.com/hmtinc/Diceware-/master/Resources/logo.png?token=ABQMEnC7OEne0vfVahQToDOzSeo7zIFFks5WPBHuwA%3D%3D)
# Diceware ++
Diceware ++ is a command line c++ Library which will randomly generate a safe secure password using a series of 5 randomly
generated values to reference a defined Diceware word list.

# Basic Usage 
Generating a password using diceware ++ requires you to provide a desired number of words as an integer.

The following snippet can be used to generate a password without any console output 
```c++ 
 //With No Console Output
    diceWarePassword passDiceWare =  GenPass(6, false);
```
    
The Following snippet can be used to generate a password with a full detailed console output consisting of the each indvidual die values. 
```c#
//With Console Output
    diceWarePassword passDiceWareConsole =  GenPass(6, false);
    cout << "Password : " << endl;
    cout << "-----------" << endl;
    cout << passDiceWareConsole << endl;
```

#Incorporating Diceware ++ into your application 
Diceware ++ was designed with the intention to be integrated into other c++ applications that require the use of dice ware  password generation.
To integrate it into your application, you will have to build the library with the given source files. 

If you wish you may also simply add the source files into your project and including the diceware header in your project file
```c++
#include "diceware.h"
```	

#Diceware Functions 
- diceWarePassword GenPass (diceWordCount, debugInfo)
  Consumes a number of desired words and a Boolean Debug Value generates a password
- diceWareIndex IndexValue(DICEROLL rollstruct) 
  Consumes a dice structure and determines the index value of the referenced word
- DRoll (DICEROLL rollstruct) 
  Consumes a dice structure and generates 5 random numbers
- GetWord(diceWordIndex index)
 Consumes a index number and returns the referenced word
- diceRadomValue RandomNumGen () 
   Produces a random diceRandomValue between 1 and 6
   
#Diceware Data Types
- diceValue : Hold a generic Integer (mostly used to store Dice values)
- diceRadomValue : Integer used while generating a random integer
- diceWordCount : Used to store number of desired words
- diceWordIndex : Used to store the index value of a word
- debugInfo : Holds a boolean value which indicates if debug info should be outputted 
- diceWareWord : Holds a string with a single Diceware word
- diceWarePassword : Holds the password as a string

#Goals
The Goal of the diceware ++ is to provide a simple way to generate diceware passwords in c++.




#People
Harsh Mistry - Programmer

Jonathan from Noun Project - Logo Designer





