              ***LOOP***

:- it is a specific task which repeats again and again is called a loop


	2-Types of Loops
	
	1) Entry Control Loop :- for(), while()
	2) Exit Control Loop :- do while()


   - 3 important facts in loop.

    (1)initialization
    (2)condition
    (3)updation

------------------(1) for loop----------------

  - there is all in one line 

  syntax  :-

      for (initialization;condition;updation)

        {

               statement;

        }
        
        
    void main()
	{
		int i;
		
		for(i=1;i<=10;i++)
		{
			printf("%d\n",i);		
		}
	}
	
	
------------------(2) while loop--------------

   -it is called an entry controlled loop.

:- because the condition is checked first and
then the body is executed.


    *  no semi colon after while 
    *  if condition is false ,then loop will stop.

  syntax:=

           initialization;

            while(condition)
         {
             statement;
             updation;
          }
          
          
    int i=0;
	
	while(i<3){
		printf("Hello World \n");
		i++;
	}	


------------------(3)do whille loop-----------

     -it is called as exit controlled loop.
     -beacause the condition is checked at last
     -it executes the do block at least once,even if the condition is false.

    * semi colon after while condition 

syntax :-

        initialization;

         do
           {

                  statement;

                  updation;

            }
             while(condition);
             
    
    int i=0;
	
	do{
		printf("Hello World \n");
		i++;
	}while(i<3);
