> NOTE :

Bnisba l **Pull requests** jem3o Syntax f txt 1 or diro dossier b your name w westo 7etto txt file L kol 7aja (conditions .. loops ..etc)


> Idea Dyal Jamal


** NAME of language =  Aliens Programming language (ALS) **


3taber Programming logic li 3arfino w dima kyt3awd b7al chi space(fada2)
w KHARAJLINA HAD L3JB hhhh lmohim , I realy realy like it !
I think hadi ghadi t attirer l'attention dyal lCommunity , psq it's a fresh idea
dik lmain w classes ..etc dima tab3ina so why not change logic kamlo  !


```
                    [Space]
                    (main)
                  ____|____
                 |         |
            [Galaxies]    ....
            (Libraries)
         _______|_______
        |               |
    [Planets]      [IPlanets]
    (classes)     (Interfaces)
       |________________|
             |
     Functions Protos
         Methods
        Attributes
       Constructors
           etc..
			
```
   
   

   
> Donc :


MAIN / ENTRY PT 			= Space

IMPORTED MODULES/Libraries 	= Galaxies

- OOP :
	
		+ CLASS      = Planet
		+ INTERFACE  = IPlanet
		+ FUNCTIONS  = def




> Des exmpl de syntaxes 


**+++++++++++++++++ CLASS in ALS +++++++++++++++++**

```
Planet Person:
	Name 	= 	"Saad"
	Prenon 	=	"Jamal"

	// Funcs - Procedures
	def ToString():
		...
		...
		...	
```

**+++++++++++++++++ CONDITIONS in ALS +++++++++++++++++**
		
	if (condition 1) 	// this is if 
		....
		....
		....
	: (condition 2)		// this is elseif
		....
		....
		....
	: (condition 3)		// also elseif
		....
		....
		....
	:					// else
		....
		....
		....
	

**+++++++++++++++++ LOOPS in ALS +++++++++++++++++**

	- while
	- for			<-- Done
	- foreach		<-- Done
	- do while
	
	// khas ykon 1 of these (chi Type li possible to loop on)
	_array = [1,2,3,4]
	_array = "string"
	_array = {1:[1,2,3] , ...}
	_array = (1,2,3,4)
	
	
	// 1 parameter = bghina ghi name dyal item mn _array
	
	_array.Loop(item):
		print(item)
		
		
	// 2 parameter = bghina name dyal item + index dyal item mn _array
	// index by default ghaybda incrementé donc ,n 0 -> len dyal _array
	
	_array.Loop(e,item):
		print( e + " => " + item)


	// 2 parameter avec signe f 'e' = bghina name dyal item + index dyal item mn _array
	// w signed parameter ghay kon soit '+' soit '-'  
	//(+e => INDEX incrementé) / (-e => Index decrementé mn len(_array) => 0 )
	// dar chi haja akhra ghan3tabroha hiya '+'
	
	_array.Loop(-e,item):
		print( e + " => " + item)







