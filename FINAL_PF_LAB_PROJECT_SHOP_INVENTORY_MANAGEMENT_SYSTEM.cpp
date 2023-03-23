//*** SHOP INVENTORY MANAGEMENT SYSTEM ****
#include<iostream>
#include<string>
#include<conio.h>

using namespace std ;

int asci_sym = 220 ;
char ch = asci_sym ; //Assigning Ascii Value For Desired shape(Boundary)
int i_recrd = 0 ;   //global varable for records
int count = 0;     //Counter For Items Sold 
int bill = 0;     //Global Var for Bill Calculation
                
//********** ALL FUNCTIONS PROTOTYPE ************                
void design () ;
void design_se () ;
void add_Sal_man () ;
void Sal_man_status () ;
void show_all_item () ;
int bill_calculation (int) ;
void show_itm_sold () ;
void fire_sa_ma () ;

struct super_store 

{	
	string sales_m ;
	int age_sales_m ;
	int sale_m_id ;

} Super_s[5] ;

// * Main Fuction *

int main () {

Referesh:
	system("cls");
	int pick ;
	design();
	
	cout<<"\n\n"<<ch<<ch<<" 1. ADD SALESMAN ";
	cout<<"\n\n"<<ch<<ch<<" 2. SHOW ALL ITEMS IN SHOP ";
	cout<<"\n\n"<<ch<<ch<<" 3. SHOW ITEM SOLD || INCOME OF SALESMAN ";
	cout<<"\n\n"<<ch<<ch<<" 4. SALESMANS STATUS";
	cout<<"\n\n"<<ch<<ch<<" 5. FIRE SALESMAN ";
	cout<<"\n\n"<<ch<<ch<<" 6. EXIT THIS SYSTEM \n\n ";
	
	for(int i = 1 ; i <= 38 ; i ++)
		cout<<ch;
	cout<<"\n\n "<<ch<<ch<<" Pick The Operation You Want To Go With ->  || ";
	cin>>pick ;
	
	switch(pick) {
		case 1 :
			add_Sal_man ();
			break;
		case 2 :
			show_all_item () ;
			break;
		case 3 :
            show_itm_sold () ;
			break;
		case 4 :
			Sal_man_status () ;
			break;
		case 5 :
			fire_sa_ma () ;
			break;
		case 6 :
			exit(0);
		default :
			cout<<"\n\n "<<ch<<ch<<" !! PLEASE READ THE MENU CAREFULLY !! "<<ch<<ch;
	}
	getch();
	goto Referesh ;
	
}

void design () 
{
	cout<<"\n";
	
	for (int i = 1 ; i <= 38 ; i ++ )
		cout<<ch;
	
	cout<<"  SHOP INVENTORY MANAGEMENT SYSTEM PROJECT  ";
	
	for(int i = 1 ; i <= 38 ; i++)
		cout<<ch;
}

void design_se () 
{
	cout << "\n\n";
	
	for (int i = 0 ; i < 120 ; i++) 
	   cout << ch;
	
	cout << "\n\n";
}

//*** Function Using For Adding Salesman
void add_Sal_man () {
	
	system("cls");
	design ();
	
	cout<<"\n\n Input Your Salesman Name : --> ";
	cin>>Super_s[i_recrd].sales_m ;
	
	cout<<"\n\n Input Your Salesman ID No. : --> ";
	cin>>Super_s[i_recrd].sale_m_id ;
	
	cout<<"\n\n Input Your Salesman Actual Age Acc. To (CNIC) : --> ";
	cin>>Super_s[i_recrd].age_sales_m ;
	
	i_recrd = i_recrd + 1 ;
	
	cout<<"\n\n\n"<<ch<<ch<<" SALESMAN HAS BEEN ADDED SUCCESSFULLY....";
}

//**** Using Function Viewing Salesman Present In The Shop Or Not

void Sal_man_status () {
	system ("cls") ;
	design () ;
	if(i_recrd==0)
		cout<<"\n\n "<<ch<<ch<<" No SalesMan Here In The Shop "<<ch<<ch ;
	else {
		int s_m_id, present = 0;
		
		cout<<"\n\n Input Your Salesman ID Plz ->";
		cin>>s_m_id ;
		
		for (int a = 0 ; a<i_recrd ; a ++ ) { // loop body
		
			if(s_m_id == Super_s[a].sale_m_id) {

				cout<<"\n\n SALESMAN NAME - >"<<Super_s[a].sales_m;
				cout<<"\n\n SALESMAN ACTUAL AGE Acc. TO (CNIC) - > " <<Super_s[a].age_sales_m;
                cout<<"\n\n This Salesman Is Present In The Store" ;
				present ++ ;
				break;
			}
		}
		
		if(present == 0)
			cout<<"\n\n\n"<<ch<<ch<<" SALESMAN IS NOT PRESENT "<<ch<<ch;
	}
	
}

