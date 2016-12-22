class die{
		
	public:
		die(); //Default ctor
		die(int Sides);
		int roll();
		int getValue();
		int getNumsides();
	
	protected:
	int value_;
	int sides_;
	
};
