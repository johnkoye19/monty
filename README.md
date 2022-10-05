# monty
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.  Monty byte code files  Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

After some study, I want to approach this problem(creating a Monty programming language interpreter):
	1. create c codes for the monty commands
	2. the codes should read each line of the monty file.
	3. if there is an error, print error memssage
	4. else, interprete accordingly
	5. tokenize the each line
	6. then execute the command 