//***** Using Function To Fire SalesMan
void fire_sa_ma () {
	system("cls");
	design () ;
	if(i_recrd==0)
		cout<<"\n\n "<<ch<<ch<<" NO SALESMAN IS HERE "<<ch<<ch ;
	else {
		int s_m_id, present= 0;
		cout<<"\n\n INPUT SALESMAN ID TO FIRE HIM SUCCESSFULLY -> ";
		cin>>s_m_id ;
		for(int a = 0 ; a<i_recrd ; a ++ ) {
			if(s_m_id == Super_s[a].sale_m_id) 
			{
				
				cout<<"\n\n\n"<<ch<<ch<<" FIRE SALESMAN SUCCESSFULLY... "<<ch<<ch;
				present ++ ;
				i_recrd = i_recrd - 1 ;
				break ;
			}
		}
		if(present == 0)
			cout<<"\n\n\n"<<ch<<ch<<" NO SALESMAN FOUND HERE "<<ch<<ch;
	}
}

//****** Using Function Showing All Groceries In The Store
void show_all_item () {
 
    system ("cls") ;
	int inp_cate = 0 , itemNo = 0 , totalbill = 0 ,  sa_en ;
	 
	design () ;

	cout<<"\n\n";
	cout<<"\n\n__________________________________________________________GROCERRY ITEMS ON DISPLAY_________________________________________________________";
	//Total 50 Items As Given
	string fruite[10] = {"  Banana(100)", "  Pineappe(300)", "  Apple(100)", "  Apricote(200)", " Orange(100)", "  Watermilon(300)", " Grapes(200)", "  Mangoes(100)", " Stawberry (300)", " Blackberry(100)"};
	string vegetables[10] = {"  Tomato(30)", "   Potato(40)", "    Onion(50)", "    Redpaper(60)", "    Garlick(70)", "   Brocoli(80)", "   Corn(100)", "   Carrot(50)", "   Greenpaper(60)", "   Pea(70)"};
	string biscutes[10] = {"  Tuck(20)", "     Gala(30)", "     Sooper(20)", "     Rio(30)", "     Club(30)", "     Peanut(20)", "     Twix(30)", "     Nankhatai(20)", "     Candi(30)", "     Chip(20)"};
	string chips[10] = {"  Walker(200)", "      Lays(100)", "     Cheetos(100)", "     Bingo!(250)", "     Ruffles(150)", "     Fritos(100)", "     Crezo(200)", "     Wavy(100)", "     Corn(200)", "     Dark(100)"};
	string icecream[10] = {"  Mango cat(500)", "  Bug(700)", "  Silence cherry(150)", "  Bloody Coffee(50)", "  Pumkin Trash(400)", "  Talent(300)", "  Life Saver(250)", "  Choco(100)", " Stewb(50)", " Tenzo(20)"};
	cout << "\n\n\n\t\t\t\t\t\tWELCOME TO OUR SUPER STORE\n\n";
	cout << "\n\t\t\t\t\tITEMS WITH THEIR PRICES ARE GIVEN REPECTIVELY \n";
	design_se();
	cout<<"\n\n\n" ;
	cout << "FRUITES  :: ";
	for (int i = 0; i < 10; i++) {
		cout << fruite[i];
	}
	design_se();
	cout<<"\n\n\n" ;
	cout << "VEGETABLES  :: ";
	for (int i = 0; i < 10; i++) {
		cout << vegetables[i];
	}
	design_se();
	cout<<"\n\n\n" ;
	cout << "BISCUTES  :: ";
	for (int i = 0; i < 10; i++) {
		cout << biscutes[i];
	}
	
	design_se();
	cout<<"\n\n\n" ;
	cout << "CHIPS  :: ";
	for (int i = 0; i < 10; i++) {
		cout << chips[i];
	}
	design_se();
	cout<<"\n\n\n" ;
	cout << "ICECREAMS:: ";
	for (int i = 0; i < 10; i++) {
		cout << icecream[i];
	}

	design_se();
    
	cout << "\n\n\t\'Pick 1 for Fruits' ";
    cout << "\n\n\t\'Pick 2 for Vegetables' ";
    cout << "\n\n\t\'Pick 3 for Biscutes' ";
    cout << "\n\n\t\'Pick 4 for Chips' ";
    cout << "\n\n\t\'Pick 5 for Icecream\' ";
    
    cout<<"\n\n\tHow Many Customers User Want To Entertain At The Spot --> || ";
    cin>>sa_en ;
    cout<<"\n\n\n\tUser Will Entertain :: ("<<sa_en<<") Customers At Time ";
    int cus = 1 ;
    
	while (cus <= sa_en )
	
	{
	cout <<"\n\n\tCustomer :: "<<cus<<" Will Now Choose Groceries \n";
	cout << "\n\n\tFrom How Many \"Categories\" Do You Want To Buy Product ?... || ";
    cin >> inp_cate;
   
    for (int i = 0; i < inp_cate; i++)
    {
        cout << "\n\n\tPick Category From Which You Want To Buy Product ..  -->  : || " ;
        cin >> itemNo;
        totalbill = totalbill + bill_calculation(itemNo);
    } 
     cout<<"\n\n\n\n\tTotal Bill For Customer "<<cus<<" Is { "<<totalbill<<" Rs /only..} " ;
     
	 cus++;
	 
     getch();	
	}
 
 //cout<<" \tTotal BilL For Your Grocerry : { "<<totalbill<<" Rs/only }..";
 cout << "\n\n\tTotal Items Sold : (" <<count<<")";
 
 design_se();
 
 cout << "\n\n\t (\"THE PLACE THAT FIT YOUR NEEDS" ") ";

}
//****** Using Function With Return Type int For Bill Evaluation
int bill_calculation (int item)
{
    int choice, n;
    // this is for fruites
    if (item == 1)
    {
        cout << "\n\n\tNo. Of Fruits You Want To Buy ? ... " ;
        cin >> n ;
        if(n > 0 && n <= 50) {
		
        for (int i = 0; i < n ; i++)
        {
            cout << "\n\n\tPick Fruit Within (1 to 10) : ";
            cin >> choice;
        if (choice >0 && choice <= 10) {
		
            if (choice == 1)
            {
                bill = bill + 100;
                count++;
            }
            if (choice == 2)
            {
                bill = bill + 300;
            
			count++;}
            if (choice == 3)
            {
                bill = bill + 100;
                count++;
            }
            if (choice == 4)
            {
                bill = bill + 200;
            count++;}
            if (choice == 5)
            {
                bill = bill + 100;
           count++; }
            if (choice == 6)
            {
                bill = bill + 300;
            count++;}
            if (choice == 7)
            {
                bill = bill + 200;
            count++;}
            if (choice == 8)
            {
                bill = bill + 100;
            count++;}
            if (choice == 9)
            {
                bill = bill + 300;
            count++;}
            if (choice == 10)
            {
                bill = bill + 100;
            count++;}
        }
        else 
		cout<<"\nIt Is Requested To See Menu First (1 || 10)";
        
        } 
        
    }
    else
    cout<<"\nWe Have Only (50) Items In The Store";
    }
    // this is for Vegetables
    if (item == 2)
    {
        cout << "\n\n\tNo. Of Vegetables You Want To Buy ? ... ";
        cin >> n;
        if(n > 0 && n <= 50) {
        for (int i = 0; i < n; i++)
        {
            cout << "\n\n\tPick Vegetables Within (1 to 10) : ";
            cin >> choice;
            if (choice >0 && choice <= 10) {
            if (choice == 1)
            {
                bill = bill + 30;
            count++;}
            if (choice == 2)
            {
                bill = bill + 40;
            count++;}
            if (choice == 3)
            {
                bill = bill + 50;
            count++;}
            if (choice == 4)
            {
                bill = bill + 60;
            count++;}
            if (choice == 5)
            {
                bill = bill + 70;
            count++;}
            if (choice == 6)
            {
                bill = bill + 80;
            count++;}
            if (choice == 7)
            {
                bill = bill + 100;
            count++;}
            if (choice == 8)
            {
                bill = bill + 50;
     count++;       }
            if (choice == 9)
            {
                bill = bill + 60;
            count++;}
            if (choice == 10)
            {
                bill = bill + 70;
            count++;}
            
            }
            else 
		    cout<<"\nIt Is Requested To See Menu First (1 || 10)";
        }
    }
        else
        cout<<"\nWe Have Only (50) Items In The Store";
    }
    if (item == 3)
    {
        cout << "\n\n\tNo. Of Biscuits You Want To Buy ? ... ";
        cin >> n;
        if(n > 0 && n <= 50) {
        for (int i = 0; i < n; i++)
        {
            cout << "\n\n\tPick Biscuits Within (1 to 10) : ";
            cin >> choice;
            if (choice >0 && choice <= 10) {
            if (choice == 1)
            {
                bill = bill + 20;
            count++;}
            if (choice == 2)
            {
                bill = bill + 30;
            count++;}
            if (choice == 3)
            {
                bill = bill + 20;
            count++;}
            if (choice == 4)
            {
                bill = bill + 30;
            count++;}
            if (choice == 5)
            {
                bill = bill + 30;
            count++;}
            if (choice == 6)
            {
                bill = bill + 20;
            count++;}
            if (choice == 7)
            {
                bill = bill + 30;
            count++;}
            if (choice == 8)
            {
                bill = bill + 20;
             count++;        }
            if (choice == 9)
            {
                bill = bill + 30;
            count++;}
            if (choice == 10)
            {
                bill = bill + 20;
            count++;}
           
            }
            else 
		    cout<<"\nIt Is Requested To See Menu First (1 || 10)";
        }
	 }

        else
        cout<<"\nWe Have Only (50) Items In The Store";
    }
    if (item == 4)
    {
        cout << "\n\n\tNo. Of Chips You Want To Buy ? ... ";
        cin >> n;
        if(n > 0 && n <= 50) {
        for (int i = 0; i < n; i++)
        {
            cout << "\n\n\tPick Chips Within (1 to 10) : ";
            cin >> choice;
            if (choice >0 && choice <= 10) {
            if (choice == 1)
            {
                bill = bill + 200;
            count++;}
            if (choice == 2)
            {
                bill = bill + 100;
            count++;}
            if (choice == 3)
            {
                bill = bill + 100;
            count++;}
            if (choice == 4)
            {
                bill = bill + 250;
            count++;}
            if (choice == 5)
            {
                bill = bill + 150;
            count++;}
            if (choice == 6)
            {
                bill = bill + 100;
            count++;}
            if (choice == 7)
            {
                bill = bill + 200;
            count++;}
            if (choice == 8)
            {
                bill = bill + 100;
            count++;}
            if (choice == 9)
            {
                bill = bill + 200;
            count++;}
            if (choice == 10)
            {
                bill = bill + 100;
            count++;}
            
        }
        else 
		cout<<"\nIt Is Requested To See Menu First (1 || 10)";
         }
         
		}
        else
        cout<<"\nWe Have Only (50) Items In The Store";
    }
    if (item == 5)
    {
        cout << "\n\n\tNo. Of Icecream You Want To Buy ? ... ";
        cin >> n;
        if(n > 0 && n <= 50) {
        for (int i = 0; i < n; i++)
        {
            cout << "\n\n\tPick Icecream Within (1 to 10) : ";
            cin >> choice;
            if (choice >0 && choice <= 10) {
            if (choice == 1)
            {
                bill = bill + 500;
            count++;}
            if (choice == 2)
            {
                bill = bill + 700;
            count++;}
            if (choice == 3)
            {
                bill = bill + 150;
            count++;}
            if (choice == 4)
            {
                bill = bill + 50;
            count++;}
            if (choice == 5)
            {
                bill = bill + 400;
            count++;}
            if (choice == 6)
            {
                bill = bill + 300;
            count++;}
            if (choice == 7)
            {
                bill = bill + 250;
            count++;}
            if (choice == 8)
            {
                bill = bill + 100;
            count++;}
            if (choice == 9)
            {
                bill = bill + 50;
            count++;}
            if (choice == 10)
            {
                bill = bill + 20;
            count++;}
            
      }
      else 
	  cout<<"\nIt Is Requested To See Menu First (1 || 10)";
     }
   }
	else
    cout<<"\nWe Have Only (50) Items In The Store"; 
	}
    return bill;
}
void show_itm_sold () 
{
	system("cls") ;
	
	float salary_S ;
	if (count == 0)
	{
		cout<<"\"No Item Has Been Sold Till Now\"";
	}
	else
	{
		cout<<"Total Item Sold Till Now --->> ("<<count<<")" ;
		salary_S = float ( count / 60.0 ) ;
		cout <<"\n\n Salary (ratio) Of Salesman Acco. To The Products He Sold Is { "<<salary_S<<" Rs/only.}" ;
	}	
}

//*********************************** ENDING **************************************


