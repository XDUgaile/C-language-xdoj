double function(int n)
{
	double A;
	int i;
	
	for(i = 1, A = 1;i<n;i++){
		A = 1/(A+1);
	}
	return A;
} 
