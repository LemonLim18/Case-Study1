#include <iostream>
#include <string>
using namespace std;

int main(){
	double l1=4.5, l2=4.7, l3=5.3, l4=6.2, l5=4.7, l6=4.55, l7=4.1, l8=3.96, l9=6.6;
	double w1=4, w2=4.1, w3=4.2, w4=4.2, w5=4.7, w6=4.55, w7=4.1, w8=3.96, w9=4.9;
	double room_length, room_width, temp;
	string first_choice, second_choice;
	
	cout << "The Dining Tables Available in Our Shop:"<<endl;
	cout << "Rectangle Heinrich |  1.3m * 0.8m	|  6 seaters"<<endl;
	cout << "Rectangle Niklas   |  1.5m * 0.9m	|  6 seaters"<<endl;
	cout << "Rectangle Bertha   |  2.1m * 1.0m	|  8 seaters"<<endl;
	cout << "Rectangle Shade    |  3.0m * 1.0m	| 12 seaters"<<endl;
	cout << "Round Nadine       |  1.5m diameter     |  6 seaters"<<endl;
	cout << "Round Emma	   |  1.35m diameter    |  8 seaters"<<endl;
	cout << "Square Lea	   |  0.9m * 0.9m   	|  4 seaters"<<endl;
	cout << "Square Finn        |  0.76m * 0.76m     |  2 seaters"<<endl;
	cout << "Oval Stefan        |  3.0m * 1.3m    	| 10 seaters"<<endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"<<endl;
	
	cout << "Please input the room length (in meter unit):";
	cin >> room_length;
	cout << "Please input the room width (in meter unit):";
	cin >> room_width;
	
	if (room_width > room_length){
		temp = room_width;
		room_width = room_length;
		room_length = temp;
	}
	
	if(room_length >= 6.6 && room_width >= 4.9){
		first_choice = "Oval Stefan with 10 seats";
		second_choice =	"Rectangle Shade with 12 seats";
		
	}else if(room_length >= 6.2 && room_width >= 4.2){
		first_choice = "Rectangle Shade with 12 seats";
		second_choice = "Rectangle Bertha with 8 seats";	
			
	}else if(room_length >= 5.3 && room_width >= 4.2){
		first_choice = "Rectangle Bertha with 8 seats";
		second_choice = "Round Nadine with 8 seats";
			 
	}else if(room_length >= 4.7 && room_width >= 4.7){
		first_choice = "Round Nadine with 8 seats";
		second_choice = "Rectangle Niklas with 6 seats";	
		 
	}else if(room_length >= 4.7 && room_width >= 4.1){
		first_choice = "Rectangle Niklas with 6 seats";
		second_choice = "Round Emma with 6 seats";	
		 
	}else if(room_length >= 4.55 && room_width >= 4.55){
		first_choice = "Round Emma with 6 seats";
		second_choice = "Rectangle Heinrich with 6 seats";	
		 
	}else if(room_length >= 4.5 && room_width >= 4){
		first_choice = "Rectangle Heinrich with 6 seats";
		second_choice = "Square Lea with 4 seats";	
		 
	}else if(room_length >= 4.1 && room_width >= 4.1){
		first_choice = "Square Lea with 4 seats";
		second_choice = "Square Finn with 2 seats";
		 
	}else if(room_length >= 3.96 && room_width >= 3.96){
		first_choice = "Square Finn with 2 seats";
		second_choice = "Sorry, there's no other suitable table for your room.";
		
	}else{
		first_choice = "Sorry, there's no suitable table for your room.";
		second_choice = "Sorry, there's no other suitable table for your room.";
	}
	
	cout << "\nThe first most suitable table is  : "<<first_choice<<endl;
	cout << "The second most suitable table is : "<<second_choice<<endl;
	return 0;
}
