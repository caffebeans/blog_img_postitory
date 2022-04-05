#include <stdio.h>

void show_n_char(char,int);

int main(int argc, char *argv[]) {

show_n_char('*', 40);


}
// 打印多个字符
void show_n_char(char ch,int num){
	int count;
	for(count = 1; count <= num; count++)
		putchar(ch);
}


