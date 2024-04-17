//Programma pou ylopiei to KINO
#include <iostream>
#include <random>
#include <ctime>
#include <chrono> // library for delay
#include <thread> // library for delay
using namespace std;

int main (){
	
	int arithmoi ; //apothikeui posous arithmous tha pexi o xristis
	double xrhmata; //apothikeui me posa xrimata tha pexi o xristis
	int arithmoiXristi[12]; //apothikeui toys arithmous pou edose o xristis
	int arithmoiKlirosis[20]; //apothikeui toys arithmous pou klirothikan
    
    cout << "Dwse me posous arithmous theleis na pexis (1-12): ";
    cin >> arithmoi;

    //elegxos an o xristis edose arithmo apo to 1 eos to 12
    while (arithmoi < 1 || arithmoi > 12) {
        cout << "Lathos epilogh!!! Dwse me posous arithmous theleis na pexis (1-12): ";
        cin >> arithmoi;
    }

	cout << "Dwse me posa xrhmata theleis na pexis (se euro) :";
	cin >> xrhmata;

    // zitite apo ton xristi na dosei tous arithmous pou theli na pexi
	for (int i=0;i<arithmoi;i++){
	    cout << "Dwse ton "<<i+1<<" arithmo pou thes na pexis (1-80) : ";
	    cin >> arithmoiXristi[i];
	    
	    //elegxos an o xristis edose epitrepto arithmo
	    while (arithmoiXristi[i]>80 || arithmoiXristi[i]<1){
	        cout <<"Edwses mh epitrepto arithmo!!!"<<endl;
	        cout << "Dwse ton "<<i+1<<" arithmo pou thes na pexis (1-80) : ";
	        cin >> arithmoiXristi[i];
	    }
	    
	    //elegxos an o xristis edose to idio arithmo parapano apo 1 fora
	    for (int j=0;j<i;j++){
	        while (arithmoiXristi[j]==arithmoiXristi[i]){
	            cout << "Edwses ton arithmo : "<<arithmoiXristi[i]<<" pou ton eixes dwsei kai prin..."<<endl;;
	            cout << "Dwse ton "<<i+1<<" arithmo pou thes na pexis : ";
	            cin >> arithmoiXristi[i];
	        }
	    }
	}
	
    // genitria tixeon arithmon pou kanoun seed me ton trexon xrono tou rologiou
    mt19937 gen(time(NULL));
    uniform_int_distribution<int> dist(1, 80);
    
    cout<<"Oi arithmoi pou klirothikan einai : ";    
    
    /*
    elegxos gia na min exoume ton idio arithmo sthn klirosh pano apo 1 fora!!!
    xrhsh mias bool metavlitis oste an entopisthi o idios arithmos poy exi
    klirothi proigoumenos na ginei true kai na anagkasi thn genitria tixeon
     arithmon na klirosi neo arithmo sthn thesi toy !!!
     */
    for (int i = 0; i < 20; ++i) {
        bool duplicate = false;
        do {
            arithmoiKlirosis[i] = dist(gen);
            duplicate = false;
            for (int j = 0; j < i; j++) {
                if (arithmoiKlirosis[j] == arithmoiKlirosis[i]) {
                    duplicate = true;
                    break;
                }
            }
        } while (duplicate);
    }   
    
    // emfanisi ton arithmon pou klirothikan stin othoni
    for  (int i =0;i<20;i++){
        cout<<endl<<arithmoiKlirosis[i];
         //prosthiki kathisterisis enos defteroleptou gia na einai pio... spicy :) 
        this_thread::sleep_for(chrono::milliseconds(1000)); // 1s delay
    }
    
    // metritis pou krataei posa noumera epiase o xristis 
    int count = 0 ;
    
    //elegxos an oi arithmoi pou epexe o xristis antistixoun se aftous pou klirothikan
    for (int i=0; i<20;i++){
        for (int j=0; j<arithmoi; j++){
            if (arithmoiKlirosis[i]==arithmoiXristi[j] ){
                count++; //auxisi toy counter gia kathe arithmo poy epiase o xristis !!!
            }
        }
    }
    
    cout<<endl<<"Epiases : "<<count<<" arithmo/arithmous apo tous : "  <<arithmoi;
    
    //ypologismos ton sinolikon pithanon kerdon tou xristi me thn xrhsh toy counter 
    //ta kerdh ypologizonte me vash ta pragmatika kerdi ston OPAP !!!
    switch (arithmoi) {
        
        case 1:
        
            if (count==1) {
                cout<<endl<<"O arithmos pou epexes klirothike!!! Kerdises : "<<xrhmata*2.5<<" euro";
            
            }
        
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
            }
        
        break;
        
        case 2:
        
            if (count==1) {
                cout<<endl<<"klirothike enas arithmos apo tous 2 pou epexes!!! Kerdises : "<<xrhmata<<" euro";
            }    
            else if (count==2){
                cout<<endl<<"Klirothikan kai oi 2 arithmoi pou epexes!!! Kerdises : "<<xrhmata*5<<" euro";          
            }
            
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
            }
        
        break;
        
        case 3:
        
            if (count==2){
                cout<<endl<<"Klirothikan  oi 2 arithmoi apo tous 3 pou epexes!!! Kerdises : "<<xrhmata*2.5<<" euro"; 
            }
            
            else if (count==3){
                cout<<endl<<"Klirothikan kai oi 3 arithmoi pou epexes!!! Kerdises : "<<xrhmata*25<<" euro";          
                }
                    
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }
                
        break;
        
        case 4:
        
             if (count==2){
                cout<<endl<<"Klirothikan  oi 2 arithmoi apo tous 4 pou epexes!!! Kerdises : "<<xrhmata<<" euro"; 
            }
            
            else if (count==3){
                cout<<endl<<"Klirothikan  oi 3 arithmoi apo tous 4 pou epexes!!! Kerdises : "<<xrhmata*4<<" euro";          
                }
                    
            else if (count==4){
                cout<<endl<<"Klirothikan kai oi 4 arithmoi pou epexes!!! Kerdises : "<<xrhmata*100<<" euro";          
                }
                
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }       
                
        break;
        
        case 5:
        
             if (count==3){
                cout<<endl<<"Klirothikan  oi 3 arithmoi apo tous 5 pou epexes!!! Kerdises : "<<xrhmata*2<<" euro"; 
            }
            
            else if (count==4){
                cout<<endl<<"Klirothikan  oi 4 arithmoi apo tous 5 pou epexes!!! Kerdises : "<<xrhmata*20<<" euro";          
                }
                    
            else if (count==5){
                cout<<endl<<"Klirothikan kai oi 5 arithmoi pou epexes!!! Kerdises : "<<xrhmata*450<<" euro";          
                }
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }      
                
        break;
        
        case 6:
        
        
             if (count==3){
                cout<<endl<<"Klirothikan  oi 3 arithmoi apo tous 6 pou epexes!!! Kerdises : "<<xrhmata<<" euro"; 
            }
            
            else if (count==4){
                cout<<endl<<"Klirothikan  oi 4 arithmoi apo tous 6 pou epexes!!! Kerdises : "<<xrhmata*7<<" euro";          
                }
                    
            else if (count==5){
                cout<<endl<<"Klirothikan  oi 5 arithmoi apo tous 6 pou epexes!!! Kerdises : "<<xrhmata*50<<" euro";          
                }
                
            else if (count==6){
                cout<<endl<<"Klirothikan kai oi 6 arithmoi pou epexes!!! Kerdises : "<<xrhmata*1600<<" euro";     
            }
            
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }     
                
        break;
        
        case 7:
         
             if (count==3){
                cout<<endl<<"Klirothikan  oi 3 arithmoi apo tous 7 pou epexes!!! Kerdises : "<<xrhmata<<" euro"; 
            }
            
            else if (count==4){
                cout<<endl<<"Klirothikan  oi 4 arithmoi apo tous 7 pou epexes!!! Kerdises : "<<xrhmata*3<<" euro";          
                }
                    
            else if (count==5){
                cout<<endl<<"Klirothikan  oi 5 arithmoi apo tous 7 pou epexes!!! Kerdises : "<<xrhmata*20<<" euro";          
                }

            else if (count==6){
                cout<<endl<<"Klirothikan  oi 6 arithmoi apo tous 7 pou epexes!!! Kerdises : "<<xrhmata*100<<" euro";          
                }
                
            else if (count==7){
                cout<<endl<<"Klirothikan kai oi 7 arithmoi pou epexes!!! Kerdises : "<<xrhmata*5000<<" euro";             
            }
            
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }          
                
        break;
        
        case 8:
        
            if (count==4){
                cout<<endl<<"Klirothikan  oi 4 arithmoi apo tous 8 pou epexes!!! Kerdises : "<<xrhmata*2<<" euro";          
                }
                    
            else if (count==5){
                cout<<endl<<"Klirothikan  oi 5 arithmoi apo tous 8 pou epexes!!! Kerdises : "<<xrhmata*10<<" euro";          
                }

            else if (count==6){
                cout<<endl<<"Klirothikan  oi 6 arithmoi apo tous 8 pou epexes!!! Kerdises : "<<xrhmata*50<<" euro";          
                }
                
            else if (count==7){
                cout<<endl<<"Klirothikan  oi 7 arithmoi apo tous 8 pou epexes!!! Kerdises : "<<xrhmata*1000<<" euro";          
                }                
                
            else if (count==8){
                cout<<endl<<"Klirothikan kai oi 8 arithmoi pou epexes!!! Kerdises : "<<xrhmata*15000<<" euro";             
            }
            
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }          
                      
        break;
        
        case 9:
        
            if (count==4){
                cout<<endl<<"Klirothikan  oi 4 arithmoi apo tous 9 pou epexes!!! Kerdises : "<<xrhmata<<" euro";          
                }
                    
            else if (count==5){
                cout<<endl<<"Klirothikan  oi 5 arithmoi apo tous 9 pou epexes!!! Kerdises : "<<xrhmata*5<<" euro";          
                }

            else if (count==6){
                cout<<endl<<"Klirothikan  oi 6 arithmoi apo tous 9 pou epexes!!! Kerdises : "<<xrhmata*25<<" euro";          
                }
                
            else if (count==7){
                cout<<endl<<"Klirothikan  oi 7 arithmoi apo tous 9 pou epexes!!! Kerdises : "<<xrhmata*200<<" euro";          
                }      
                
            else if (count==8){
                cout<<endl<<"Klirothikan  oi 8 arithmoi apo tous 9 pou epexes!!! Kerdises : "<<xrhmata*4000<<" euro";          
                }  
                
            else if (count==9){
                cout<<endl<<"Klirothikan kai oi 9 arithmoi pou epexes!!! Kerdises : "<<xrhmata*40000<<" euro";             
            }
            
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }          
                      
        break;
        
        case 10:
        
            if (count==5){
                cout<<endl<<"Klirothikan  oi 5 arithmoi apo tous 10 pou epexes!!! Kerdises : "<<xrhmata*2<<" euro";          
                }

            else if (count==6){
                cout<<endl<<"Klirothikan  oi 6 arithmoi apo tous 10 pou epexes!!! Kerdises : "<<xrhmata*20<<" euro";          
                }
                
            else if (count==7){
                cout<<endl<<"Klirothikan  oi 7 arithmoi apo tous 10 pou epexes!!! Kerdises : "<<xrhmata*80<<" euro";          
                }      
                
            else if (count==8){
                cout<<endl<<"Klirothikan  oi 8 arithmoi apo tous 10 pou epexes!!! Kerdises : "<<xrhmata*500<<" euro";          
                }  
                
            else if (count==9){
                cout<<endl<<"Klirothikan  oi 9 arithmoi apo tous 10 pou epexes!!! Kerdises : "<<xrhmata*10000<<" euro";          
                }  
                
            else if (count==10){
                cout<<endl<<"Klirothikan kai oi 10 arithmoi pou epexes!!! Kerdises : "<<xrhmata*100000<<" euro";             
            }
            
            else if (count==0){
                cout<<endl<<"Den klirothike kanenas arithmos apo aftous pou epexes!!! Kerdises : "<<xrhmata*2<<" euro";          
                }  
                
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }     
        
        break;
        
        case 11:
        
            if (count==5){
                cout<<endl<<"Klirothikan  oi 5 arithmoi apo tous 11 pou epexes!!! Kerdises : "<<xrhmata<<" euro";          
                }

            else if (count==6){
                cout<<endl<<"Klirothikan  oi 6 arithmoi apo tous 11 pou epexes!!! Kerdises : "<<xrhmata*10<<" euro";          
                }
                
            else if (count==7){
                cout<<endl<<"Klirothikan  oi 7 arithmoi apo tous 11 pou epexes!!! Kerdises : "<<xrhmata*50<<" euro";          
                }      
                
            else if (count==8){
                cout<<endl<<"Klirothikan  oi 8 arithmoi apo tous 11 pou epexes!!! Kerdises : "<<xrhmata*250<<" euro";          
                }  
                
            else if (count==9){
                cout<<endl<<"Klirothikan  oi 9 arithmoi apo tous 11 pou epexes!!! Kerdises : "<<xrhmata*1500<<" euro";          
                }  
                
            else if (count==10){
                cout<<endl<<"Klirothikan  oi 10 arithmoi apo tous 11 pou epexes!!! Kerdises : "<<xrhmata*15000<<" euro";          
                }  
                
            else if (count==11){
                cout<<endl<<"Klirothikan kai oi 11 arithmoi pou epexes!!! Kerdises : "<<xrhmata*500000<<" euro";             
            }
            
            else if (count==0){
                cout<<endl<<"Den klirothike kanenas arithmos apo aftous pou epexes!!! Kerdises : "<<xrhmata*2<<" euro";          
                }  
                
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }     
                
        break;
        
        case 12:
        

            if (count==6){
                cout<<endl<<"Klirothikan  oi 6 arithmoi apo tous 12 pou epexes!!! Kerdises : "<<xrhmata*5<<" euro";          
                }
                
            else if (count==7){
                cout<<endl<<"Klirothikan  oi 7 arithmoi apo tous 12 pou epexes!!! Kerdises : "<<xrhmata*25<<" euro";          
                }      
                
            else if (count==8){
                cout<<endl<<"Klirothikan  oi 8 arithmoi apo tous 12 pou epexes!!! Kerdises : "<<xrhmata*150<<" euro";          
                }  
                
            else if (count==9){
                cout<<endl<<"Klirothikan  oi 9 arithmoi apo tous 12 pou epexes!!! Kerdises : "<<xrhmata*1000<<" euro";          
                }  
                
            else if (count==10){
                cout<<endl<<"Klirothikan  oi 10 arithmoi apo tous 12 pou epexes!!! Kerdises : "<<xrhmata*2500<<" euro";          
                }  
                
            else if (count==11){
                cout<<endl<<"Klirothikan  oi 11 arithmoi apo tous 12 pou epexes!!! Kerdises : "<<xrhmata*25000<<" euro";          
                }  
                
            else if (count==12){
                cout<<endl<<"Klirothikan kai oi 12 arithmoi pou epexes!!! Kerdises : "<<xrhmata*1000000<<" euro";             
            }
            
            else if (count==0){
                cout<<endl<<"Den klirothike kanenas arithmos apo aftous pou epexes!!! Kerdises : "<<xrhmata*4<<" euro";          
                }  
                
            else {
                cout<<endl<<"Den kerdizeis kati!!! Kalh tyxh thn epomenh fora!!!";
                }     
                
        
        break;
        
        default:   
        cout<<"Error while executing the program!!! Please contact to the publisher!!!";
    }

    
}
