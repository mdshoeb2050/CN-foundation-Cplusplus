#include<stdio.h>
#include<string.h>

void main()
{
	struct student
	{
		char name[100];
		int roll,percentage;
	}; 
	 struct student s[10];
     int i,n;
     
     s[0].name[100]= 'Nishant Pandey';
     fflush(stdin);
     s[1].name[100]= "Subh Mangalam";
     fflush(stdin);
     s[2].name[100]= "Nitin Maurya";
     fflush(stdin);
     s[3].name[100]= "Satendra Singh";
     fflush(stdin);
     s[4].name[100]= "Utsav Divedi";
     fflush(stdin);
     s[5].name[100]= "yash Tripathi";
     fflush(stdin);
     s[6].name[100]= "Shikhar Srivastav";
     fflush(stdin);
     s[7].name[100]= "Shubham Maurya";
     fflush(stdin);
     s[8].name[100]= "Satyam Verma";
     fflush(stdin);
     s[9].name[100]= 'S','a','t','y','a','m','M','a','u','r','y','a';
    
    
	
     s[0].roll=1;
     s[1].roll=2;
     s[2].roll=3;
     s[3].roll=4;
     s[4].roll=5;
     s[5].roll=6;
     s[6].roll=7;
     s[7].roll=8;
     s[8].roll=9;
     s[9].roll=10;
     
     
     
     s[0].percentage=87;
     s[1].percentage=57;
     s[2].percentage=89;
     s[3].percentage=90;
     s[4].percentage=54;
     s[5].percentage=78;
     s[6].percentage=84;
     s[7].percentage=71;
     s[8].percentage=85;
     s[9].percentage=74;
     
     int i=0;

        while(i<9)
        {     
            printf("ENTER ROLL NO. TO FIND DETAILS OF STUDENT - ");
            scanf("%d",&n);
            for(i=0;i<10;i++)
            {
                if( s[i].roll==n)
                {
                       printf("name = ");
                    // printf("%s\n",s[i].name);
                      puts(s[i].name);
                    // puts(s[i].name[100]);
                    printf("roll no = %d \n percentage= %d ", s[i].roll, s[i].percentage);
                     printf("%c\n",'%');
                }
            }
            i++;
        }

}