#include<iostream>
#include<iomanip>
using namespace std;
string arrayofemployeename[100];
int arrayofemployeeid[100];
int arrayofemployeesalary[100];
long long int arrayofemployeephone[100];
void Menu();
void Welcome();
class Food{
	protected:
		int ch;
		int price;
		int quantity;
		static int choice;
		static int total;
		int again;
	public:
		Food(){total=0;ch=0;}
		showFoodMenu(){
			cout<<"\t\t\t********Welcome to Menu********\n\n";
			cout<<"1. Vegetarian\n2. Non Vegetarian\n3. Drinks\n4. Fast Food\n5. Back To Main Menu\n\n";
		}
};
int Food::total=0;
int Food::choice=0;
class Vegetable:public Food{
	//string V_food;
	public:
		void vegetableMenu(){
	cout<<("|****************************************************|\n");
	cout<<("|                  Vegetable Menu                    |\n");                    
	cout<<("|****************************************************|\n");	
	cout<<("|Food ID|              |  Name  |       |Price|      |\n");
	cout<<("| 1                    Mix sabzi        Rs.140       |\n");
	cout<<("| 2.                   chola biryani    Rs.60        |\n");
	cout<<("| 3.                   Sandwich         Rs.45        |\n");
	cout<<("| 4.                   Aloo palak       Rs.150       |\n");
	cout<<("| 5.                   Aloo muttar      Rs.120       |\n");
	cout<<("| 6.                   chola            Rs.140       |\n");
	cout<<("| 7.                   Dall             Rs.100       |\n");
	cout<<("| 8.                   Dall Fry         Rs.120       |\n");
	cout<<("| 9.                   Dall makhni      Rs.170       |\n");
	cout<<("| 10.                  Back to main menu             |\n");
	cout<<("|****************************************************|\n");			
		}
		void inputchoice(){cout<<"Enter your choice: ";cin>>choice;
		if(choice==1){
			price=140;
		}
		else if(choice==2){
			price=60;
		}
		else if(choice==3){
			price=45;
		}
		else if(choice==4){
			price=150;
		}
		else if(choice==5){
			price=120;
		}
		else if(choice==6){
			price=140;
		}
		else if(choice==7){
			price=100;
		}
		else if(choice==8){
			price=120;
		}
		else if(choice==9){
			price=170;
		}
		else if(choice==10){
			system("cls");
			Menu();
			ch=10;
		}
		}
		void inputquantity(){if(!ch){
		cout<<"Enter Quantity: ";cin>>quantity;
		}
		total+=(quantity*price);
		cout<<"\nDo you want to buy more (1 to agree/2 to disagree): ";
		cin>>again;
		if(again==1){
			system("cls");
			vegetableMenu();
			inputchoice();
			inputquantity();
		}
		}
		static int gettotal(){if(choice!=10){
		return total;}
		}
};
class Non_Vegetable:public Food{
	//string N_food;
	public:
		void nonvegetableMenu(){
	cout<<("|***********************************************|\n");
	cout<<("|                 Non Veg. Menu                 |\n");
	cout<<("|***********************************************|\n");
	cout<<("|Food ID|                | Name |         |Price|\n");
	cout<<("|   1.                    chicken          1000 |\n");
	cout<<("|   2.                    white chicken    1200 |\n");
	cout<<("|   3.                    Tikka            140  |\n");
	cout<<("|   4.                    zinger           200  |\n");
	cout<<("|   5.                    mutton           1600 |\n");
	cout<<("|   6.                    chicken handi    1200 |\n");
	cout<<("|   7.                    chicken boti     150  |\n");
	cout<<("|   8.                    mutton white     1800 |\n");
	cout<<("|   9.                    chicken malai    1100 |\n");
	cout<<("|   10.                   Back to main menu     |\n");
	cout<<("|***********************************************|\n");
		}
		void inputchoice(){cout<<"Enter your choice: ";cin>>choice;
		if(choice==1){
			price=1000;
		}
		else if(choice==2){
			price=1200;
		}
		else if(choice==3){
			price=140;
		}
		else if(choice==4){
			price=200;
		}
		else if(choice==5){
			price=1600;
		}
		else if(choice==6){
			price=1200;
		}
		else if(choice==7){
			price=150;
		}
		else if(choice==8){
			price=1800;
		}
		else if(choice==9){
			price=1100;
		}
		else if(choice==10){
			system("cls");
			Menu();
			ch=10;
		}
		}
		void inputquantity(){if(!ch){
		cout<<"Enter Quantity: ";cin>>quantity;
		}
		total+=(quantity*price);
		cout<<"\nDo you want to buy more (1 to agree/2 to disagree): ";
		cin>>again;
		if(again==1){
			system("cls");
			nonvegetableMenu();
			inputchoice();
			inputquantity();
		}
		}
		static int gettotal(){if(choice!=10){
		return total;}
		}
};
class Fast_Food:public Food{
	//string f_food;
	public:
		void fastfoodMenu(){
	cout<<("|***********************************************|\n");
	cout<<("|                 FastFoodMenu                  |\n");
	cout<<("|***********************************************|\n");
	cout<<("|Food ID|                | Name |         |Price|\n");
	cout<<("|   1.                    Zinger             220|\n");
	cout<<("|   2.                    Broast             200|\n");
	cout<<("|   3.                    Fries              100|\n");
	cout<<("|   4.                    chicken burger     300|\n");
	cout<<("|   5.                    Pizza              600|\n");
	cout<<("|   6.                    mayo roll           70|\n");
	cout<<("|   7.                    chicken sandwich   100|\n");
	cout<<("|   8.                    chutni roll         60|\n");
	cout<<("|   9.                    chicken roll       150|\n");
	cout<<("|   10.                   Back to main menu     |\n");
	cout<<("|***********************************************|\n");
		}
		void inputchoice(){cout<<"Enter your choice: ";cin>>choice;
		if(choice==1){
			price=220;
		}
		else if(choice==2){
			price=200;
		}
		else if(choice==3){
			price=100;
		}
		else if(choice==4){
			price=300;
		}
		else if(choice==5){
			price=600;
		}
		else if(choice==6){
			price=70;
		}
		else if(choice==7){
			price=100;
		}
		else if(choice==8){
			price=60;
		}
		else if(choice==9){
			price=150;
		}
		else if(choice==10){
			system("cls");
			Menu();
			ch=10;
		}
		}
		void inputquantity(){if(!ch){
		cout<<"Enter Quantity: ";cin>>quantity;
		}
		total+=(quantity*price);
		cout<<"\nDo you want to buy more (1 to agree/2 to disagree): ";
		cin>>again;
		if(again==1){
			system("cls");
			fastfoodMenu();
			inputchoice();
			inputquantity();
		}
		}
		static int gettotal(){if(choice!=10){
		return total;}
		}
};

