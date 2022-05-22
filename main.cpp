#include<iostream>

using namespace std;

int main(){
	//measurement of body temperature
	double bodyTemp = 95.5;
		cout<< "Enter your body temperature: ";
		cin>> bodyTemp;
	
	//normal body temp
	if(bodyTemp>= 90.5 && bodyTemp<=98.5){
		cout<< "Normal bodytemperature";
	}
	
	//high or low body temp
	else{
		cout<< "unstable bodytemperature";
	}
	
	return 0;
}
