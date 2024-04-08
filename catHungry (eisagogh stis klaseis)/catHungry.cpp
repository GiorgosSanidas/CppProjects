#include <iostream>
using namespace std;

class cat {
	
	public :
		int catHungry ;		
		void catResponse (){
			if (catHungry > 5 ) cout<< "Peinao re  , taise me !!!"; 
			else cout<<"Mhn me taizeis allo !!!";
		}
};



int main (){
	
	cat xionobala ;
	
	cout<<"Dwse poso peinaei h xionobala (10 peinaei poly , 0 den peinaei katholou) : ";
	cin>>xionobala.catHungry;
	
	xionobala.catResponse();
	
	return 0;
}