class Drinks:public Food{
	//string drink;
	
	public:
		void drinksMenu(){
	cout<<("|***********************************************|\n");
	cout<<("|                 Drinks Menu                   |\n");   
	cout<<("|***********************************************|\n");
	cout<<("|Food ID|                | Name |         |Price|\n");
	cout<<("|   1.                    chai             40   |\n");
	cout<<("|   2.                    Green Tea        30   |\n");
	cout<<("|   3.                    Cold coffee      100  |\n");
	cout<<("|   4.                    Hot coffee       80   |\n");
	cout<<("|   5.                    Corn soup        90   |\n");
	cout<<("|   6.                    Chicken soup     120  |\n");
	cout<<("|   7.                    Orange juice     150  |\n");
	cout<<("|   8.                    Apple juice      100  |\n");
	cout<<("|   9.                    milk shake       100  |\n");
	cout<<("|   10.                   Back to main menu     |\n");
	cout<<("|***********************************************|\n");
		}
		void inputchoice(){cout<<"Enter your choice: ";cin>>choice;
		if(choice==1){
			price=40;
		}
		else if(choice==2){
			price=30;
		}
		else if(choice==3){
			price=100;
		}
		else if(choice==4){
			price=80;
		}
		else if(choice==5){
			price=90;
		}
		else if(choice==6){
			price=120;
		}
		else if(choice==7){
			price=150;
		}
		else if(choice==8){
			price=100;
		}
		else if(choice==9){
			price=100;
		}
		else if(choice==10){
			system("cls");
			//ch=10;
			Menu();
			ch=10;
		}
		}
		void inputquantity(){if(!ch){
		cout<<"Enter Quantity: ";cin>>quantity;
		}
		total+=(quantity*price);
		cout<<"\nDo you want to buy more (1 to agree/2 to disagree): ";
		cin>>again;
		if(again==1){
			system("cls");
			drinksMenu();
			inputchoice();
			inputquantity();
		}
		}
		static int gettotal(){if(choice!=10){
		return total;}
		}
};
class Employee{
	static int Employeecount;
	static int counterid;
	static int countername;
	static int countersalary;
	static int counterphone;
	string name;
	int id;
	int salary;
	long long int phone;
	int again;
	int searchId;
	static int removeId;
	public:
		void showEmployeeMenu(){
			cout<<("\t\t\t********Welcome to Administration********\n\n");
			cout<<("1. Add employee Record\n");
			cout<<("2. Search employee Record\n");
			cout<<("3. Delete employee Record\n");
			cout<<("4. View all Record\n");
			cout<<("5. Total Employees \n");
			cout<<"6. Employee Names\n";
			cout<<"7. Employee Ids\n";
			cout<<"8. Total Employees Salary\n";
			cout<<("9. Back To Main Menu \n\n");
		}
		void inputId(){system("cls");cout<<"Enter ID: ";cin>>id;
			arrayofemployeeid[counterid] = id;
			counterid++;
			Employeecount++;
		}
		void inputname(){cout<<"Enter name: ";cin>>name;
			arrayofemployeename[countername] = name;
			countername++;
		}
		void inputSalary(){cout<<"Enter Salary: ";cin>>salary;
			arrayofemployeesalary[countersalary] = salary;
			countersalary++;
		cout<<"Employee Recorded...\n\n";
		cout<<"Press 1 to go to Main Menu..";
		cin>>again;
		if(again==1){
			system("cls");
			Menu();
		}
		else {
			cout<<"Good Bye...";
		}
		}
		void inputPhone(){cout<<"Enter Phone (do not start with 0 use country code): ";cin>>phone;
			arrayofemployeephone[counterphone] = phone;
			counterphone++;
		}
		void search(){system("cls");cout<<"Enter Id you want to search: ";cin>>searchId;
		for(int i=0;i<counterid;i++){
			if(searchId==arrayofemployeeid[i]){
			cout<<"Found ID Here!!\n\n";
			cout<<setw(8)<<"Name"<<setw(20)<<"Id"<<setw(25)<<"Phone"<<setw(30)<<"Salary\n\n";
			cout<<"*****************************************************************************************\n";
  			cout<<i+1<<". ";
			cout<<setw(4)<<arrayofemployeename[i]<<setw(20);
			cout<<setw(19)<<arrayofemployeeid[i]<<setw(20);
			cout<<setw(24)<<arrayofemployeephone[i]<<setw(24);
			cout<<setw(24)<<arrayofemployeesalary[i]<<endl;
			cout<<"*****************************************************************************************\n";
			}
			else
				cout<<"";
		}
		cout<<"Press 1 to go to Main Menu..";
		cin>>again;
		if(again==1){
			system("cls");
			Menu();
		}
		else {
			cout<<"Good Bye...";
		}
		}
		void remove(){system("cls");cout<<"Enter the position you want to remove(1-99): ";cin>>removeId;
			if(removeId>0 and removeId<counterid){
				Employeecount--;
			}
			arrayofemployeename[removeId-1]="-1";
			arrayofemployeeid[removeId-1]=-1;
			arrayofemployeesalary[removeId-1]=-1;
			arrayofemployeephone[removeId-1]=-1;
		cout<<"\nPress 1 to go to Main Menu..";
		cin>>again;
		if(again==1){
			system("cls");
			Menu();
		}
		else{
			cout<<"Good Bye..";
		}
		}
		void viewAllrecord(){
			system("cls");	
			
		cout<<setw(8)<<"Name"<<setw(20)<<"Id"<<setw(25)<<"Phone"<<setw(30)<<"Salary\n\n";
		cout<<"*****************************************************************************************\n";
		for(int i=0;i<counterid;i++){
			if(arrayofemployeename[i]!="-1" and arrayofemployeeid[i]!=-1 and arrayofemployeesalary[i]!=-1
				and arrayofemployeephone[i]!=-1
		  	){
  			cout<<i+1<<". ";
			cout<<setw(4)<<arrayofemployeename[i]<<setw(20);
			cout<<setw(19)<<arrayofemployeeid[i]<<setw(20);
			cout<<setw(24)<<arrayofemployeephone[i]<<setw(24);
			cout<<setw(24)<<arrayofemployeesalary[i]<<endl;
		}
		else{
			cout<<"\n";
		}
}
		cout<<"\nPress 1 to go to Main Menu..";
		cin>>again;
		if(again==1){
			system("cls");
			Menu();
		}
		else{
			cout<<"Good Bye..";
		}
}
		void employeenames(){
			system("cls");
			cout<<"\t\t\t********Names of Employees********\n\n";
			for(int i=0;i<counterid;i++){
				cout<<arrayofemployeename[i]<<endl;
			}
		cout<<"\nPress 1 to go to Main Menu..";
		cin>>again;
		if(again==1){
			system("cls");
			Menu();
		}
		else{
			cout<<"Good Bye..";
		}
		}
		void employeeids(){
			system("cls");
			cout<<"\t\t\t********Total Ids of Employees********\n\n";
			for(int i=0;i<counterid;i++){
				cout<<arrayofemployeeid[i]<<endl;
			}
		
		cout<<"\nPress 1 to go to Main Menu..";
		cin>>again;
		if(again==1){
			system("cls");
			Menu();
		}
		else{
			cout<<"Good Bye..";
		}
	}
		void totalsalariesgiven(){
			system("cls");
			cout<<"\t\t\t********Total Salary Given********\n\n";
			int sum=0;
			for(int i=0;i<counterid;i++){
				sum+=arrayofemployeesalary[i];
			}
			cout<<"Total Salary Given is: "<<sum;
		cout<<"\nPress 1 to go to Main Menu..";
		cin>>again;
		if(again==1){
			system("cls");
			Menu();
		}
		else{
			cout<<"Good Bye..";
		}
		}
		
