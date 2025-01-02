#include "Mostafa`s_project[1].h"





int main(){
	load();
	char choice;
	
	
	do{
		main_menu();
		cout << "Enter your choice >>";
		cin >> choice;
		switch(choice){
			case '1':
				int cho;
				avg:
					cout << "\t\t\t1.Dispaly by id"<<endl;
					cout << "\t\t\t2.Dispaly by name"<<endl;
					cout << "\t\t\t3.Dispaly by Avreg"<<endl;
					cout << "\t\t\t============================================="<<endl;
					cout << "Enter your choice >>";
					cin >> cho;
					if(cho == 1){
						Dispaly_by_id();
					}
					else if(cho == 2){
						Dispaly_by_name();
					}
					else if(cho == 3){
						Dispaly_by_avg();
					}
					else{
						cout << " Your choise is incorect! Agan for[1-3] ";
					goto avg;	
					}
				break;
			case '2':
				Add(); 
				break;
			case '3':
			    Edit();
				break;	
			case '4':
			   Delete();
			   break;
			case '5':
				int ch;
				agane:
			    cout <<"\t\t\t1.Search for ID"<<endl;
			    cout <<"\t\t\t2.Search for Name"<<endl;
			    cout << "\t\t\t============================================="<<endl;
			    cout <<"Enter your choise >> ";
			    cin >> ch;
			    if(ch == 1){
			    	Search_id();
				}
				
				else if(ch == 2){
					Search_name();
				}
				
				else{
				cout << "Your choise is incorect! Agane[1-2]";
				goto agane;
			}
			
			    break;
				
			default:
			cout << "wrong choice! try again from [1-6]"<<endl;	      
		}
	}while(choice != '6');
	cout << "\n\tExiting the program..."<<endl;	
}

