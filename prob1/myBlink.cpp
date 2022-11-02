#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include "derek_LED.h"
using namespace std;

int main(int argc, char* argv[]){
    if(argc!=4){
	cout << "Usage is makeLEDs <command>" << endl;
	cout << "   command is one of: on, off, flash, blink or status" << endl;
        cout << " e.g. makeLEDs flash" << endl;
	return 2;
    }
    cout << "Starting the makeLEDs program" << endl;
    string cmd(argv[1]);
    int cmd1(stoi(argv[2]));
    LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
        if(cmd=="on")leds[cmd1].turnOn();
 	else if(cmd=="off")leds[cmd1].turnOff();
	else if (cmd=="blink")leds[cmd1].blink(stoi(argv[3]));
	else if(cmd=="flash")leds[cmd1].flash("100"); //default is "50"
       	else if(cmd=="status")leds[cmd1].outputState();
	else{ cout << "Invalid command!" << endl;}
}
