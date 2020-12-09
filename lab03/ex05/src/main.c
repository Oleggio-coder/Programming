int main(){

int num = 832;
float result;
float a;
float b;

a = (num/100)%10;
b = num%10;
result = a/b*100;

result /= 100; /*leave two digits after the dot*/

return 0;
}

