#include <iostream>
using namespace std;

int main(){
	const float TAX = 0.06;
	float sales_Tax;
	float subTotal;
	float Total;	
	float item1 =12.95;
	float item2 = 24.95;
	float item3 = 6.95;
	float item4 = 14.95;
	float item5 = 3.95;
	
	cout << "The Item prices are listed below\n";
	cout << item1 << endl;
	cout << item2 << endl;
	cout << item3 << endl;
	cout << item4 << endl;
	cout << item5 << endl;
	
	cout << "----------------------------------\n";
	subTotal = item1 + item2 + item3 + item4 + item5;
	cout << "The subtotal is = " << subTotal << endl;
	
	cout << "----------------------------------\n";
	sales_Tax = subTotal * TAX;
	cout << "The sales Tax applied = " << sales_Tax <<endl;
	
	cout << "----------------------------------\n";
	Total = sales_Tax + subTotal;
	cout << "The Total bill is =  " << Total;
	
	return 0;
	
}
