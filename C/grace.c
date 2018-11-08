#include <stdio.h>
#include <fcntl.h>
#define WRITE(y,x) dprintf(y,x,10,10,10,34,34,10,10,10,9,10,10,34,x,34)
#define OPEN() open("Grace_kid.c", O_CREAT | O_WRONLY, 0666)
#define RUN(x)int main(){WRITE(OPEN(),x);}
/*
	comment
*/
RUN("#include <stdio.h>%c#include <fcntl.h>%c#define WRITE(y,x) dprintf(y,x,10,10,10,34,34,10,10,10,9,10,10,34,x,34)%c#define OPEN() open(%cGrace_kid.c%c, O_CREAT | O_WRONLY, 0666)%c#define RUN(x)int main(){WRITE(OPEN(),x);}%c/*%c%ccomment%c*/%cRUN(%c%s%c)")