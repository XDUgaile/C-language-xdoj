double function(int n)
{
	double A = 1;
	int i;
	
	for(i=1;i<n;i++)
	{
		A = 1/(1+A);
	 } 
	return A;
}
