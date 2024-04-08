#include <iostream>
using namespace std;

int main (){
	
	int xronia;
	double poso;
	double tokos=5;
	
	cout<<"Dwse arxiko poso : ";
	cin>>poso;
	cout<<"Dwse xronia pou tha meinoun ta xrhmata sthn trapeza : ";
	cin>>xronia;
	
	for (int i=1; i<=xronia; i++){
		poso+=(poso*tokos/100);
		tokos-=0.22;
		
		if (tokos<=2.5){
			tokos=2.5;
		}

	}
	
	cout<<"To poso pou tha parei o pelaths mazi tous tokous tha einai : "<<poso;
	
	return 0;
	
}
