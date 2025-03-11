# **README.MD** 
## ***How to run***
- There is a main function ***Main.c*** file that runs the whole program. You can give the function a .txt filename and it will do the job with the input text.
- Unfortunately it can only read one line from the .txt, but it is easy to implement to read multiple lines. Since it was not declared in the task description, I decided to use this input format.
- The output of the program will be the ***result*** of the function bool smarttext_recognize(char *text).
    - If it was a plain text, ***0*** will be displayed on the console.
    - If it was not a regular text, then ***specific fucntion*** will be called and ***1*** will be ***1***.
 ## ***Basic Rules***
- output is true if
   - there are only 1/2/3 valid cards.
   - there is only 1 smily
   
- the output is false if
   - there are 4 valid cards
   - only 1 valid card and some text
   - only 1 smily and some text
   - one smily string is 1 or more than 4 characters long
   - if the given text is more than 12 characters long
   - if there is more than 1 space between smaler strings
   - ...
## ***How it works***
- In the ***main*** fucntion, call the ***myFileReader*** function. This function opens and processes the specified files in text format, so:    
    - will only read text 12 characters long, because a non-regular text is at most 11 characters long + '\0
    - If there is a problem with the file, it will exit with a wall shortcut.
    - First, it will remove the spaces at the beginning of the text.
    - Then it reads in the characters if they are not spaces or '\n'.
    - The myLen attribute counts the length of the smaller string.
    - The my_swich checks whether the character before the current character is a space or not.
      - if the program reads a space character and the size of myLen is 1, then the word is only 1 character long=> ragular text
    - spaceCounter counts the spaces. It checks if the text has up to 3 strings.
    - and at the end it gets rid of the remaining spaces in the text.
- Then strSeparater is called.
    - The strSeparater fucntion just separates the string into 1/2/3 smaller strings.
- The isTrue function gets the smaller string and decides whether it is a valid card or a valid smily.
  - if it is a valid card or a valid smily, it returns true.
  - If not, it returns false.
- At the end, smarttext_recognize:  
  - if it is a plaintext, then it does not call anything
  - if not, it calls the function. 
  