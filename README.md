# Door Locker Security System

## Description

Welcome to the Door Locker Security System project! This system is designed to provide secure access control to a door using a password. It consists of two ATmega32 Microcontrollers working in tandem, each responsible for different aspects of the system.

**MC1 - HMI_ECU (Human Machine Interface):** Handles user interaction through a 2x16 LCD and a 4x4 keypad. It is responsible for taking user inputs and displaying messages on the LCD.

**MC2 - Control_ECU:** Handles all processing and decision-making in the system, including password validation, door control, and alarm activation.

## System Sequence

### Step 1 - Create a System Password
- The LCD displays "Please Enter Password."
- The user enters a 5-digit password, with each digit represented by '*'.
- After entering the password, the system asks the user to re-enter it for confirmation.
- If the two passwords match, the system saves the password in EEPROM and proceeds to Step 2.
- If the passwords don't match, the user must repeat Step 1.

### Step 2 - Main Options
- The LCD continuously displays the main system options.

### Step 3 - Open Door
- The user enters the password to unlock the door.
- The system compares the entered password with the one stored in EEPROM.
- If the passwords match, the system unlocks the door, activating the DC motor for 15 seconds in the clockwise direction, displays "Door is Unlocking," holds the motor for 3 seconds, then rotates the motor for 15 seconds in the anti-clockwise direction with the message "Door is Locking."

### Step 4 - Change Password
- The user enters the password to change the current system password.
- The system compares the entered password with the one stored in EEPROM.
- If the passwords match, the system allows the user to create a new password by repeating Step 1.

### Step 5 - Password Mismatch Handling
- If the passwords are unmatched in Step 3 (Open Door) or Step 4 (Change Password), the system prompts the user for the password again.
- The system provides three attempts.
- After three consecutive mismatches, the system activates a buzzer for 1 minute, displays an error message on the LCD, locks the system, and returns to Step 2.


Please click the link to make sure everything works perfectly and passes all tests without any problems.

https://drive.google.com/file/d/1DrvVeS0JllRWZMgt91SSEO_xU7c0nioC/view?usp=drive_link
