#include <iostream>
// mini computeraki


using namespace std;
int main()
{	int sel=0;
	double x;
	double y;
	double xy;
	

	
	while (sel!=5){
		
		cout<<"Grapse ti theleis na kanei to programma "<<endl<<"1.Prosthesh"<<endl<<"2.Aferesh"<<endl<<"3.Pollaplasiasmo"<<endl<<"4.dieresh"<<endl<<"5.termatismos"<<endl<<endl;
		cin>>sel;
	
		switch (sel){
		
		case 1:
		cout<<"Dwse x : ";
    	cin>>x;
    	cout<<"Dwse y : ";
    	cin>>y;
    	xy=x+y;
    	cout<<"to athrisma twn 2 timwn einai : "<<xy<<endl<<endl;
    	break;
    	
    	case 2:
		cout<<"Dwse x  : ";
    	cin>>x;
    	cout<<"Dwse y  : ";
    	cin>>y;
    	xy=x-y;
    	cout<<"h diafora twn 2 timwn einai : "<<xy<<endl<<endl;
    	break;
	
		case 3:
    	cout<<"Dwse x  : ";
    	cin>>x;
    	cout<<"Dwse y  : ";
    	cin>>y;
    	xy=x*y;
    	cout<<"to ginomeno twn 2 timwn einai : "<<xy<<endl<<endl;
    	break;
    	
    	case 4:
    	cout<<"Dwse x  : ";
    	cin>>x;
    	cout<<"Dwse y  : ";
    	cin>>y;
    	xy=x/y;
    	cout<<"to piliko twn 2 timwn einai : "<<xy<<endl<<endl;
    	break;
    	
    	case 5 :
    	break;
    	
    	default: cout<<"Wrong Input!!!"<<endl<<endl;



    
}
    
}
	cout<<"To programma tha termatisei tora"<<endl;
	return 0;
}




