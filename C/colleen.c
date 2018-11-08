#include <stdio.h>
/*
	comment
*/
void useless_func(){}
int main(){
/*
	comment
*/
useless_func();
char *s="#include <stdio.h>%c/*%c%ccomment%c*/%cvoid useless_func(){}%cint main(){%c/*%c%ccomment%c*/%cuseless_func();%cchar *s=%c%s%c;%cprintf(s,10,10,9,10,10,10,10,10,9,10,10,34,s,34,10);}";
printf(s,10,10,9,10,10,10,10,10,9,10,10,10,34,s,34,10);}