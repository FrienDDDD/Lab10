#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	
	double loan,interest,payment ;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> interest ;
	cout << "Enter amount you can pay per year: ";
	cin >> payment ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#" ; 
	cout << setw(13) << left << "PrevBalance" ; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance"  ;
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	
	int i = 1,years ;
	double total,Interest,NewBalance,PrevBalance1 = loan,x = 0 ;
	while(loan > 0){
		years = i++ ;
		if( years >= 2){
			cout << setw(13) << left << years  ; 
			cout << setw(13) << left << loan   ; 
		}
		Interest = loan*(interest/100.0) ;
		total = loan+Interest ;
		loan = loan+Interest - payment  ;
		NewBalance = loan ;	
		if(years == 1){
			cout << setw(13) << left << years  ;
			cout <<  setw(13) << left << PrevBalance1 ;
		}
		cout << setw(13) << left << Interest ;
		cout << setw(13) << left << total ;
		if(total < payment){
			cout << setw(13) << left << total ; 
		}else{
			cout << setw(13) << left << payment ;
		}	
		if(NewBalance < 0){
			cout << setw(13) << left << x << endl ;
		}else{
			cout << setw(13) << left << NewBalance << endl ;
		}
	}	

	return 0;
}
