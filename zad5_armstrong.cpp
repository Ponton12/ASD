#include <iostream>

int power(int base, int index){
	int wykladnik = index;
	int a = 1;
	int podstawa = base;
	while(wykladnik!=0){
		if(wykladnik%2==0){
			wykladnik=wykladnik/2;
			podstawa = podstawa * podstawa;
		}
		else{
			wykladnik=wykladnik-1;
			a = a *podstawa;
		}
	}
	return a;
}

void narcystyczne(int x){
	int a = x;
	int b = x;
	int licznik = 0;
	while(a>0){
		a = a/10;
		licznik++;
	}
	while(b>0){
		a =a +power(b%10,licznik);
		b=b/10;
		if(a>x){
			break;
		}
	}
	if(a ==x){
		printf("%d jest %d-cyfrowa liczba Armstronga\n",x,licznik);
	}
}

int main(){
	for(int i =100;i<=999999999;i++){
		narcystyczne(i);
	}
}
