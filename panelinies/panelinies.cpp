#include <iostream>
using namespace std;
int main (){
	
	int StudID,TotalGrade;
	double GradeLang,GradeMath,GradeEcon,GradeInfo;
	cout<<("Dwse arithmo mhtroou: ");
	cin>>StudID;
	printf("Dwse bathmologia sthn glossa: ");
	cin>> GradeLang;
	printf("Dwse bathmologia sta mathimatika: ");
	cin>>GradeMath;
	printf("Dwse bathmologia sto aoth: ");
	cin>>GradeEcon;
	printf("Dwse bathmologia pliroforikhs: ");
	cin>>GradeInfo;
	TotalGrade=GradeLang*200+GradeMath*330+GradeEcon*200+GradeInfo*270;
	int Base1, Base2, Base3, Base4,Base5;
	Base1=3*1654+StudID;
	Base2=3*1630+StudID;
	Base3=3*1603+StudID;
	Base4=3*1554+StudID;
	Base5=3*1548+StudID;
	cout<<("o mathitis me arithmo mitrou ")<<StudID<<" petixe "<<TotalGrade<<" moria, me vash ta opoia mporei na eisaxthi sto tmhma : "<<endl;	

	if (TotalGrade>=Base1)  cout<<("me kodiko : 1654 pou exei vash eisagoghs")<<Base1<<endl;
	if (TotalGrade>=Base2)  cout<<("me kodiko : 1630 pou exei vash eisagoghs")<<Base2<<endl;
	if (TotalGrade>=Base3)  cout<<("me kodiko : 1603 pou exei vash eisagoghs")<<Base3<<endl;
	if (TotalGrade>=Base4)  cout<<("me kodiko : 1554 pou exei vash eisagoghs")<<Base4<<endl;
	if (TotalGrade>=Base5)  cout<<("me kodiko : 1548 pou exei vash eisagoghs")<<Base5<<endl;
	if (TotalGrade<Base1&&TotalGrade<Base2&&TotalGrade<Base3&&TotalGrade<Base4&&TotalGrade<Base5) cout<<("den eisagete se kanena apo ta 5 tmhmata");
	
	

	return 0;
}
