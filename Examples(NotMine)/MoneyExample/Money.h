class Money
{
  private:
  	long all_cents;
  public:
  	Money();
	Money(long dollars);
	Money(long dollars, int cents);
	double get_value();
	void input(); //readMoney()
	void output();   		  //printMoney()
	bool equal_memberfunction(Money m1); // sinartisi melos ths klasis Money
	friend bool equal_friendfunction(Money m1, Money m2);// sinartisi FRIEND (filiki)	
	friend Money add (Money m1, Money m2);
};


