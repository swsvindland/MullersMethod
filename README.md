# Mullers Method

## Author
Sam Svindland

## How to use

### Running
By default the program will output the x-itercept of the function f(x) = x^2 - 2
This can be changed by moddifying main.cpp
Change the return value of f to whatever
<br/>
Do note that complex root, while you won't recieve an error and mullers method supports them, are not correct. 
This is more a c++ limitation as it does not support complex numbers by default and are added through external libraries. My goal for this project is to rely on only iostream so I would need to create my own complex number struct and overload each function in the case of complex roots. 

### Build Custom Binaries
``` $ make ```

### Run Custom Binaries
``` $ ./proj```

## Known Bugs
Memory Leak at muller.cpp - line 10

## ToDo
Add complex number support

## Sources
https://en.wikipedia.org/wiki/Muller%27s_method <br/>
https://en.wikipedia.org/wiki/Divided_differences <br/>
https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method <br/>