		void TotalEmployees(){
			system("cls");
			cout<<"Total Employees are: "<<Employeecount<<endl;
			cout<<"\nPress 1 to go to Main Menu..";
			cin>>again;
			if(again==1){
				system("cls");
				Menu();
			}
			
			else{
				cout<<"Good Bye..";
			}
		}
};
int Employee::removeId=0;
int Employee::counterid=0;
int Employee::countername=0;
int Employee::countersalary=0;
int Employee::counterphone=0;
int Employee::Employeecount=0;


int main(){
	Menu();
}

void Welcome(){
	cout<<"\t\t\t********Welcome to Restaurant********\n\n";
	cout<<"1. Administration\n2. OrderFood\n3. Exit\n";
}
void Menu(){
	Welcome(); //1-Administration       2-Customer          3-Exit
	int choice;  //declare
	cout<<"\nEnter your choice: ";
	cin>>choice;
	int empchoice;
	if(choice==1){
		system("cls");
		Employee e;
		e.showEmployeeMenu();   //function that shows menu of employee
		cout<<"Enter your choice: ";
		cin>>empchoice;
		if(empchoice==1){      //add record
			e.inputId();    //access
			e.inputname(); //access
			e.inputPhone();
			e.inputSalary();
			}
		else if(empchoice==2){   //search record
			e.search();
		}
		else if(empchoice==3){  //delete record
			e.remove();
		}
		else if(empchoice==4){  //view all record
			e.viewAllrecord();    //array in which all employees are together *name  *id   *salary
		}
		else if(empchoice==5){
			e.TotalEmployees();
		}
		else if(empchoice==6){
			e.employeenames();
		}
		else if(empchoice==7){
			e.employeeids();
		}
		else if(empchoice==8){
			e.totalsalariesgiven();
		}
		else if(empchoice==9){
			system("cls");
			Menu();
		}

	}
	else if(choice==2){
		system("cls");
		Food food;
		food.showFoodMenu();
		int foodchoice;
		cout<<"Enter your choice: ";
			cin>>foodchoice;
		if(foodchoice==1){
			system("cls");
			Vegetable v;
			v.vegetableMenu();
			v.inputchoice();
			v.inputquantity();
			cout<<"Total: "<<v.gettotal();
		}
		else if(foodchoice==2){
			system("cls");
			Non_Vegetable nv;
			nv.nonvegetableMenu();
			nv.inputchoice();
			nv.inputquantity();
			cout<<"Total: "<<nv.gettotal();
		}
		else if(foodchoice==3){
			system("cls");
			Drinks d;
			d.drinksMenu();
			d.inputchoice();
			d.inputquantity();
			cout<<"Total: "<<d.gettotal();
		}
		else if(foodchoice==4){
			system("cls");
			Fast_Food ff;
			ff.fastfoodMenu();
			ff.inputchoice();
			ff.inputquantity();
			cout<<"Total: "<<ff.gettotal();
		}
		else if(foodchoice==5){  //main menu
		system("cls");
			Menu();
		}
	}
	else if(choice==3){
		system("cls");
		cout << "\n\t\t\t\t\t\t******ThankYou******\n";
		exit(0);
	}
	else{
		system("cls");
		cout <<"\n\t\t\t\t\t\t******Wrong Input******\n\t\t\t\t\t\t******Good Bye LOL******";
	}
}
