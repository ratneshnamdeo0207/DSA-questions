//https://www.naukri.com/code360/problems/modular-exponentiation_1082146?leftPanelTabValue=PROBLEM
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int r = 1;
	while(n > 0)
	{
		
		if(n & 1)
			r = (1LL *(r) * (x)%m)%m;
		
		x = (1LL *(x)%m * (x)%m)%m;
		n = n >> 1;
	}
	return r;
}
