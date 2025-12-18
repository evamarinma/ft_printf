*This proyect has been created as part of the 42 curriculum by emarin-m.*
# FT_PRINTF()

## :pushpin: Yes, it's a printf()

### :open_book: Introduction
Next in my 42 journey is `ft_printf`. On this project I learnt how to work with *variadic functions*.

> [!TIP]
> Feel free to search how **'va_start'**, **'va_arg'** and **'va_end'** work.*
We use `printf()` everyday, but did you know how it actually works? Take a look through this code!


> [!WARNING]
> *If you're a 42 student: 42 projects must be CODED by yourself. Do not copy this project into yours. You will learn nothing by doing that. Exams are completed without Internet connection; you're alone with your IDE. The porpuse of these repositories is to show what we do at 42 and, yes, if you're stucked at some point, learn something new, but give peer-to-peer a chance first* 😉.


### :open_file_folder: Makefile
Here are some commands available to compile the code for this project.
```bash
# Compile whole project
make

# Erase .o files
make clean

# Erase .o files and executable
make fclean

# Re-compiles project
make re
```

### :paperclip: User instructions

1. Clone this repository on your computer:
```
git clone git@github.com:evamarinma/ft_printf.git
```

<br>

2. Use **'make'** command to compile the code.
<br>

3. Copy the .a and .h files into the proyect folder where you want to use ft_printf.
<br>

4. Compile your code as in this example:
```bash
cc <.c_files> -L. -lftprintf -o <your_program>
```
<br>

5. You can also uncomment the main function included in `ft_printf.c` and compile and execute with:
```bash
cc *.c -o ft_printf && ./ft_printf
```
<br>

### :point_up::nerd_face: Tips
* Don't know what a certain parameter does? Feeling curious about a library used by your function? Internet is wide, look for it!
* Can't you find some information on blogs? Ask your favourite AI about it! Use it as a searching index! **DO NOT** ask them to do your job, but take advantage and use it as an ally to learn deeper! *Keep in mind AI might be wrong about somethings, contrast their info with blogs/posts/etc*