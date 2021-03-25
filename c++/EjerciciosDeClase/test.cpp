//N° cuenta: 20201001034
#include <cstdio>

int main() {
    int a,b,c;
	printf("Ingrese 3 numeros separados por un espacio\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a%b==0 && a%c==0) {
        printf("si, %d", a);
    } else if (b%a==0 && b%c==0) {
		printf("si, %d", b);
    } else if (c%a==0 && c%b==0) {
        printf("si, %d", c);
    } else {
		printf("No");
    }
    return 0;
}




























/*
int a,b,c;
cout << "Ingrese el numero a [#,#,#]";
cin >> a;
cout << "Ingrese el numero b [" << a << ",#,#]";
cin >> b;
cout << "Ingrese el numero c ["<< a <<","<< b <<",#]";
cin >> c;
if (a % b ==0 && a % c ==0) {
cout << "si, " << a;
} else if (b % a ==0 && b % c ==0) {
cout << "si, " << b;
} else if (c % a ==0 && c % b ==0) {
cout << "si, " << c;
} else {
cout << "No";
}
*/
