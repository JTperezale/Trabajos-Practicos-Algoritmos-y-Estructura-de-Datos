
int mayorde3 (int a, int b, int c)
{
	int maximo=0;
	if((a>=b)&&(a>=c))
	{
	maximo=a; 
	}
	if ((a<=b)&&(c<=b))
	{
	maximo=b;
	}
	if ((a<=c)&&(b<=c))
	{
	maximo =c;
	}
	return maximo;
		
}


int menorde3 (int a, int b, int c)
{
	int menor=0;
	if((a<=b)&&(a<=c))
	{
	menor=a; 
	}
	if ((b<=a)&&(b<=c))
	{
	menor=b;
	}
	if ((a>=c)&&(b>=c))
	{
	menor =c;
	}
	return menor;
		
}

float prom3 (int a, int b, int c)
{
	float resultado=0;
	resultado = (a+b+c)/3;
	return resultado;
}

int producto2(int a, int b)
	{
		int resultado=0;
		
		resultado =a*b;
		
		return resultado;
	}
	
int division2 (int a, int b)
	{
		int resultado=0;
		if (b!=0)
		{
		resultado=a/b;
		}
		
		return resultado;
	}

int sumar2 (int a, int b)
	{
		int resultado=0;
		
		resultado =a+b;
		
		return resultado;
	}
	
int restar2 (int a, int b)
	{
		int resultado=0;
		
		resultado =a-b;
		
		return resultado;
	}
	
