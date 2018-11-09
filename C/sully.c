#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#define OPEN(str) open(str,O_CREAT|O_WRONLY,0666)
#define WRITE(y,x,n) dprintf(y,x,10,10,10,10,10,10,34,34,10,34,34,10,34,34,10,10,n,34,34,10,10,9,10,10,34,x,34)
#define STR(s,n) sprintf(s,"Sully_%d.c",n)
#define SREP(srep,s,n) sprintf(srep,"clang -Wall -Wextra -Werror -o Sully_%d %s",n,s)
#define SEXEC(srep,s,n) sprintf(sexec,"./Sully_%d",n)
#define EXEC(str) system(str)
#define FT(x)int main(int ac,char **av){(void)ac;int n=5;if(strcmp(av[0],"./Sully")!=0)n--;char s[10];STR(s,n);WRITE(OPEN(s),x,n);char srep[50];SREP(srep,s,n);EXEC(srep);if(n>0){char sexec[10];SEXEC(sexec,s,n);EXEC(sexec);}}
/*
	comment
*/
FT("#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c#include <string.h>%c#define OPEN(str) open(str,O_CREAT|O_WRONLY,0666)%c#define WRITE(y,x,n) dprintf(y,x,10,10,10,10,10,10,34,34,10,34,34,10,34,34,10,10,n,34,34,10,10,9,10,10,34,x,34)%c#define STR(s,n) sprintf(s,%cSully_%%d.c%c,n)%c#define SREP(srep,s,n) sprintf(srep,%cclang -Wall -Wextra -Werror -o Sully_%%d %%s%c,n,s)%c#define SEXEC(srep,s,n) sprintf(sexec,%c./Sully_%%d%c,n)%c#define EXEC(str) system(str)%c#define FT(x)int main(int ac,char **av){(void)ac;int n=%d;if(strcmp(av[0],%c./Sully%c)!=0)n--;char s[10];STR(s,n);WRITE(OPEN(s),x,n);char srep[50];SREP(srep,s,n);EXEC(srep);if(n>0){char sexec[10];SEXEC(sexec,s,n);EXEC(sexec);}}%c/*%c%ccomment%c*/%cFT(%c%s%c)")