#include<iostream>
using namespace std;

void printO(int N,int M){
	for(int i = 0 ; i < N && N > 0 ; i ++ ) {
		if(M <= 0){
			cout << "Invalid input" ;
			break ;
		}else{
			for(int j = 0 ; j < M ; j ++) {		
				cout << 'O' ;
			}	
		cout << "\n" ;
		}	
	}
	if(N <= 0){
		cout << "Invalid input" ;
	}

}
	


int main(){
		
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
