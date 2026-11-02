#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

void test(void);
void strmerge(const char s1[], const char s2[], char s3[]);

int main(void)
{
   test();
   return EXIT_SUCCESS;
}

#define LARGESTRING 1000
void test(void)
{

   char s[LARGESTRING];

   strmerge("Hello World!", "World! & Everyone.", s);
   assert(strcmp(s, "Hello World! & Everyone.")==0);

   strmerge("The cat sat", "sat on the mat.", s);
   assert(strcmp(s, "The cat sat on the mat.")==0);

   strmerge("The cat sat on the mat", "The cat sat on the mat.", s);
   assert(strcmp(s, "The cat sat on the mat.")==0);

   strmerge("One ", "Two", s);
   assert(strcmp(s, "One Two")==0);

   strmerge("", "The cat sat on the mat.", s);
   assert(strcmp(s, "The cat sat on the mat.")==0);

   strmerge("The cat sat on the mat.", "", s);
   assert(strcmp(s, "The cat sat on the mat.")==0);

   strmerge("123412341234", "1234", s);
   assert(strcmp(s, "123412341234")==0);

   strmerge("samsams", "samsabc", s);
   assert(strcmp(s, "samsamsabc")==0);

   strmerge("sasasas", "sasbsms", s);
   assert(strcmp(s, "sasasasbsms")==0);

   // Add any additional tests here 

}

void strmerge(const char s1[], const char s2[], char s3[])
{
   int l1 = strlen(s1);
   int l2 = strlen(s2);
   int n1 = 0;
   int n2 = 0;
   int i = 0;
   while(n1 < l1)
   {
    if(s1[n1] == s2[n2])
    {
      n1++;
      n2++;
    }
    else if(s1[n1] != s2[n2])
    {
      i++;
      n1 = i;
      n2 = 0;
    }
   }
   strcpy(s3, s1);
   strcat(s3, s2 + n2);
}

