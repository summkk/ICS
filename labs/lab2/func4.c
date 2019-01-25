func4(int ecx,int eax,int ebx)
{
	int edx;
	edx = eax + (ebx - eax)/2;
	if(edx > ecx)
		return 2*func4(ecx,eax,edx-1);
	eax = 0;
	if(edx < ecx)
		return 2*func4(ecx,edx+1,eax);
	else
		return eax
}