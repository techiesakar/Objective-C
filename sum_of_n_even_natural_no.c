#include <iostream>
using namespace std;
main() {
	int i, terms, even = 2, sum = 0;
	cout<<"\nEnter total even natural number you wanted : ";
	cin>>terms;
	for(i = 1; i<= terms; i++) {
		sum = sum+even;
		cout<<even<<endl;
		even = even+2;
	}
	cout<<"\nThe sum of "<<terms<<" even number is "<<sum;
}
