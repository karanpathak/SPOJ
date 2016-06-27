#include <stdio.h>

int main(void) {
long long t,val,temp;
char c,sym;

scanf("%lld",&t);

while(t--)
{ 
	val=0;
	
	c=getchar();
	c=getchar();
	c=getchar();
    
	// taking the first no. 
	while((c>='0' && c<='9' && c!= '=')||(c==' '))
	{
		if(c!=' '){val=val*10+c-'0';}
		c=getchar();
	}
	
	while(c!= '=')
	{
		if(c=='/' || c=='-' || c=='+' || c=='*')
		{ 
		  temp=0;
	      sym=c;
		  c=getchar();
			//after 
			while((c>='0' && c<='9' && c!='=')||(c==' '))
			{
				if(c!=' ')temp=temp*10+c-'0';
				c=getchar();
			}
		}
		
	
		switch(sym)
		{
			case '/': val=val/temp;break;
			case '+': val+=temp;break;
			case '-': val-=temp;break;
			case '*': val*=temp;break;
			default :break;
		}
	
	}
	
    printf("%lld\n",val);
}
	return 0;
}
