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

bool czy_pierwsza(int n){
	for(int i = 2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	printf("Liczby pierwsze Mersenne'a nie wieksze niz 2^20:\n");
	for(int i =2;i<=20;i++){
		if(czy_pierwsza(i)&&czy_pierwsza(power(2,i)-1)){
			printf("%d\n",power(2,i)-1);
		}
	}
	return 0;
}
