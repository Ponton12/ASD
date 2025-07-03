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
bool czy_doskonala_Euklidesa(int n){
	int a = power(2,n)-1;
	for(int j = 2;j*j<=a;j++){
		if(a%j==0){
			return false;	
		}
	}
	return true;
}

int main() {
	printf("Parzyste liczby doskonale nie wieksze niz 10^9:\n");
	for(int i = 1;((power(2,i)-1)*power(2,i-1)) <= 1000000000;i++){
		if(czy_doskonala_Euklidesa(i)){
			printf("%d\n",((power(2,i)-1)*power(2,i-1)));
		}
	}
	return 0;
}
