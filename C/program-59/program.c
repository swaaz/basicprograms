#include<stdio.h>
#include<string.h>

typedef struct student
{

  char name[25];
  char usn[15];
  float cgpa;
} S;
S s[70];


void search(char name[],int n)  
{

  int i,j;
  // printf("%s\n",name);
  for(i=0;i<n;i++)
  {
  if (strlen(name)==strlen(s[i].name))
  {
  for (j = 0; j < n; j++)
    {
      // printf("%s\n", s[i].name);
      if(name[j]=name[j]) printf("Name: %s\nUSN: %s\nCGPA: %f\n", s[i].name, s[i].usn,s[i].cgpa);
      break;
    }
  }
  }
}

int main ()
{
  int i,a,b, n;
  char name[10];
  
  printf ("*Enter student details**\n");
  printf ("Enter number of students\n");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      printf ("Enter name\n");
      scanf ("%s", s[i].name);
      printf ("Enter USN\n");
      scanf ("%s", s[i].usn);
      printf ("Enter CGPA\n");
      scanf ("%f",&s[i].cgpa);
    }
  for (i = 0; i < n; i++)
    {
      printf ("**Student details**\n");
      printf ("Name: %s\tUSN: %s\tCGPA: %f\n", s[i].name, s[i].usn, s[i].cgpa);
    }
  
  printf ("*Search by name*\n");
  printf ("enter the name\n");
  scanf ("%s", name);
  // printf("%s\n", name);
  // name = s[i].name;
  search(name,n);
    
}

