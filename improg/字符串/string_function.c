复制字符串 从 soure 到 destination

char* strcpy(char* destination, const char* source);

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10]= "awesome";
    char str2[10];
    char str3[10];

    strcpy(str2, str1);
    strcpy(str3, "well");
    puts(str2);
    puts(str3);

    return 0;
}

/*
awesome
well
*/

---------------------------------------------------------
strcmp()比较两个字符串的size

int strcmp (const char* str1, const char* str2);

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}

/*
strcmp(str1, str2) = 32
strcmp(str1, str3) = 0
*/

返回：
0: 两串字符串 长度相同
negative： 第二个字符串长
positve： 第一个长

-----------------------------------------------------------
链接两个字符串

char *strcat(char *dest, const char *src)

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "This is ", str2[] = "programiz.com";

    //concatenates str1 and str2 and resultant string is stored in str1.
    strcat(str1,str2);

    puts(str1);    
    puts(str2); 

    return 0;
}

/*
This is programiz.com
programiz.com
*/
-------------------------------------------------------
求字符串长度

#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    printf("Length of string a = %ld \n",strlen(a));
    printf("Length of string b = %ld \n",strlen(b));

    return 0;
}

/*

Length of string a = 7
Length of string b = 7
*/
-------------------------------------------------
strdup()  创建一个新内存 储存 string


#include<stdio.h> 
#include<string.h> 

int main() 
{ 
	char source[] = "GeeksForGeeks"; 
 
	char* target = strdup(source); 

	printf("%s", target); 
	return 0; 
} 

//GeeksForGeeks

----------------------------------------------------
strndup 只能 复制到 n bytes

// C program to demonstrate strndup() 
#include<stdio.h> 
#include<string.h> 

int main() 
{ 
	char source[] = "GeeksForGeeks"; 

	char* target = strndup(source, 5);  // 只能创建 5 bytes 的动态内存

	printf("%s", target); 
	return 0; 
} 

/*
Geeks
*/



