#include<iostream>
using namespace std;

int share_price, share_quantity, net_amount, commission,sebon;
	
	double brokercommissionrates()
		{
			double commission_rate = 0;
			if (net_amount < 50000)
				commission_rate = 0.004;
			else if(net_amount > 50001 && net_amount < 500000)	
				commission_rate = 0.0037;
			else if(net_amount > 500000 && net_amount < 2000000 )
				commission_rate = 0.0034;
			else if(net_amount > 2000000 && net_amount < 10000000)
				commission_rate = 0.003;
			else if(net_amount > 10000000)
			     commission_rate = 0.0027;
				
			return commission_rate;	 			
		 } 
		 
		 double sebon_fee() {
		 	double sfee;
		 	sfee = 0.00015;
		 	return sfee;
		
		 }
class Buy {
	public:
		
				 
		
		void buy_shares()
		 {
			
			system ("cls");
			cout << "Enter Share Price: ";
			cin >> share_price;
			cout << "Enter Share Quantity: ";
			cin >> share_quantity;
			net_amount = share_price * share_quantity;
			commission = brokercommissionrates() * net_amount; 
			sebon = sebon_fee () * net_amount; 
			
			display_data();
		
		 }
		
		void display_data ()
		{
			cout << "Net Amount:                " << "\t\t\t" << net_amount << endl;
			cout << "Broker Commission:         " << "\t\t\t" << commission << endl;
			cout << "SEBON Fee:                 " << "\t\t\t" << sebon << endl;
			cout << "Total Fees and Commission: " << "\t\t\t" << sebon + commission << endl;
			cout << "Total Amount Payable:      " << "\t\t\t" << net_amount + commission + sebon << endl;
			cout << "Price Per Share:           " << "\t\t\t" << (net_amount + commission + sebon) / share_quantity;  
		 } 

		 
};

class Sell {
	public:
		void sell_shares()
		{
			cout << "Under Construction";
		}
};

int main()

{
	
	Buy  buying;
	Sell selling;
	
	int choice;
	cout << "Welcome To Stock Calculator ( Buy / Sell )" << endl;
	cout << "Choose an Option" << endl;
	cout << "1.) Buy" << endl;
	cout << "2.) Sell" << endl;
	cout << "Enter Your Choice : ";
	cin >> choice;
	if (choice == 1)
		buying.buy_shares();
	else if(choice == 2)
		 selling.sell_shares();
	else
		cout << "Invalid Input!";	
	
}
