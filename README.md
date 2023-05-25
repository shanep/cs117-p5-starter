# Project 5 - Final Project

In this assignment, you will complete the ‘SmartPhone’ class and supply missing
methods of the ‘Computer’ class.

## Important Links

- Review the [grading rubric](https://shanepanter.com/cs452/grading-rubric.html)

## Objectives

- Creating derived classes (inheritance)
- Using multiple files (declaration files [header files] and definition/implementation files [source files])
- Overriding functions

## Task 1 - Write the program

You are given the base class, Electronic with all its data and methods (mutators
& accessors) and the derived class, Computer with some of its data and methods.

- You are not to modify the ‘Electronic’ class.
- You are not to modify the ‘Computer’ declaration (the header file, Computer.h file)
- Complete the missing methods of the ‘Computer’ class.
- The ‘Computer’ accessor, ‘print’ calls the print accessor in the Electronic
  class.  You are to write the ‘print’ accessor of the Computer class
  accordingly:
  - Use the accessors of the Electronic class to print out the ‘Electronic’ information INSTEAD of calling the print accessor of the Electronic class.
- Create a derived class from ‘Computer’. This class shall be named, ‘SmartPhone’.
- SmartPhone is a class with the following properties (refer to the class diagram for this project):
  - It has 1 constructor:
    - SmartPhone(Int: id, String: sNum, String: powSource, int     numCores, int memSize, string carrier, bool memCard)
  - It has 3 accessors:
    - string getCarrier()
    - bool hasMemoryCard()
    - void print()
  - It has 2 mutators:
    - void setMemoryCard(bool memCard)
    - void setCarrier(string carrier)
  - It has 2 data members:
    - string wirelessCarrier
    - bool memoryCard

Your code should:

- Create the declaration of the SmartPhone class using a header file, SmartPhone.h.
- Create the implementation of the SmartPhone class using the source file, SmartPhone.cpp.
- The file header is required for the SmartPhone declaration and implementation file only.
- Be as efficient as possible.

### Sample output

```text
Creating 3 object, a base class, a child class, and a grandchild...
         electronic: id = 345, Serial # = 34SD549, Power source = battery
         computer: id = 678, Serial # = C12345, Power source = AC, # Cores = 8, Memory size = 16
         phone: id = 999, Serial # = Ph234X999, Power source = battery, # Cores = 8, Memory size = 4,
                Carrier = AT&T, and has a memory card
Print out a base class object, electronic...
This electronic device::
        Id #:           345
        Serial #:       34SD549
        Power Source:   battery

Print out the computer object...
This electronic device::
        Id #:           678
        Serial #:       C12345
        Power Source:   AC
is a computer:
        Cores:          8
        Memory Size:    16

Print out the phone object...
This electronic device::
        Id #:           999
        Serial #:       Ph234X999
        Power Source:   battery
is a computer:
        Cores:          8
        Memory Size:    4
is a phone:
        Carried by:     AT&T
        SD card:        has a memory card.

changing the serial # of the phone to Ph456Z111...

changing the Carrier of the phone to T-mobile

changing the number of cores in the phone to 16

Verify the phone object has been updated...
This electronic device::
        Id #:           999
        Serial #:       PH456Z111
        Power Source:   battery
is a computer:
        Cores:          16
        Memory Size:    4
is a phone:
        Carried by:     T-mobile
        SD card:        has a memory card.

Modifying the electronic device..
Electronic device:
        ID:     666     Ser #:  eeee    PwrSrc: DC

Modifying the computer device..
computer device:
        ID:     678     Ser #:  cccc    PwrSrc: AC      #Cores: 64      MemSize:64

Modifying the phone device..
phone device:
        ID:     999     Ser #:  pppp    PwrSrc: battery #Cores: 128     MemSize:64      Carrier:Sprint  MemCard:empty
```

## Task 2 - Generate Build Files

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

## Task 3 - Compile your code

After you have run `release.sh` you can `cd` into the build directory to compile
and run the program.

```bash
shane|(master *%=):build$ make
[ 50%] Building CXX object src/CMakeFiles/myprogram.dir/solution.cpp.o
[100%] Linking CXX executable ../myprogram
[100%] Built target myprogram
```

If your code that you wrote in task 1 was correct you should see a executable
named `myprogram` that you can now run to see the output. If your program did
not compile you will need to return to task 1 and fix your code and then return
to this task to compile your code again. You only need to run the `release.sh`
script once if you are recompiling you can skip Task 2 above.

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
