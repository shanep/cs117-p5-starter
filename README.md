# Project 5 - Final Project

In this assignment, you will write your own class and then use that class to
load in data from a text file. You are given the header file and must implement
all methods on that file and then write code to use your custom class.

## Important Links

- Review the [grading rubric](https://shanepanter.com/cs452/grading-rubric.html)

## Objectives

- Creating classes
- Using multiple files (declaration files [header files] and definition/implementation files [source files])
- Implementing class methods
- Read data from text file using streams

## Task 1 - Generate Build Files

There are two scripts in the root directory named `clean.sh` and `release.sh`.
One creates a release build to compile your project and the other will delete
all the temporary files that are created during the build process.

Run the `release.sh` script from the terminal to setup your project. Note
that your output will be slightly different than what is shown below because
cmake configures the build system specific to the system that it is running on.

```bash
shane|(master *%=):solution$ ./release.sh
-- The CXX compiler identification is AppleClang 14.0.3.14030022
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /Library/Developer/CommandLineTools/usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: ...
```

## Task 2 - Write your class

You are given a header file named `Robot.h`, you are not allowed to change this
file. You will implement the Robot class in the file `Robot.cpp`. The Robot
will have 3 private data members as detailed below.

- m_name - the name of the Robot
- m_os - the os that the Robot runs
- m_sensors - a vector of sensors that the robot has

Each Robot can only have a maximum of 5 sensors. When a 6th sensor is added
your code should print an error (but not crash).

## Task 3 - Reading in data

Once you have completed the Robot class you will need to write code that will
load a list of Robots from a text file. In your repository you have been given
an example text file that contains a list of Robots with all their data. You
will need to read in the file as a vector of Robot objects.

Each line int the text file will be formatted as follows:

- first word - robot name
- second word - robot os
- the rest - sensors

Once you have read in the text file and created a vector of Robots you will use
this vector to generate the following statistics on the collection of robots.

- How many Robots are there for each OS?
  - OS choices are: linux, win, mac
- What is the average number of sensors?
- How many Robots attempted to add more than 5 sensors?

Your program must accept a command line argument that is the relative path to
the text file to load.

HINTS:

- Reference Chapter 7 for details on how to implement a Class
- Reference Chapter 6 for details on how to use Vectors
- Section 8.6 of the textbook shows you how to open a file and read a line of
  text
- Section 8.3 shows you how to use a string stream to parse out a string.

### Sample Output

```bash
$ ./myprogram ../robots.txt
Opening file: ../robots.txt
--Robot stats--
name: bob
os: linux
2 sensors:
         sensor: dirt
         sensor: water
--Robot stats--
name: bill
os: win
6 sensors:
         sensor: fun
         sensor: sun
         sensor: green
         sensor: blue
         sensor: tall
         sensor: short
--Robot stats--
name: janet
os: mac
2 sensors:
         sensor: camera
         sensor: wind
--Robot stats--
name: jill
os: win
6 sensors:
         sensor: fun
         sensor: sun
         sensor: green
         sensor: blue
         sensor: tall
         sensor: short

--All Robot stats--
Number of linux Robots: 1
Number of win Robots: 2
Number of mac Robots: 1
Average number of sensors: 4
2 Robots tired to load more than 5 sensors
```

## Task 4 - Complete the Retrospective

Once you have completed all the tasks open the file **Retrospective.md** and
complete each section that has a TODO label.

For the **Experience** section you need to detail your experience with this lab.

- Were there any things that you struggled with?
- Were there any parts of this lab that were unclear or poorly specified?
- Were you able to get the entire project done?

For the **Known issues or Bugs** section you need to detail any issues or bugs
that you have in your code. For example maybe your code crashes randomly and you
couldn't figure out why. If your code doesn't have any issues you can simply
write NONE in this section.

For the **Sources used** section you must detail any sources you used outside of
the textbook or course website. If you write NONE in this section it is assumed
that you didn't use google at all. Be safe CITE!

## Task 5 - Add, Commit, Push your code

Once you are finished you need to make sure that you have pushed all your code
to GitHub for grading! You will not be submitting anything to canvas everything
will be submitted through GitHub as demonstrated in class.
