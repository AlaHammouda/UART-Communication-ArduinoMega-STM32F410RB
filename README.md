# UART-Communication-ArduinoMega-STM32F410RB
 A test program which use UART protocole to establishe communication between ArduinoMega and STM32F410RB
 
 
 
 To test the program you have to : 
 
 1/ Connect the right RX TX pins in each Microcontroller .
 Rx Arduino -> Tx STM
 Tx Arduino ->Rx STM
 
 2/After you sent the code to each Microcontroller , Open Serial Monitor of the arduino 
 
 3/When press the Reset Button in STM32F410RB, it will send a task to the Arduino 
 
4/In the Serial Monitor of the arduino you will see a message that arduino is excuting the taskx and then 
it send back a confirmation message to STM32 so an LED will toggle .


