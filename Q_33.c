
#include <string.h>
 
typedef struct one
{
	int x;
	int y;
} point; 
	point top = {2,15};
struct two 
{ 
	int a;
	int b;
}blunt;
 
int main ()
{
        point one;
        blunt two;
	memcpy(two, one, sizeof(one));
return 0;
}
