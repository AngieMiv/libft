#include <ctype.h>
#include <stdio.h>

int	main (){
	int c = 43;
	int n  = 1234;
	printf("%d\n si es ascii", isascii(c));
	printf("%d\n no es ascii", isascii(n));
}
