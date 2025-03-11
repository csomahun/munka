# **README.MD** 
## ***How to run***
- There is a main function ***Main.c*** file, wich runs the whole program. You can give a .txt file name to the function and will do the task on the input text.
- Unfortunately it can only read one line from the .txt but it can be easily implement, to read more lines. Because it was not declared in the task description, so I decided by this input form.
- The output of the program will be the ***result*** of the bool smarttext_recognize(char *text) function.
    - if it was a regular text,than ***0*** will be shown on the consol
    - if it was not a regular text, than the ***specifed fucntion*** will be called and a ***1***
 ## ***Ground rules***
- the output is true, if
   -  there is only 1/2/3 valid cards
   -  there is only 1 smily
   
-  the output is false, if
   - there is 4 valid cards
   - there is only 1 valid card and some text
   - there is only 1 smily  and some text
   - one of the smaler string is 1 or more than 4 character long
   - if the given text is more than 12 character long
   - if there is more than 1 spaces between smaler strings
   - ...
## ***How does it works***
-  In the ***main*** fucntion the ***myFileReader*** function will be called. This function opens and processes the given files text format like this:    
    -  it will read only a 12 character long text, because a not regular text is maximum 11 char long + '\0
    -  if there was a problem with the file, than exits with a faliur
    -  First of all it gets rid of the spaces at the beginning of the text
    -  Tahn it reads the characters if its not a space or a '\n'.
    -  The myLen atribut count the lenght of the smaler string
    -  my_swich checks if the char before the curentrly char is a space or not
      - if the the program reads a space char and the size of the  myLenis 1 thant the word is only 1 char long=> ragular text
    - the spaceCounter counts the spaces. It checks if there is maximum 3 strings int the text
    -  and at the end gets rid of the remaining spaces of the text
-  Than the strSeparater will be called
    - strSeparater fucntion just separate the string to 1/2/3 smaler strings
- than the isTrue function gets a smaler string and decides if its  valid card or valid smily
  - if its a valid card or valid smily than it gives back a "true"
  - if its not than a "false"
- And at the end the  smarttext_recognize:  
  - if its a regular text calles nothing
  - if its not than calles the given funtion 
