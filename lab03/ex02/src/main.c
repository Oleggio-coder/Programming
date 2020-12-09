int main(){
int num = 529; /*number*/
int a; /*units*/
int b; /*dozens*/
int c; /*hundreds*/
int result;

a = num%10;
b = (num/10)%10;
c = (num/100)%10;
result = a*100+b*10+c; /*number in reverse order*/
return 0;
}
