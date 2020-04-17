#include <bits/stdc++.h> 
using namespace std; 


void reverseStr(string& str) 
{ 
	int n = str.length(); 

	for (int i = 0; i < n / 2; i++) 
		swap(str[i], str[n - i - 1]); 
} 

int main() 
{ 
	string str = "geeksforgeeks"; 
	reverseStr(str); 
	cout << str; 
	return 0; 
} 

-----------------------------------
#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];

   printf("Enter a string to reverse\n");
   gets(s);

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}
