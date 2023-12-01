#include <stdio.h>

// p.19 1-3-1
#define	Lower	0
#define Upper	300
#define Step	20

int temp(int fahr) {
	for (fahr = Lower; fahr < Upper; fahr = fahr + Step) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	return 0;
}

// p.23 1-5-1-1
int EOF_example(){
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	return 0;
}

// ex 1-7
int What_is_EOF(){
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
		printf("%d\n", EOF);
	}
	return 0;
}

// p.26 1-5-2-2
int Count_Char(){
	double nc;
	for (nc = 0; getchar()!=EOF; ++nc)
	;
	printf("%.0f\n", nc);
}

// ex 1-8
int Count_Tab_End(){
	int nTabEnd = 0;
	int nCheck;
	while((nCheck = getchar()) != EOF){
		if ((nCheck == '\n')||(nCheck == '\t')){
			nTabEnd++;
		}
	}
	printf("nTabEnd : %d\n", nTabEnd);
}

int main() {

	// temp(50);
	// EOF_example();
	// What_is_EOF();
	// Count_Char();
	Count_Tab_End();

	return 0;
}