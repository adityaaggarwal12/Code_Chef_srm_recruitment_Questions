# Task 1  
## Error finding  
### **Q1**  
#include <stdio.h>  
int main()  
{  
int number, LD;  
printf(" Enter a number"4589);  
scanf("%d", &number);  
LD = number / 10;  
printf(" \n The Last Digit of a Given Number %d = %d", number, LD);  
return 0;  
}  
### **Errors-**  
•	in line 5 – 4589 should be deleted  
•	in line 7 ‘%’ should be used in place of ‘/’ for printing last digit.  

### **Q2**  
int sumcal(int len, int* arr, int value)
{  
int sum = 0;  
for(int i =0 ; i< len-1; i++ )  
{  
if(arr[i]%value == 0)  
sum =+ arr[i];  
}  
return sum;  
}  
  
### **No Error**   

### **Q3**  
#include <stdio.h>  
int main()  
{  
for(int i=1;i <= 4;i--)  
{  
for(int j=1;j <= 4; j++)  
{  
if(i != j)  
{  
printf("*");  
}  
else  
{  
printf(" ");  
}  
}  
printf("\n");  
}  
return 0;  
}  
### **Errors**-  
•	in 4th line use i++ in place of i—-   


### **Q4**  
#include <stdio.h>  
void main() {   
char a='A';  
a>10?printf("Yes");:printf("No");  
return 0;  
}  
### **Errors**-  
•	remove ‘;’ after (“Yes”) from line 4  
•	remove 0 after return in line 5  

### **Q5**
#include <iostream>  
using namespace std;  
int main() {  
int o; i; s;  
for(o=5; o>=1; o--)  
{  
for(s=1 s<=5-o s++)  
cout<<" ";  
for (i=1 i<=o i++){  
cout>>"*";}  
cout<<endl;  
}}}  
### **Errors**-  
•	 line 4  should be - int o,i,s;   
•	In line 6 ‘{’ is missing after for loop  
•	In line 7 and 9 ‘; ’ missing after s=1,s<=5-o and i=1,i<=o   
•	Return 0; missing at end  
•	Line 10 << should be used in place of >>   
  
  
### **Q6**  
z=int(“Enter a number:”)  
for in range [0,9]:  
if z=x:  
print(“They are equal”);  
else:  
print(“They are not equal”)  
  
### **Errors**-  
•	Line 1should be -> z=int(input(‘enter a number:’))  
•	Line 2 ‘x’ missing after ‘for’ .  
•	Line 3 indent before ‘if’ and z==x  
•	Line 4 – two indent before print and test shound be in single quotes in print  
•	Line 5 indent before else:  
•	Line 6 two indent before print and test shound be in single quotes in print  
  
### **Q7**  
#include <iostream>  
class test{  
int my_variable;  
}  
int main() {  
test code_chef;  
cin>>code_chef.my_variable;  
if(code_chef.my_variable%2==0){  
cout<<"Even";  
}  
else{  
cout<<odd;  
}  
return 0;  
}  
### Errors-  
•	Using namespace std; missing  
•	Line2- ‘t’ in “test” should be uppercase  
•	; missing after } in line 4  
•	my_variable is private(default) so line 7 and 8 will show error as my_variable is inaccessible outside of class test  
•	in line 12 odd should be inside  “ ’’  
  
### **Q8**  
#include<iostream>  
using namespace std  
void printSums(int N)  
{  
int start=1, end=(N+1)/2;  
while (start<end)  
{  
int sum=0;  
for (int i=start;i<=end;i++)  
{  
sum=+i;  
if (sum == N)  
{  
for (j=start,j<=I,j++)  
cout<<j<<" ";  
cout<<"/n";  
break;  
}   
if (sum>N)  
break  
}  
sum=0;  
start++;  
}  
}  
int main()  
{  
int n;   
cin>>n;  
printsums(n);   
return 0;   
}    
### Errors-    
•	; missing in line 2 after std    
•	In line 10 - += should be used in place of =+    
•	Int line14- j and I undefined and ‘;’ in place of ‘,’    
•	Line 20- ; missing after break    
•	Line 30- use printSums in place if printsums   
•	Line16- \n in place of/n   
  
  
### **Q9**  
#include <iostream>  
using namespace std;  
int main() {  
int length  
cout<<enter the length of the array"<<endl;  
cin>>length;  
int array(length];     
for(int i=0;i<length;i++){  
cin>>array[i];  
}  
int min=array[0];max=array[0];  
for(int i=1;i<length;i++){  
if(array[i]>max)  
max = array[i];  
else if(array[i]<<min)  
min = array[i];  
}  
cout<< min<<" "<<max;  
return std;  
}  
  
  
### Errors- 
•	; missing in line 4  
•	Line 5-“ missing before “enter”  
•	Line 7- ‘ [ ‘in place of ‘(‘ i.e. int array[length]  
•	Line 11-‘,’ in place of ‘;’ after array[0]  
•	Line 15- array[i]<<min—only one < is needed  
•	Return 0; instead of return std; in line19  
                                      
                                      
### **Q10**  
#include <stdio.h>  
*include <string.h>  
main()  
{  
int t,i,diff_count;  
scanf("%d";&t)  
char s[100001],  
while(t+-){  
diff_count=0;  
scanf("%s",s);   
for(int i=0;i<strlen(s)-1;i++){    
if(s[i]===s[i+1])   
    
diff_count++;  
}    
printf("%d\n",diff_count);    
return 0;    
}   
### Errors-    
•	Line 2 -# instead of *    
•	Line 3 -  int missing before main    
•	Line 6- ; missing at end and ‘,’ instead of  ‘;’ after ”%d”    
•	Line 7 ‘;’ missing    
•	Line 8 t—insteadof t+-   
•	Line 12 one = extra   
•	‘}’ missing atend of line 16 for closing while(t--) loop   
