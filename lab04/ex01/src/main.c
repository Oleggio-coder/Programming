int main(){

#define PI 3.14
const int R = 15; /*make the radius the constant*/
char command = 'S'; /*declare the command that will executed*/
float result; /*declare a variable for the result*/

switch (command){

case 'V':
result = (PI*R*R*R/3); /*formula for calculating a volume of the sphere*/
break;

case 'l':
result = (PI*R); /*formula for calculating a length of the circumference*/
break;

case 'S':
result = (PI*R*R); /*formula for calculating an area of the circle*/
break;

default:
break;

}

return 0;

}

