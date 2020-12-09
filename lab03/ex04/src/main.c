int main(){

int p = 8; /*numeral system*/
int nump = 1234; /*number represented in the numeral system 'p'*/
int numd; /*result in the decimal numeral system*/

numd = (nump%10)+((nump/10)%10)*p+((nump/100)%10)*p*p+((nump/1000)%10)*p*p*p; 

return 0;
}

